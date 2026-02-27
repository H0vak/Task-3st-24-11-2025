#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long long n;
    int k;

    cout << "Введіть n та k: ";
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << "Результат: " << n;
    return 0;
}