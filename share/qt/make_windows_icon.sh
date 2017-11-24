#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/eltoken.ico

convert ../../src/qt/res/icons/eltoken-16.png ../../src/qt/res/icons/eltoken-32.png ../../src/qt/res/icons/eltoken-48.png ${ICON_DST}
