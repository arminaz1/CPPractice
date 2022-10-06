#include <iostream>
#include <string>

using namespace std;
auto a = 2;
auto b = 3.3 ;
auto c = 3.3f;
auto d = "b";
auto e = true;
auto f = 123456789;
auto g = -13123132;
int main(){
    // string str;
    // str >> cin;
    // cout << str << "HEllo" << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(g).name() << endl;
    return(0);
}