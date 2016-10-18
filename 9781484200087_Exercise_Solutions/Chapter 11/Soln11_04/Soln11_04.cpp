// Exercise 11.4 Using a friend function
/***********************************************************
 Implementing compare()as a friend is quite simple. We must
 declare the function as a friend in the class definition.
 We now need both objects as arguments and the code in the
 body of the function just compares the n members of the arguments.
 Both parameters are const references.
 ***********************************************************/
#include <iostream>
#include "Integer.h"

int main()
{
  std::cout << "Create i with the value 10." << std::endl;
  Integer i {10};
  i.show();
  std::cout << "Change value  of i to 15." << std::endl;
  i.setValue(15);
  i.show();
 
  std::cout << "Create j from object i." << std::endl;
  Integer j {i};
  j.show();
  std::cout << "Set value of j to 150 times that of i." << std::endl;
  j.setValue(150*i.getValue());
  j.show();

  std::cout << "Create k with the value 789." << std::endl;
  Integer k {789};
  k.show();
  std::cout << "Set value of k to sum of i and j values." << std::endl;
  k.setValue(i.getValue()+j.getValue());
  k.show();

  std::cout << "Result of comparing i and j is " << compare(i, j) << std::endl;
  std::cout << "Result of comparing k and j is " << compare(k, j) << std::endl;
}

int compare(const Integer& obj1, const Integer& obj2)
{
  if(obj1.n < obj2.n)
    return -1;
  else if(obj1.n==obj2.n)
    return 0;
  return 1;
}