#!/bin/bash 
gcc -Wall -Werror -pedantic -Wextra -c *.o
ar rc liball.a *.o 
