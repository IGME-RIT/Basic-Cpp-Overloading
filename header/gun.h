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

#pragma once        // Prevents the compiler from reading this file twice.

// This is a struct declaration.
struct Magazine
{
    // member variables
    int bullets;
    int capacity;

    // Constructor definition.
    Magazine(int bulletsinitial, int bulletsCapacity);  // Overloaded constructors are defined the same way as the first constructor.
    Magazine(int bulletsCapacity);                      // The only difference between them is the parameters.


    ~Magazine();    // Note: while a constructor may be overloaded, a destructor may not.
                    // They don't return anything and can't have parameters, so it makes sense.
};

// This is a class declaration.
// A class is a type of object.
class Gun
{
    Magazine mag;

public:
    // Constructor and destructor:
    Gun(Magazine m);
    ~Gun();

    void Fire();        // Function overload declaration.
    void Fire(int qty); // ]There's really nothing special about this at all.


    void Reload();
    bool IsLoaded();
};