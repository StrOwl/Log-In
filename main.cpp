#include <iostream>
using namespace std;
int alphabet(char let){
    if ((int(let) >=65) && (int(let) <= 90)){
        return int(let)-64;    }else if ((int(let) >=97) && (int(let) <= 122)){
        return int(let) - 96;    }else{
        return 0;    }

}

int main(){
    string word = "Hello world";    string key = "cat";    int k = 0;    string new_word = "";    for (int i = 0; i < word.length(); ++i) {
        if(((int(word[i]) >=65) && (int(word[i]) <= 90)) || ((int(word[i]) >=97) && (int(word[i]) <= 122))){
            new_word += char((alphabet(word[i]) + alphabet(key[k%key.length()]))%26 + 95) ;            k++;        }else{
            new_word += " ";        }
    }
    cout << new_word;    return 0;}