#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int> vec){
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] == 42) break;
		cout << vec[i] <<endl;
	}
}

int main()
{
	vector<int> tmp{4, 5, 3, 3, 3, 3, 42, 33, 3};
	solution(tmp);
	return 0;
}
