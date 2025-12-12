#include <iostream>
using namespace std;
template <class T>
class BaseCalculator {
public:
    T calcSum(T a, T b) {
        T sum = a + b;
        cout << "Sum: " << sum << endl;
        return sum;
    }
};

// Derived class template
template <class T>
class AdvancedCalculator : public BaseCalculator<T> {
public:
    T calcAverage(T a, T b, T c) {
        T avg = (a + b + c) / 2.0;
        cout << "Average: " << avg << endl;
        return avg;
    }

    T calcProduct(T a, T b, T c, T d) {
        T prod = a * b * c * d;
        cout << "Product: " << prod << endl;
        return prod;
    }
};

int main() {
    cout << "Float calculator:\n";
    AdvancedCalculator<float> obj1;
    obj1.calcSum(1.2, 2.0);
    obj1.calcAverage(1.2, 2.3, 3.4);
    obj1.calcProduct(1.2, 2.0, 3.3, 9.023);

    cout << "\nInt calculator:\n";
    AdvancedCalculator<int> obj2;
    obj2.calcSum(1.2, 2);                // 1.2 becomes 1
    obj2.calcAverage(1.2, 2.3, 3.4);     // all values truncated
    obj2.calcProduct(1.2, 2, 3.3, 9.023); // all values truncated

    return 0;
}
