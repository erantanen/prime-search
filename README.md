Primes: a search for
--------------------


Okay was playing with some silly ideas, and looking over my many FizzBuzz programs when I realized that they were the beginnings of prime searches.
 
 
This is in a very rough state,  I am looknig to break this apart to use with threads and mpi now that I have aprox 3/4's of the numbers removed with the moduls and sqrt tests. 

**
Next step?
Using the linkd list, use the list with a group of threads were each thread handles a node (or int) to run modulus against that number from a smaller and smaller list. 

Because we only want so many threads running on one heap, use of mpi to create more heaps will be required as the search grows. As the serach grows so will the lenght of time the threads are working on each node. 




The program is very simple:
 - it pulls a start:end point for search of primes
 - moduls is used at 2,3,5 rotations
 - a list is built
 - sqrt is ran against list 
 - output of list (unfinished list)


**
Todo:
 - major makefile clean
 - adjust linklist to make smaller
 - build threads 
 - seperate list and work layered division




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


Expected output: a short version
 7 	 11 	 13 	 17 	 19 	 23 	 29 	 31 	 37 	 41 
```


