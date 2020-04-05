#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
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
     if (a<b){
      cout << "min = " << a;
     }
     if (b<a){
      cout << "min = " << b;
     }
     if (a==b){
     cout << "A=B";
     }
    return 0;
}
