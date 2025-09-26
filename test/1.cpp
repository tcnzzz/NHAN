#include <iostream>
using namespace std;

int tong1den10() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Tong tu 1 den 10 la: " << tong1den10() << endl;
    return 0;
}
