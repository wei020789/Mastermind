#include <iostream>
# include <ctime>
# include <cstdlib>
# include <string>
using namespace std;

string getRandom()
{
	srand(time(0));
	static  int nums[4] , num, i, j;
	string result = "";

	for (i = 0; i < 4; i++)
	{
		do
		{
			num = rand() % 10;
			for (j = 0; j < i; j++)
			{
				if (num == nums[j])
					break;
			}
		} while (j != i);
		nums[i] = num;
		result += ('0' + num);
	}
	return result;
}
bool Mastermind(string guess, string answer)
{
	int A = 0, B= 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (answer[i] == guess[j] && i == j)
				A++;
			else if (answer[i] == guess[j] && i != j)
				B++;
		}
	}
	cout << A << "A" << B << "B" << endl;
	if (A == 4) return true;
	return false;
}