#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    string arr[] ={"one","two","three","four","five","six","seven","eight"};
    cin >> a >> b;
    
    if (a <= 9) {
        if (b <= 9) {
            cout << arr[a-1] << endl;
            cout << arr[b-1] << endl;        
        }
        else {
        cout << arr[a-1] << endl;
        cout << "nine" << endl;
        }
    }
    if (b<=9) {
        cout << "nine" << endl;
        cout << arr[b-1] << endl;
    }
    
    if(a%2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    if(b%2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    
    
    
    return 0;
}