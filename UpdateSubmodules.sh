#!/bin/bash
cd ./AppName/vendor/catch2
git checkout master
git pull

cd ../spdlog
git checkout v1.x
git pull
