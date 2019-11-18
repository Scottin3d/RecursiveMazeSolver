Scott Shirley 0760484  <br />
Notes  <br />
I tried for the longest time to get the recursion to work with 
using std::string as a return type, but could not get the back-
tracking to work properly without proper true/false returns.
Therefore I used a helper function that referenced "Path" and 
for each successful move, would add to the "Path".  Also, beca-
use of this, the go*() functions were sort of moot and redundent
to the helper function.  I could just call the helper function
itself with passed locations of the current position.

Some things I wanted to and will try to implement later:
I watched an interesting video: https://www.youtube.com/watch?v=rop0W4QDOUI
Basically, the algorithm first scans the entire array and creates
nodes of connecctions much like the example of airports used in
class.  This cuts down on the total number of calculations that
would be required to make to solve larger mazes.  Plus it is an 
interesting concept and solution.

Questions moving forward: Go of return types of recursive functions and how to properly use them.



# Maze

Goals: Understand recursion and solve a maze

Given a text file representing a maze, as below, find the path for
creature to get to the exit and mark the path explored.
```
20 7
0 18
xxxxxxxxxxxxxxxxxx x
x     x       xxxx x
x xxxxx xxxxx   xx x
x xxxxx xxxxxxx xx x
x x          xx xx x
x xxxxxxxxxx xx    x
xxxxxxxxxxxxxxxxxxxx
```

Solution:
`*` shows the final path to exit

`+` shows areas explored but not part of the final path

```
Path: EEENNNEEEEEESEESSSEEENNNNN
xxxxxxxxxxxxxxxxxx*x
x     x*******xxxx*x
x xxxxx*xxxxx***xx*x
x xxxxx*xxxxxxx*xx*x
x x+****+++++xx*xx*x
x xxxxxxxxxx+xx****x
xxxxxxxxxxxxxxxxxxxx
```

## Compile and Run

```
./simplecompile.sh
```

## Misc

This file is part of a repository located at
https://github.com/pisan342/ass3-maze-starter

