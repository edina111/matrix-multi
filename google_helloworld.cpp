// Example program
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    string hi = "Hello World!";
    
    for (int i =0; i <6; i++)
    {
        for (int j= 0; j<4; j++)
        {
            // 1st option for right align:
            // cout.width(17);
            // cout << hi;

            // 2nd option for left align:
             cout<< hi;
             cout.width(17);
        }
        cout<< "\n";
    }
}
