#!/bin/bash

gcc -Wall -Werror -pedantic -Wextra -c *.
ar -rc liball.a *.o
