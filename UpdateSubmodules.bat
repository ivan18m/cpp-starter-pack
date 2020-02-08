@echo off
call cd AppName\vendor\catch2
call git checkout master
call git pull

call cd ..\spdlog
call git checkout v1.x
call git pull
PAUSE