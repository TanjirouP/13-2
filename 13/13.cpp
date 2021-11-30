

#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    if (n % 2 == 0) ++n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == n / 2 || i == n / 2) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << '\n';
    }
}

