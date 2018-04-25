/*Write a program which accepts a number and a divisor to divide it. If the divisor is zero the program terminates abruptly. Modify the program by adding exception handling in it and prevent abnormal termination.*/
//using try and catch
#include <iostream>
using namespace std;

float Divide(float a,float b)
{
  if(b==0)
    throw 0;
  return (a/b);
}
int main() 
{
  try
  {
    cout<<Divide(98,45);
  }
  catch(int)
  {
    cout<<"Divisor can't be zero"<<endl;
  }
}
