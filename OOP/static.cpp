#include <bits/stdc++.h>
using namespace std;

// void f() {
  
//     // Static variable
//     static int count = 0;

//     // The value will be updated and carried over
//       // to the next function call
//     count++;
//       cout << count << " ";
// }

// int main() {
  
//       // Calling function f() 5 times
//     for (int i = 0; i < 5; i++)
//         f();
  
//     return 0;
// }

class hello{
    public:
    static int year;

    // void display(){
    //     cout<<year;
    // }
};
int hello::year=2024;
// int hello::year=2025; this will throw error because it will try to create a copy of year member which is not possible as year is static

int main(){
    hello obj;
    cout<<hello::year<<"\n";
    cout<<obj.year;
    return 0;
}