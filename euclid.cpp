// may 24, 2016
// euclid's gcd alg:
// given 2 numbers
// start subtracting the smaller from the greater 
// until one becomes 0
// at this moment the other one represents the gcd. Hurray. Print.


#include <iostream>
using namespace std;

int gcd_subtract (int a, int b)
{ 
  // subtract from the greater number until they become equal
  
  if (a == 0) return b;
  if (b == 0) return a;
  
  while (a!=b )
  {
    a > b ? a -= b : b -= a;    
  }    
  return a;
}

int gcd_divide (int a, int b)
{ 
  int t = -1;  
  while ( b != 0 )
  { 
    t = a % b;  // get the remainder
    a = b;      // save the value of b, as it should be the result at one time
    b = t;      // update b to the value of the remainder.
  }
  return a;
}

int gcd_divide_recursive (int a, int b)
{
  if ( b==0 ) return a;
  else
  {
    int temp = a%b;
    a = b;
    b = temp;
    gcd_divide_recursive (a, b);
  }
}


int main()
{
	
  int x;
  int y;
  std::cout << "1. number = ";  cin >> x;
  cout << "2. number = ";  cin >> y;
  
  cout << "\nGDT div = " << gcd_divide(x, y) << endl;
  cout << "\nGDT sbt = " << gcd_subtract(x, y) << endl;
  cout << "\nGDT div recursive = " << gcd_divide_recursive(x,y) << endl;
  
  return 0;
}