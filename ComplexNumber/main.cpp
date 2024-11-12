#include <iostream>
#include "ComplexNumber.hpp"

using std::cout;
using std::endl;

int main()
{
    jm::jpo::ComplexNumber c1(3.0, -1.5);
    jm::jpo::ComplexNumber c2(-1.5, 2.5);
    jm::jpo::ComplexNumber<int> c3(3, 4);
    jm::jpo::ComplexNumber<int> c4(2, 5);
    jm::jpo::ComplexNumber<float> c5(1.0, 2.5);
    jm::jpo::ComplexNumber<double> c6(3.0, -1.5);

    cout << "c3 + c4 = " << c3 + c4 << endl;
    cout << "c5 + c5 = " << c5 + c5 << endl;

    cout << "c1 + c2 = " << c1 + c2 << endl;

    c1 += c2;
    cout << "c1 += c2 = " << c1 << endl;

    cout << "c1 - c2 = " << c1 - c2 << endl;

    c1 -= c2;
    cout << "c1 -= c2 = " << c1 << endl;

    cout << "c1 * c2 = " << c1 * c2 << endl;

    c1 *= c2;
    cout << "c1 *= c2 = " << c1 << endl;

    cout << "c1 / c2 = " << c1 / c2 << endl;

    c1 /= c2;
    cout << "c1 /= c2 = " << c1 << endl;

    if (c1 == c2)
    {
        cout << "c1 is equal c2" << endl;
    }
    else
    {
        cout << "c1 is not equal c2" << endl;
    }

    if (c1 == c6)
    {
        cout << "c1 is equal c6" << endl;
    }
    else
    {
        cout << "c1 is not equal c6" << endl;
    }

    if (c1 != c2)
    {
        cout << "c1 is not equal c2" << endl;
    }
    else
    {
        cout << "c1 is equal c2" << endl;
    }

    if (c1 != c6)
    {
        cout << "c1 is not equal c6" << endl;
    }
    else
    {
        cout << "c1 is equal c6" << endl;
    }

    c1 = c2;
    cout << "c1 = c2 = " << c1 << endl;

    double number = 1.5;
    cout << "c1 + " << number << " = " << c1 + number << endl;
    cout << "c1 - " << number << " = " << c1 - number << endl;

    c1 += number;
    cout << "c1 += " << number << " = " << c1 << endl;
    c2 -= number;
    cout << "c2 -= " << number << " = " << c1 << endl;

    return 0;
}