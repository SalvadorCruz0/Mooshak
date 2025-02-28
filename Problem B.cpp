#include <iostream>
using namespace std;
int main()
{
	int A, L, C, B;
	cin >> A; cin >> L; cin >> C;
	B = A * L * C;
	if (A >= 3)
	{
		if (B >= 50)
		{
			cout << 1 << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
	}
	else
	{
		cout << 0 << "\n";
	}
	return 0;
}