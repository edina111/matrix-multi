// Example program
#include <iostream>
#include <string>

using namespace std;

// Matrix 1st : 1 2 3 4 5 6 7 8 1 
// Matrix 2nd : 1 2 3 3 2 1 4 5 2
// --------------------------------
// Result      19 21 11 43 48 29 35 35 31
 
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

int main()
{
    int m1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 1};
    int m2[3][3] = {1, 2, 3, 3, 2, 1, 4, 5, 2};
    int result[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    // the first and second for represents the going through result matrix
    // the third for calculates the SUM of the respectiv raw/coloumn
    for (int i=0; i< 3; i++)
    {
        for (int j=0; j< 3; j++)
        {
            int sum = 0;
            for (int k = 0; k< 3; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            result [i][j] = sum;
        }
    }
  
  printMatrix(result);
  
}
