#include<iostream>
#include <cmath>

// function that finds the hypotenuse of a triangle

int main ()
{
  
  double a;
  double b;
  double c;

  std::cout <<"Enter side A: ";
  std::cin>> a;

  std::cout <<"Enter side B: ";
  std::cin>> b;

  a=pow(a,2);
  b=pow(b,2); 
  c=sqrt(a+b);

  std::cout <<"side C: " <<c;

    return 0;

}




