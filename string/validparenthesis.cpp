#include<iostream>
#include<stack>
using namespace std;
int main()
{  
    string s="{[(]]}";
    // cin>>s;
    int n=s.length();
    stack<char> st;
    int i=0;
    while(i<n){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'||s[i]==']'||s[i]=='}'){
            st.pop();
        }
        
        i++;
    }
    if(st.empty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }
    
    return 0;
}



// #include <iostream>
// #include <set>
// #include <string>

// int main() {
//     std::set<std::string> uniqueStrings;

//     // Adding strings to the set
//     uniqueStrings.insert("apple");
//     uniqueStrings.insert("banana");
//     uniqueStrings.insert("apple");  // Duplicate entry, will not be added
//     uniqueStrings.insert("cherry");

//     // Displaying the unique strings
//     for (const auto& str : uniqueStrings) {
//         std::cout << str << std::endl;
//     }

//     return 0;
// }
