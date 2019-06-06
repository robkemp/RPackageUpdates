## ----setup, include=FALSE------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)
knitr::opts_chunk$set(collapse = TRUE)
ev = FALSE

## ------------------------------------------------------------------------
# devtools::install_github("r-spatial/stars")
library(stars)

## ------------------------------------------------------------------------
methods(class = "stars")

## ------------------------------------------------------------------------
tif = system.file("tif/L7_ETMs.tif", package = "stars")
x <- tif %>% read_stars 
par(mar = rep(0,4))
image(x, col = grey((4:10)/10))

## ------------------------------------------------------------------------
x

## ------------------------------------------------------------------------
library(dplyr)
as.tbl_cube(x)

## ------------------------------------------------------------------------
par(cex.axis = .7) # font size axis tic labels 
geomatrix = system.file("tif/geomatrix.tif", package = "stars")
geomatrix %>% read_stars %>% st_as_sf(as_points = FALSE) %>%
  plot(axes =TRUE, main = "geomatrix.tif", graticule = TRUE)

## ------------------------------------------------------------------------
geomatrix %>% read_stars %>% st_dimensions

## ----eval=ev-------------------------------------------------------------
#  prec = read_stars("data/full_data_daily_2013.nc")

## ----eval=ev-------------------------------------------------------------
#  prec

## ----eval=ev-------------------------------------------------------------
#  x = c(
#  "avhrr/avhrr-only-v2.19810901.nc",
#  "avhrr/avhrr-only-v2.19810902.nc",
#  "avhrr/avhrr-only-v2.19810903.nc",
#  "avhrr/avhrr-only-v2.19810904.nc",
#  "avhrr/avhrr-only-v2.19810905.nc",
#  "avhrr/avhrr-only-v2.19810906.nc",
#  "avhrr/avhrr-only-v2.19810907.nc",
#  "avhrr/avhrr-only-v2.19810908.nc",
#  "avhrr/avhrr-only-v2.19810909.nc"
#  )
#  
#  (y = read_stars(x, quiet = TRUE))

## ----eval=ev-------------------------------------------------------------
#  library(abind)
#  z <- y %>% select(sst) %>% adrop

## ----eval=ev-------------------------------------------------------------
#  df = as.data.frame(z)
#  df$sst = unclass(df$sst)
#  library(ggplot2)
#  library(viridis)
#  library(ggthemes)
#  ggplot() +
#    geom_tile(data=df, aes(x=x, y=y, fill=sst), alpha=0.8) +
#    facet_wrap("time") +
#    scale_fill_viridis() +
#    coord_equal() +
#    theme_map() +
#    theme(legend.position="bottom") +
#    theme(legend.key.width=unit(2, "cm"))

## ------------------------------------------------------------------------
nc = st_read(system.file("gpkg/nc.gpkg", package="sf")) 
to = from = st_geometry(nc) # 100 polygons: O and D regions
mode = c("car", "bike", "foot") # travel mode
day = 1:100 # arbitrary
library(units)
units(day) = as_units("days since 2015-01-01")
hour = set_units(0:23, h) # hour of day
dims = st_dimensions(origin = from, destination = to, mode = mode, day = day, hour = hour)
(n = dim(dims))
traffic = array(rpois(prod(n), 10), dim = n) # simulated traffic counts
(st = st_as_stars(list(traffic = traffic),  dimensions = dims))

## ------------------------------------------------------------------------
st %>% as.tbl_cube 

## ----eval=ev-------------------------------------------------------------
#  b <- st %>% as.tbl_cube %>%
#    filter(mode == "bike") %>%
#    group_by(hour) %>%
#    summarise(traffic = mean(traffic)) %>%
#    as.data.frame()
#  require(ggforce)
#  ggplot() +
#    geom_line(data=b, aes(x=hour, y=traffic))

