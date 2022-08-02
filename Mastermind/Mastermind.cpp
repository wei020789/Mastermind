# include "Header.h"
# include <iostream>
using namespace std;

int main()
{
	int count = 1;
	bool success = false;
	
	string result = getRandom();
	string guess;
	
	cout << "產生的亂數為";
	for (int i = 0; i < 4; i++)
		cout << result[i];
	cout << endl;

	cout << "NO." << '\t' << "Guess" << "\t"<<"Result" << endl;
	while (!success)
	{
		cout << "請輸入一個四位數:";
		cin >> guess;
	
		if (guess.size() == 4)
		{
			cout << count << '\t' << guess << '\t';
			success = Mastermind(guess, result);
			count++;
		}	
	}
	cout << "BINGO" << endl;
	system("PAUSE");
	return 0;
}
