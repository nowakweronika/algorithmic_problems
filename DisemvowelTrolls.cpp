# include <string>

using namespace std;

const int s = 10;
char vowels[s] = {'a', 'e', 'u', 'i', 'o',
                 'A', 'E', 'U', 'I', 'O'};

string disemvowel(const string& str) {
  string solution = "";
  for(int i = 0; i < str.length(); i++){
    bool isVowel = false;
    for(int j = 0; j < s; j++){
      if(str[i] == vowels[j]) isVowel = true;
    }
    if(!isVowel) solution += str[i];
  }
  return solution;
}
