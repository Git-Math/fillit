# fillit
Program that takes a file as parameter, which contains a list of [tetriminos](https://en.wikipedia.org/wiki/Tetromino), and arranges them
in the smallest possible square.  
It implements a [backtracking](https://en.wikipedia.org/wiki/Backtracking) algorithm in order to find the solution.

## How to compile
From the root of the repository run `make`.

## How to run
From the root of th repository run `./fillit [tetriminos file]`

## Tetriminos file
The tetriminos file contains a list of tetriminos:
```
$ cat resources/big_sample.fillit
...#
...#
...#
...#

....
....
....
####

.###
...#
....
....

....
..##
.##.
....

....
.##.
.##.
....

....
....
##..
.##.

##..
.#..
.#..
....

....
###.
.#..
....
```

## Example
```
$ ./fillit resources/big_sample.fillit
ABBBB.
ACCCEE
AFFCEE
A.FFGG
HHHDDG
.HDD.G
```
