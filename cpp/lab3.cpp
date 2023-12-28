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

int main()
{

 double a{0.1}, b{0.5}, x_st{0.15}, x_fin{1.37}, x_dif{0.25}, precision{0.0001};
 std :: vector <double> x_var {0.2, 0.3, 0.44, 0.6, 0.56};

 std :: cout << "Problem A answers: " << '\n';

 for (double x = x_st; x <= x_fin; x += x_dif) {

    double y = Division(pow(Tangent(b), 3) * x + a, pow(Cotangent(a), 2) * x + b);
    double result = Round_to(y, precision);
    std :: cout << "Calculation result is " << result << " for x: " << x << '\n';
    }

 std :: cout << "Problem B answers: " << '\n';

 for (int i = 0; i < x_var.size(); i ++) {

    double y = Division(pow(Tangent(b), 3) * x_var[i] + a, pow(Cotangent(a), 2) * x_var[i] + b);
    double result = Round_to(y, precision);
    std :: cout << "Calculation result is " << result << " for x: " << x_var[i] << '\n';
    }

}
