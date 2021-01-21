# Game-Engine

to implement in c++ game:

>  #include "movement.hpp"

then to calculate player movment:
initialize a variable (in this example it is x):

>  double x = 

then use the function movment:

> movment();

cheatsheet:

movment(axis, speed, time, position (on axis), angle);

all of these are neccessary and the only varibles you can use in this function
The function returns the calculations on where the player moved.

# Example

```
#include <iostream>
#include "movement.hpp"
using namespace std;
 
int main() {
  double x = movement("x", 20, 5, 0, 50);
  cout << x << "\n";
}

```

# !WARNING¡

This library is JUST CALCULATED and was not tested on a real c++ game.
