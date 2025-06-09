/*#include <iostream>
using namespace std;

int main() {
    int a;
    cout<< "value of a" << endl;
    cin>>a;
    if (a>0){
    cout<<"a is positive"<< endl;

    }*/
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Value of a: " << endl;
    cin >> a;

    if (a > 0) {
        cout << "a is positive" << endl;
    } else if (a < 0) {
        cout << "a is negative" << endl;
    } else {
        cout << "a is zero" << endl;
    }

    return 0;
}
