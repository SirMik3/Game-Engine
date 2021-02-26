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

if you're not using the Z axis add a last variable and make it 0:

```
#include <iostream>
#include "movement.hpp"
using namespace std;
 
int main() {
  double x = movement("x", 20, 5, 0, 50, 0);
  double y = movement("y", 20, 5, 0, 50, 0);
  double z = movement("z", 20, 5, 0);
  cout << x << "\n";
}
```

and use another variable to called jump time on the Z axis:

```
#include <iostream>
#include "movement.hpp"
using namespace std;
 
int main() {
  double x = movement("x", 20, 5, 0, 50, 0);
  double y = movement("y", 20, 5, 0, 50, 0);
  double z = movement("z", 20, 5, 0);
  cout << x << "\n";
}
```

so the cheatsheet should look like this:


movement on x and y axis:

 movement(axis, speed, time, position (on axis), angle, 0 (this is always 0 on x & y axis)) 
 
movement on z axis:

 movement(axis, speed, time, 0, 0, jumptime) 


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

# Conclusion

Because my English teachers told me that I should **ALWAYS** do a conclusion, here I am. I may make a game (for a more understandable example, because I am sure you didn't understand anything in this document).

Good luck in game development, 

Signing off,
Mike
