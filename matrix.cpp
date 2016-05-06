// Example program
#include <iostream>
#include <string>

using namespace std;

// Matrix 1st : 1 2 3 4 5 6 7 8 1 
// Matrix 2nd : 1 2 3 3 2 1 4 5 2
// --------------------------------
// Result      19 21 11 43 48 29 35 35 31



 const  int m1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 1};
 const  int m2[3][3] = {1, 2, 3, 3, 2, 1, 4, 5, 2};
 

void printMatrix( int m[3][3])
{
     for (int i=0; i< 3; i++)
    {
        for (int j=0; j< 3; j++)
        {
            cout<< m[i][j] << " ";
        }
        cout << endl;
    }
 
}

int sumofRawColoum(int raw, int coloum)
{
  int sum = 0;
  
  for (int j = 0; j< 3; j++)
  {
    sum += m1[raw][j] * m2[j][coloum];
  }
  return sum;
}

int main()
{
  //int m1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 1};
  //int m2[3][3] = {1, 2, 3, 3, 2, 1, 4, 5, 2};
  
  int result[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
          
  for (int i=0; i< 3; i++)
    {   
        for (int j=0; j< 3; j++)
        {
            result [i][j] = sumofRawColoum(i, j);
        }
    }
 
 printMatrix(result);
    
  cout << "test2" << endl;
}
