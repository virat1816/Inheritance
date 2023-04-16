#include<iostream>
using namespace std;

class X {
public:
    int a, b, c;

public:
    X(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

class Y : public X {
public:
    Y(int a, int b, int c) : X(a, b, c) {}

    int sum_of_cubes() {
        int sum_cubes = a*a*a + b*b*b + c*c*c;
        return sum_cubes;
    }
};

int main() {
    
    Y obj(2, 3, 4);
   
    int sum_of_cubes = obj.sum_of_cubes();

    cout << "Sum of cubes of the numbers: " << sum_of_cubes << endl;

    return 0;
}
