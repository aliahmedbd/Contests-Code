
#include<iostream>
using namespace std;
int main()
{
	long long n, k, m, flag;   
	int t, counter;
	cin >> t;
	while (t--)
	{
		cin >> n >> k >> m;
		counter = 0;
		if (k <= m / n)
		{
			counter++;
			flag= n*k;
			while (k <= m / flag)
			{
				counter++;
				flag *= k;
			}
		}
		cout << counter<< endl;
	}
	return 0;
}
