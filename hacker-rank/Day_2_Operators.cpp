#include <bits/stdc++.h>
using namespace std;
int main()
{
    double price;
    int tip;
    int tax;
    cin >> price >> tip >> tax;

    double cost = (tip / 100.0) * price;
    cost += (tax / 100.0) * price;
    cout << round(price + cost) << endl;
    return 0;
}