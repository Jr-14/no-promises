#! /bin/bash

if [ ! -d "./bin" ]; then
    mkdir "./bin";
fi

if [ -d "./bin" ]; then
    rm -rf "./bin";
    mkdir "bin";
fi

gcc -Wall -o ./bin/threads ./src/thread_futures.c -pthread
