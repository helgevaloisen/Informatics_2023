#include <iostream>
#include <cmath>
#include <vector>

double Tangent(double a) {

return sin(a) / cos(a);
}

double Cotangent(double a) {

return cos(a) / sin(a);
}

double Division(double a, double b) {

return a / b;
}

double Round_to(double a, double precision) {

return std :: round(a/precision) * precision;
}

double Problem(double x) {
    double a{0.1}, b{0.5}, precision{0.0001};
    double y = Division(pow(Tangent(b), 3) * x + a, pow(Cotangent(a), 2) * x + b);
    return Round_to(y, precision);
}

int main()
{

 double x_st{0.15}, x_fin{1.37}, x_dif{0.25};
 std :: vector <double> x_var {0.2, 0.3, 0.44, 0.6, 0.56};

 std :: cout << "Problem A answers: " << '\n';

 for (double x = x_st; x <= x_fin; x += x_dif) {
    std :: cout << "Calculation result is " << Problem(x) << " for x: " << x << '\n';
 }

 std :: cout << "Problem B answers: " << '\n';

 for (int i = 0; i < x_var.size(); i ++) {

    std :: cout << "Calculation result is " << Problem(x_var[i]) << " for x: " << x_var[i] << '\n';
    }
}
