#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the + operator to add two complex numbers
    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp;
    }

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 2.3);  // First complex number
    Complex c2(1.6, 3.7);  // Second complex number

    // Adding two complex numbers using the overloaded + operator
    Complex c3 = c1 + c2;

    // Display the result
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "Sum = "; c3.display();

    return 0;
}
