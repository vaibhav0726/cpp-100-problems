//Write a guessing game where the user has to guess a secret number. 
//After every guess the program tells the user whether their number was too large or too small. 
//At the end the number of tries needed should be printed. 
//It counts only as one try if they input the same number multiple times consecutively.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n, guessedNumber, count = 0;
	srand(time(0));
	n = rand() % 1000 + 1;
	while(true)
	{
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guessedNumber;
		count++;

		if (guessedNumber > n)
            cout << "Your guess is greater!\n\n";
		else if (guessedNumber < n)
			cout << "Your guess is smaller!\n\n";
		else{
			cout << "You are correct in " << count << " time(s) Congratulations!\n\n";
            break;
        }
	}

	return 0;
}
