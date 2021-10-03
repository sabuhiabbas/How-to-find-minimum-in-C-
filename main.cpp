#include <iostream>
#include <limits.h>

using namespace std;
int main(){

	int n, m, minV = INT_MAX;

	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> m;

		if(minV > m) minV = m;
	}

	cout << minV << endl;

	return 0;
}
