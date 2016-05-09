// Example program for random number generation

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
	int r = (rand() % 100);
	cout << "TEMP" << r << "TEMP\n";
	
	int guess = -1;
	
	do
	{
		cout << "GUESS (from 0 to 100) : \n"; 
		cin >> guess;
		
		if (guess > r) cout << "Too high! \n"; 
		else if (guess < r) cout << "Too low! \n"; 
		else cout << "Congrats! \n";
	}
	while (guess != r);
	return 0;
}
