#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int s; cin >> s;	

	vector<int> arr;
	for (int i = 0; i < s; ++i) {
		int n; cin >> n;
		arr.push_back(n);
	}
	int v = arr[arr.size() - 1];
	int i;
	for (i = arr.size() - 2; i >= 0; --i) 
	{
		if (arr[i] > v) {
			if (i == 0) {
				arr[i+1] = arr[i];
				arr[i] = v;
				break;
			}
			arr[i+1] = arr[i];
		} else {
			arr[i+1] = v;
			break;
		}
		for (int q = 0; q < arr.size(); ++q) {
			cout << arr[q] << " ";
		}
		cout << endl;
	}	
		for (int q = 0; q < arr.size(); ++q) {
			cout << arr[q] << " ";
		}
		cout << endl;
	return 0;
}
