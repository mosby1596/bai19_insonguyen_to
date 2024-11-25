

#include <iostream>
using namespace std;
int main()
{
    cout << "kiem tra so co phai so nguyen to:\n";
    int so;
    int dem = 0;
    cout << "nhap so:"; cin >> so;
    for (int m = 1; m < so; m++)
    {
        dem = 0;
        for (int i =1 ; i <= m; i++)
        {
            if (m % i == 0) {
                dem++;
            }
        }
        if (dem == 2) {
            cout << m << " ";
        }
        return 0;
    }



