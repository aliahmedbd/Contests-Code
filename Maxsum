# Contests-Code
Which problem I solve in various contests
#include<iostream>
using namespace std;
int main(){
	int arr[300001];
	int n, m;
	int counter;
	long long sum, msum;
	while (cin >> n >> m){
		sum = 0;
		msum = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		counter = 0;
		for (int i = 0; i < n; i++){
			sum = arr[i] + sum;
			for (int j = 0; sum > m; j++){
				sum = sum - arr[counter];
				counter++;
				if (msum <= sum && sum <= m){
					msum = sum;
					break;
				}
			}
			if (msum <= sum && sum <= m){
				msum = sum;

			}

		}
		cout << msum << endl;

	}
}
