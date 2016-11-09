/*
Overloading
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Include iostream for output during the program.
#include <iostream>
using namespace std;
#include "../header/gun.h"

int main() 
{
    // Overloading is a feature of C++, which allows multiple functions to have the same name.
    // This is allowed so long as the compiler can tell the difference between them (which one you want to use)
    // That means they have to have different return types, or parameters etc.


    {
        // C++ allows constructor overloading, which allows multiple constructors to be defined for the same class or struct.
        Magazine mag = Magazine(8, 8);  // This constructor takes an initial value, and a capacity.
        Magazine mag2 = Magazine(7);    // This constructor only takes a capacity, and defaults the initial value to full.


        // Create a gun object with that magazine using the gun constructor.
        Gun gun = Gun(mag2);

        cout << "Press enter to fire." << endl;

        // Loop forever
        while (true)
        {
            cin.get();  // Wait for user to press enter.

            if (gun.IsLoaded())
                gun.Fire(3);    // Fire 3 times. This function is overloaded with gun.Fire(), but the compiler can figure out which one this is.
            else
                gun.Reload();   // Reload the gun.
        }
    }


    return 0;   // End Program.
}