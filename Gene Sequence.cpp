# Contests-Code
Which problem I solve in various contests
#include <iostream>
using namespace std;
int main()
{
	int t;        
	cin >> t;       
	while (t--)    
	{
		int n, i, flag = 0, x;
		cin >> n;     
		int a[1000] = { 0 };
		for (i = 0; i<n; i++) 
		{
			cin >> x;     
			if (a[x + 1] == 0)   
			{
				a[x + 1] = 1;    
				flag++;     
			}
			else if (a[n - x] == 0) 
				
			{
				a[n - x] = 1;     
				flag++;         
			}
		}
		if (flag == n)   
		{
			cout << "YES" << endl;
		}
		else       
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
