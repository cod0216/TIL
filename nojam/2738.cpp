#include "iostream"

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b ;
	int array1[a][b], array2[a][b], array3[a][b];

	for ( int i = 0; i < a ; i++)
		for (int j = 0; j < b; j++)
			cin >> array1[i][j];
		
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> array2[i][j];
	
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			array3[i][j] = array1[i][j] + array2[i][j];
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{	
			cout << array3[i][j];
			cout << " ";
		}
		cout << "\n";
	}

	return 0;
}
