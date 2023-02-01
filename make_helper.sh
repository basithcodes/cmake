#!/bin/bash
cd build
cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png
cmake --build .
