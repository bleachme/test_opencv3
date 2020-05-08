#!/bin/bash

g++ main.cpp -o test -I /usr/local/include/opencv/ -L /usr/local/lib/opencv -l opencv_core -l opencv_highgui -l opencv_imgproc  -l opencv_imgcodecs
