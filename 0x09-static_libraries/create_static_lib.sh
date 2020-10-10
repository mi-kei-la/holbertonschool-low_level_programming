#!/bin/bash
ls *.c | gcc -c | ar -rc liball.a *.o | ranlib liball.a
