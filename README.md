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

if the change of position is on the Z axis in a 3D game use:

movment(axis, speed, time, position (on axis));

all of these are neccessary and the only varibles you can use in this function
The function returns the calculations on where the player moved.

REMEMBER: To use the function for all axis (you have to use the same variables for all the functions in a frame). You can use this Engine for a 3D and a 2D game.

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

Output:

```
3
```

Example for a 2D game:

```
#include <iostream>
#include "movement.hpp"
using namespace std;
 
int main() {
  double x = movement("x", 20, 5, 0, 50);
  double y = movement("y", 20, 5, 0, 50);
  cout << x << "\n";
}
```

Example for a 3D game:

```
#include <iostream>
#include "movement.hpp"
using namespace std;
 
int main() {
  double x = movement("x", 20, 5, 0, 50);
  double y = movement("y", 20, 5, 0, 50);
  double z = movement("z", 20, 5, 0);
  cout << x << "\n";
}
```
 
# ¡WARNING!

This library is JUST CALCULATED and was not tested on a real c++ game.
