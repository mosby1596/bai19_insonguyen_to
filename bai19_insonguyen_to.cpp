#include <iostream>
using namespace std;
int main() {
	int n;
	int dem = 0;
	cout << "nhap so:\n"; cin >> n;
	for (int y = 1; y <= n; y++) {
		dem = 0;
		for (int i = 1; i <= y; i++)
		{
			if (y % i == 0) {
				dem++;

			}
		}
		if (dem == 2) {
			cout << y << " la so nguyen to ";
		}
	
	return 0;

}



