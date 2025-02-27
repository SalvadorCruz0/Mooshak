#include <iostream>
using namespace std;
int main()
{
	int N, i, Altura[100],contar=0,maxAltura=0;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> Altura[i];
	}
	for ( i = 0; i < N; i++) {
		if (Altura[i] > maxAltura)
		{
			contar++;          
			maxAltura = Altura[i]; 
		}
	}
	cout << contar<<"\n";
}