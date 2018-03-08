#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/Shard.ico

convert ../../src/qt/res/icons/Shard-16.png ../../src/qt/res/icons/Shard-32.png ../../src/qt/res/icons/Shard-48.png ${ICON_DST}
