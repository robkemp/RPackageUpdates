## ----setup, include=FALSE------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)
knitr::opts_chunk$set(collapse = TRUE)
set.seed(13579)

## ----fig.width=4.5, fig.height=4-----------------------------------------
suppressPackageStartupMessages(library(stars))
m = matrix(1:20, nrow = 5, ncol = 4)
dim(m) = c(x = 5, y = 4) # named dim
(s = st_as_stars(m))

## ------------------------------------------------------------------------
dim(s[[1]])

## ----fig.width=4.5, fig.height=4-----------------------------------------
image(s, text_values = TRUE, axes = TRUE)

## ----fig.width=4.5, fig.height=4-----------------------------------------
attr(s, "dimensions")[[2]]$delta = -1
image(s, text_values = TRUE, axes = TRUE)

## ------------------------------------------------------------------------
tif = system.file("tif/L7_ETMs.tif", package = "stars")
st_dimensions(read_stars(tif))["y"]

## ------------------------------------------------------------------------
str(attr(st_dimensions(s), "raster"))

## ------------------------------------------------------------------------
attr(attr(s, "dimensions"), "raster")$affine = c(0.1, 0.1)
plot(st_as_sf(s, as_points = FALSE), axes = TRUE, nbreaks = 20)

## ------------------------------------------------------------------------
atan2(0.1, 1) * 180 / pi

## ------------------------------------------------------------------------
attr(attr(s, "dimensions"), "raster")$affine = c(0.1, 0.2)
plot(st_as_sf(s, as_points = FALSE), axes = TRUE, nbreaks = 20)

## ------------------------------------------------------------------------
atan2(c(0.1, 0.2), 1) * 180 / pi

## ------------------------------------------------------------------------
x = c(0,0.5,1,2,4,5)
y = c(0.3,0.5,1,2,2.2)
r = st_as_stars(list(m = m), dimensions = st_dimensions(x = x, y = y))
r
#plot(st_as_sf(r, as_points = FALSE), axes = TRUE, nbreaks = 20)
image(x, y, m, col = sf.colors(21))
x1 = c(0.25,0.75,1.5,3,4.5)
y1 = c(0.4,0.75,1.5,2.1)
image(x1, y1, m, col = sf.colors(21))

## ----eval=FALSE----------------------------------------------------------
#  install.packages("starsdata", repos = "http://pebesma.staff.ifgi.de", type = "source")

## ------------------------------------------------------------------------
(s5p = system.file("sentinel5p/S5P_NRTI_L2__NO2____20180717T120113_20180717T120613_03932_01_010002_20180717T125231.nc", package = "starsdata"))

## ----echo=FALSE----------------------------------------------------------
EVAL = s5p != ""

## ----eval=EVAL-----------------------------------------------------------
lat_ds = paste0("HDF5:\"", s5p, "\"://PRODUCT/latitude")
lon_ds = paste0("HDF5:\"", s5p, "\"://PRODUCT/longitude")
nit_ds = paste0("HDF5:\"", s5p, "\"://PRODUCT/SUPPORT_DATA/DETAILED_RESULTS/nitrogendioxide_summed_total_column")
lat = read_stars(lat_ds)
lon = read_stars(lon_ds)
nit = read_stars(nit_ds)
nit[[1]][nit[[1]] > 9e+36] = NA

ll = setNames(c(lon, lat), c("x", "y"))
nit.c = st_as_stars(nit, curvilinear = ll)
st_crs(nit.c) = 4326
nit.c

## ----eval=EVAL-----------------------------------------------------------
plot(nit.c, breaks = "equal", reset = FALSE, axes = TRUE, as_points = TRUE, pch = 16, key.pos = NULL)
maps::map('world', add = TRUE, col = 'red')

## ----eval=EVAL-----------------------------------------------------------
plot(nit.c, breaks = "equal", reset = FALSE, axes = TRUE, as_points = FALSE, border = NA)
maps::map('world', add = TRUE, col = 'red')

## ----eval=EVAL-----------------------------------------------------------
(nit.c = stars:::st_downsample(nit.c, 8))
plot(nit.c, breaks = "equal", reset = FALSE, axes = TRUE, as_points = TRUE, pch = 16)
maps::map('world', add = TRUE, col = 'red')

## ----eval=EVAL-----------------------------------------------------------
plot(nit.c, breaks = "equal", reset = FALSE, axes = TRUE, as_points = FALSE, border = NA)
maps::map('world', add = TRUE, col = 'red')

