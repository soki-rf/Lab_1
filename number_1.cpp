#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if((a > b) && (a > c)){
        cout << "max= " << a << endl;
    } else{
        if((b > c) && (b > a)){
            cout << "max= " << b << endl;
        } else{
            cout << "max= " << c << endl;
        }
    }
    return 0;
}
