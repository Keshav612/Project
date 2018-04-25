//Program to implement Template
#include<iostream>
using namespace std;
/*int maximum(int a, int b, int c)
 { 
      int max = a; 
      if (b > max) max = b; 
      if (c > max) max = c; 
      return max; 
}
char maximum(char a, char b, char c)
 { 
      char max = a; 
      if (b > max) max = b; 
      if (c > max) max = c; 
      return max; 
}
double maximum(double a, double b, double c)
 { 
      double max = a; 
      if (b > max) max = b; 
      if (c > max) max = c; 
      return max; 
}
float maximum(float a, float b, float c)
 { 
      float max = a; 
      if (b > max) max = b; 
      if (c > max) max = c; 
      return max; 
}*/
template<class T>
T maximum(T a, T b, T c)
 { 
      T max = a; 
      if (b > max) max = b; 
      if (c > max) max = c; 
      return max; 
}

int main()
{
  cout<<maximum(3,4,5)<<endl;
  cout<<maximum(3.4,5.1,1.2)<<endl;
  cout<<maximum('a','d','b')<<endl;
  cout<<maximum(5.111111,3.22222,2.9999999)<<endl;
  return 0;
}
