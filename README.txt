Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Overloading Tutorial!
Prerequesites: None

Overloading allows for multiple functions to have
the same name, but with different parameters.

If you want to add two integers together,
you can make a function like this:

void add(int a, int b)
{
  printf("Answer %d\n", a + b);
}

If you want to add two floats together,
you can make a function like this:

void add(float a, float b)
{
  printf("Answer %f\n", a + b);
}

With overloading functions, we can have both of these
functions in the same CPP file, without getting any errors
