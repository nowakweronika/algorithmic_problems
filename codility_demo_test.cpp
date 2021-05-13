#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    unsigned int sizeOfA = A.size();
    unsigned int helper = 0;
    for(unsigned int i = 0; i < sizeOfA; i++){
        if(A[i] <= 0) helper++;
    }

    A.erase(A.begin(), A.begin() + helper);

    if(A.empty()) return 1;

    for(int i = 1; i < 1000000; i++){
        if(i != A[i-1]) return i;
    }
}

int main()
{
	vector<int> abc{-3, 0, 1, 3};
	cout << solution(abc);
	return 0;
}
