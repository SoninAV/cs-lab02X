#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     if (a>b){
      cout << "MAX = " << a;
     }
     if (b>a){
      cout << "MAX = " << b;
     }
     else{
      cout << "A=B";
     }
    return 0;
}
