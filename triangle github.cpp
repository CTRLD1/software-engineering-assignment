#include<iostream>
using namespace std;

int main()
{
	int height, base;
	float ans;

	cout << "ENTER HEIGHT AND BASE : ";
	cin >> height >> base;

	ans = (0.5) * height * base;

	cout << " AREA OF TRIANGLE IS : " << ans;

	return 0;
}