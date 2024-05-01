#include <iostream>

using namespace std;


int main()
{
	int number = 0;
	unsigned long long int sum = 0;

	cout << "Enter the last number: ";
	cin >> number;


	for (int i = 3; i < number; i++)
	{
		if (i % 3 == 0 or i % 5 ==0)
		{
			sum += i;
		}
	}

	cout << "Sum = " << sum;

}

