## ----setup, include=FALSE------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)
knitr::opts_chunk$set(collapse = TRUE)

## ------------------------------------------------------------------------
library(stars)

## ------------------------------------------------------------------------
tif = system.file("tif/L7_ETMs.tif", package = "stars")
x = read_stars(tif)
str(x)
x

## ------------------------------------------------------------------------
(x = read_stars(tif, options = c("OVERVIEW_LEVEL=1")))
image(x)
(x = read_stars(tif, options = c("OVERVIEW_LEVEL=2")))
image(x)
(x = read_stars(tif, options = c("OVERVIEW_LEVEL=3")))
image(x)

## ------------------------------------------------------------------------
names(x) = "value"
df = as.data.frame(x)
library(ggplot2)
library(viridis)
library(ggthemes)
ggplot() +  
  geom_tile(data=df, aes(x=x, y=y, fill=value), alpha=0.8) + 
  facet_wrap("band") +
  scale_fill_viridis() +
  coord_equal() +
  theme_map() +
  theme(legend.position="bottom") +
  theme(legend.key.width=unit(2, "cm"))

## ------------------------------------------------------------------------
aperm(x, c(1,3,2))
aperm(x, c("band", "x", "y"))

## ------------------------------------------------------------------------
nc = system.file("nc/tos_O1_2001-2002.nc", package = "stars")
(x = read_stars(nc))
plot(x, main = "")

## ------------------------------------------------------------------------
geomatrix = system.file("tif/geomatrix.tif", package = "stars")
x = read_stars(geomatrix)
st_dimensions(x)
library(sf)
s = st_as_sf(x, as_points = FALSE)
par(cex.axis = .7) # font size axis tic labels 
plot(s, axes =TRUE, main = "geomatrix.tif", graticule = TRUE)

