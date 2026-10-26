#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main()
{
	srand(time(0));
	char continueWork = 'y';

		while (continueWork == 'y' ||  continueWork == 'Y')
		{
			int secretNumber = rand() % 100 + 1;
			int guess = 0;
			int attempts = 0;
			
			while (guess != secretNumber && attempts < 5)
			{

				cout << "guess the number" << endl;
				cin >> guess;
				attempts++;

				if (secretNumber == guess)
				{
					cout << "yes u won!" << endl;
				}
				else if (secretNumber > guess)
				{
					cout << "too low!" << endl;
				}
				else
				{
					cout << "too high!" << endl;
				}
			}

				if (guess != secretNumber)
					{
				cout << "game over the number was: " << secretNumber << endl;
					}
	
				do
				{
				cout << "do you want to countinue? y/n!" << endl;
				cin >> continueWork;

				if (continueWork != 'y' &&
					continueWork != 'Y' &&
					continueWork != 'n' &&
					continueWork != 'N')
					{
					cout << "pls right y / r" << endl;
					}
				}
				while (continueWork != 'y' &&
					continueWork != 'Y' &&
					continueWork != 'n' &&
					continueWork != 'N');
			} 

			cout << "game finished" << endl;
			return 0;
}