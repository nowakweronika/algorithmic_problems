#include <iostream>
#include <string>

using namespace std;

map<char, int> dict {{'I', 1},
                      {'V', 5},
                      {'X', 10},
                      {'L', 50},
                      {'C', 100},
                      {'D', 500},
                      {'M', 1000}};

int solution(string roman) {
  int sol = 0;
  for(int i = 0; i < roman.size(); i++){
    if(dict[roman[i]] < dict[roman[i+1]]) sol -= dict[roman[i]];
    else sol += dict[roman[i]];
  }
  return sol;
}
