#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    ll t;
    cin>>t;

    while(t--)
    {

    }

}


#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main()
{
    cpp_int num = "12345678901234567890123456789012345678901234567890123456789012345678901234567890";
    cpp_int den = 20;
    cpp_int rem = num % den;
    cout << rem << endl;
    return 0;
}

#include <iostream>
#include <numeric>

int main() {
    int a = 24, b = 6;
    if (std::gcd(a, b) == b) {
        std::cout << a << " is divisible by " << b << std::endl;
    } else {
        std::cout << a << " is not divisible by " << b << std::endl;
    }
    return 0;
}