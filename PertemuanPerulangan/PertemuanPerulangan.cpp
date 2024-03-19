#include <iostream>
using namespace std;

int main()
{
	int i;
	int arr[5];

	for (i = 60; i > 10; i -= 10)
	{
		cout << i << "Selamat Pagi Dunia" << endl;
	}

	cout << "Nilai i terakhir : " << i << endl;

	for (i = 0; 1 < 5; i++)
	{
		cout << "Masukan nilai index ke- " << i << " :";
		cin >> arr[i];
	}

	for (i = 0; i < 5; i++)
	{
		cout << "data array ke- " << i << " : " << arr[i] << endl;
	}
	return 0;
}