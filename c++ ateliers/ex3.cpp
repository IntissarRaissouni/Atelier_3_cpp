#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Complex {
    public:
        double re, im;
        Complex(double r, double i) {
            re = r;
            im = i;
        }
        Complex() {}
        Complex operator+(Complex b) {
            Complex a;
            a.re = this->re + b.re;
            a.im = this->im + b.im;
            return a;
        }
        Complex operator-(Complex b) {
            Complex a;
            a.re = this->re - b.re;
            a.im = this->im - b.im;
            return a;
        }
        Complex operator*(Complex b) {
            Complex a;
            a.re = this->re * b.re - this->im * b.im;
            a.im = this->re * b.im + this->im * b.re;
            return a;
        }
        Complex operator/(Complex b) {
            Complex a;
            a.re = (this->re * b.re + this->im * b.im) / (b.re * b.re + b.im * b.im);
            a.im = (this->im * b.re - this->re * b.im) / (b.re * b.re + b.im * b.im);
            return a;
        }
        void print() {
            cout << this->re;
            if (this->im < 0) {
                cout << this->im << "i" << endl;
            }
            else {
                cout << "+" << this->im << "i" << endl;
            }
        }
};

int main() {
    double re1, im1, re2, im2;
    char operation;
    cout << "Entrez les deux nombres complexes sous la forme a+bi" << endl;
    cin >> re1 >> im1 >> re2 >> im2;
    Complex c1(re1, im1);
    Complex c2(re2, im2);
    cout << "Quelle opération effectuer (+, -, *, /) ?" << endl;
    cin >> operation;
    if (operation == '+') {
        Complex c3 = c1 + c2;
        c3.print();
    }
    else if (operation == '-') {
        Complex c3 = c1 - c2;
        c3.print();
    }
    else if (operation == '*') {
        Complex c3 = c1 * c2;
        c3.print();
    }
    else if (operation == '/') {
        Complex c3 = c1 / c2;
        c3.print();
    }
    else {
        cout << "Opération invalide." << endl;
    }
    return 0;
}
