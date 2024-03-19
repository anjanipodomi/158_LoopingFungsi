#include <iostream>
using namespace std;

int Panjang, Lebar;

void inputdata() {
	cout << "Masukan Nilai Panjang : ";
	cin >> Panjang;
	cout << "Masukan Nilai Lebar : ";
	cin >> Lebar;
}

int hitungluas() {
	return Panjang * Lebar;
}

void display() {
	cout << "Luasnya adalah : " << hitungluas() << endl;
}


int main() {
	inputdata();
	display();
}
