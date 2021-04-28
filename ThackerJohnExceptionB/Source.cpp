//John Thacker
//4/27/2020
//CIS 1221

#include<iostream>

using namespace std;

template <typename T>

//required half function

T half(T val) {

    T res;

    res = val / 2;

    if (*typeid(val).name() == 'i') {

        if (res * 2 != val) {  

            res++;

        }

    }

    return res;

}



int main() {

    double a = 7.0;

    float b = 5.0f;

    int c = 3;

    

    cout << "Half values of : \n";

    cout << "\t" << a << " : " << half(a) << "\n";

    cout << "\t" << b << " : " << half(b) << "\n";

    cout << "\t" << c << " : " << half(c) << "\n";

}