#include <iostream>
using namespace std;

int main()
{
	int n1, n2, sum=0, w1, w2;
	cin >> n1 >> n2;
	w1 = n1;
	w2 = n2;	

	for ( ; n1>=n2; --n1)
		sum += n1;
	cout << sum << endl;

	int sum2 = 0;
	while ( w1>= w2 )
	{
		sum2 += w1--;
	}
	cout << sum2 << endl;
	

	return 0;
}



