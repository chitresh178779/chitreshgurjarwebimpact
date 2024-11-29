#include<iostream>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s = "leetcode";
    int n = s.length();
    
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (isVowel(s[i]) && isVowel(s[j])) {
            swap(s[i], s[j]);
            i++;
            j--;
        } else {
            if (!isVowel(s[i])) i++;
            if (!isVowel(s[j])) j--;
        }
    }

    cout << s;
    return 0;
}
