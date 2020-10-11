#!/bin/bash
gcc -c -Wall -Werror -Wextra and -pedantic *.c
ar rc liball.a *.o
