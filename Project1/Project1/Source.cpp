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
    double x = 3.36;
    double gh = pow(-9.24, 2);
    double b = 1 - ((x + y) / (fabs(gh))) + ((pow(y, 2)) / factorial(3)) +(pow(z,3)/factorial(5))+(exp(x-y)/(z+y));
    
  
};

class ZavdClassv2 {
    public:
    double y = 3.29;
    double z = -9.24;
    double x = 3.36;
    ZavdClass okk;
    double yh = okk.b; //b
   
    double first = (log(abs(y-sqrt(abs(pow(x,2))-yh)))*(y-pow(x,2)/pow((z+4*pow(y,2)), 2/3)));

};

int main() {
    ZavdClass obj; 
    cout << "b = " << obj.b << endl;

    ZavdClassv2 yii;
    cout << "a= " << yii.first;
    return 0;
}
