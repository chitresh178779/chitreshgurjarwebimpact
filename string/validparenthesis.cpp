#include<iostream>
#include<stack>
using namespace std;

int main() {  
    string s = "{[()]}";  
    int n = s.length();
    stack<char> st;
    bool isValid = true;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (st.empty()) {
                isValid = false;
                break;
            }
            if (s[i] == ')' && st.top() == '(') {
                st.pop();
            } else if (s[i] == ']' && st.top() == '[') {
                st.pop();
            } else if (s[i] == '}' && st.top() == '{') {
                st.pop();
            } else {
                isValid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        isValid = false;
    }

    if (isValid) {
        return true;
    } else {
        return false;
    }

    return 0;
}
