#include<iostream>
#include "CodeChef February.h"
using namespace std;

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };  //Division Number
	int N;							 //Selected Number
	int b[100];
	int i = 0, c = 0;

	std:: cout << "Enter N \n";
	std::cin >> N;

	if (N >= 2 || N <= 1000)
	{
		for (i = 0; i < 10; i++)
		{
			if (N % a[i] == 0)
			{
				b[i] = a[i];

				if (b[i] >= c)
					c = b[i];
			}
		}
		
		
		std::cout << c << " ";
	}

	else
	{
		std::cout << "Error Number Out of Scope";
	}

	return 0;
}