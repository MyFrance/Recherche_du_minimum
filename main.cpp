#include <iostream>
using namespace std;

int main()

{
	int tableau[10];
	 

	for (int i = 0; i < 10; i++)
	{
		cout << "  " << i << " : ";
		cin >> tableau[i];

		if (tableau[0] > tableau[i])
		{
			tableau[0] = tableau[i];

			
		}
		
	}

	cout << " Le max  est :  " << tableau[0] << endl;
}