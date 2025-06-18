#include <iostream>
#include <windows.h>
using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define POWER(x, n) ([](int base, int exp) { int res = 1; for (int i = 0; i < exp; ++i) res *= base; return res; })(x, n)
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 5, b = 8;

    cout << "Меньшее из " << a << " и " << b << ": " << MIN(a, b) << endl;
    cout << "Большее из " << a << " и " << b << ": " << MAX(a, b) << endl;
    cout << a << " в квадрате: " << SQUARE(a) << endl;
    cout << a << " в степени 3: " << POWER(a, 3) << endl;
    cout << a << (IS_EVEN(a) ? " — чётное" : " — нечётное") << endl;
    cout << b << (IS_ODD(b) ? " — нечётное" : " — чётное") << endl;

    return 0;
