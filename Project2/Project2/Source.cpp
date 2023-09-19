#include <iostream>
#include <cmath> 

using namespace std;

class ZavdClass {
public:
    int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    double y = 3.29;
    double z = -9.24;
    double gh = pow(-9.24, 2);
    double b; 

    void Calculate() {
        cout << "Табуляція b" << endl;
        for (double x = -1; x <= 1; x += 0.2) {
            b = 1 - ((x + y) / (fabs(gh))) + ((pow(y, 2)) / factorial(3)) + (pow(z, 3) / factorial(5)) + (exp(x - y) / (z + y));
            cout << "b = " << b << endl;
        }
        cout << "Табуляція a" << endl;
        for (double x = -1; x <= 1; x += 0.2) {
            double yh = b;
            double first = (log(abs(y - sqrt(abs(pow(x, 2)) - yh))) * (y - pow(x, 2) / pow((z + 4 * pow(y, 2)), 2.0 / 3.0)));
            cout << "a = " << first << endl;
        }
    }

    
};

int main() {
    setlocale(LC_ALL, "Ukr");
    ZavdClass okk;
    okk.Calculate();
    

    return 0;
}
