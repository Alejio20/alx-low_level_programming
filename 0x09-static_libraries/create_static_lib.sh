#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
