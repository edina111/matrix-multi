#include <iostream> 
#include <cstring> 

int main(int argc, char* argv[]) 
{
    using namespace std;
    int sum=0; 
    string s; 
    cout<<"Input: \nEnter the string:\n";
    cin>>s;
   
    for (int i = 0; i<s.length(); i++)
    {
        // cout<< s.at(i) << " " << i << endl;
        int asciival = s[i];
        // cout << asciival << endl;
        sum += asciival;
    }
    cout<<"Output: \nThe decrypted string value is: \n"<<sum; 
} 
