#include <bits/stdc++.h>
using namespace std;

bool apakahAngkaPrima(int n, int i = 2)
{
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;

	return apakahAngkaPrima(n, i + 1);
}

int main()
{
	int n;
    cout << "Masukkan angka: "; cin >> n;
	if (apakahAngkaPrima(n))
		cout << "Angka Prima";
	else
		cout << "Bukan Angka Prima";

	return 0;
}