#include<iostream>
using namespace std;
int main() {
	int broj;
	cout << "Upiši broj: ";
	cin >> broj;
	int brojilo = 0;
	for (int i = 1; i <= broj;i++) {
		if (broj % i == 0 && broj!=1) {
			brojilo++;
		}
	}
	if (brojilo==2) {
		cout << "Broj je prim\n";
	}
	else {
		cout << "Broj nije prim\n";
	}
	return 0;
}