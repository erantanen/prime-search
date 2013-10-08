Primes: a search for
--------------------


Okay was playing with some silly ideas, and looking over my many FizzBuzz programs when I realized that they were the beginnings of prime searches.
 
 (more later)
 
This is in a very rough state, and as all ideas, I am looknig to break this apart to use with threads and mpi.


The program is very simple:
 - it pulls a start:end point for search of primes
 - moduls is used at 2,3,5 rotations
 - a list is built
 - sqrt is ran against list 
 - output of list


**
Todo:
 major makefile clean
 adjust linklist to make smaller
 adjust printing so it does not scroll off of page (silly tweek) 




Compiling
---------

```
make
```

Execute
-------

To execute the program you can use the following arguments:
 - **-h**: outputs the help text
 - **-v**: outputs a arbitrary version number
 - **-s**: starting number
 - **-e**: ending number

Example:
```
./prime-search -s 0 -e 100



