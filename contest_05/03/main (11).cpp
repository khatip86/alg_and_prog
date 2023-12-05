#include <sstream>

class Complex {
private:
double re, im;

public:
Complex(double r, double i) : re(r), im(i) {}

Complex(const std::string& num) {
std::istringstream iss(num);

char sign;
iss >> re >> sign >> im;

if (sign == '-') im = -im; 
}

Complex operator+(const Complex& other) const {
return Complex(re + other.re, im + other.im);
}

Complex operator-(const Complex& other) const {
return Complex(re - other.re, im - other.im);
}

Complex operator*(const Complex& other) const {
return Complex(re * other.re - im * other.im, re * other.im + im * other.re);
}

Complex operator/(const Complex& other) const {
double denominator = other.re * other.re + other.im * other.im;
return Complex((re * other.re + im * other.im) / denominator, (im * other.re - re * other.im) / denominator);
}

friend std::ostream& operator<<(std::ostream& out, const Complex& num){
out << (num.re == 0.0 ? 0.0 : num.re)
<< (num.im < 0 ? "":"+") 
<< (num.im == 0.0 ? 0.0 : num.im) << 'j';
return out;
}
};