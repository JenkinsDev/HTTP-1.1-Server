#!/bin/bash

mainc="src/main.c"
cfiles=( "$mainc" )

for cfile in src/*.c; do
    if [ $cfile != $mainc ]; then
        cfiles+=( $cfile )
    fi
done

gcc -std=c99 "${cfiles[@]}" -o out/http1
