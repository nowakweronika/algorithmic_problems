#include <vector>
#include <iostream>

using namespace std;

bool small_enough(vector<int> arr, int limit) {
  for(int i = 0 ; i < arr.size(); i++ ){
    if(arr[i] > limit) return false;
  } 
  return true;
}

int main()
{
	vector<int> tmp{6, 7, 88, 4, 7};
	int n = 90;
	cout << small_enough(tmp, n);
	return 0;
}
