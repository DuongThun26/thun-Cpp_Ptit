#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int b[101] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[i] += a[i][j];
			}
		}
		int c[101] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				c[i] += a[j][i];
			}
		}
		int max = 1;
		for(int i = 0; i < n; i++){
			max = fmax(b[i], max);
		}
		for(int i = 0; i < n; i ++){
			max = fmax(max, c[i]);
		}
		long long bc = 0;
		for(int i = 0; i < n; i++){
			bc += max - b[i];
		}
		cout << bc << endl;
	}
	return 0;
}
