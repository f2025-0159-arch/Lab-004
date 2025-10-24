#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
double r;
    cin >>r;
    double h;
    cin >> h;
    double area;
    cin>>area;
    float PI=3.14;

    area = 2 * PI * r * h + 2 * PI * r * r;
    double volume = PI * r *r* h;

    cout << "surface area: " << area << endl;
    cout << "Volume of the cylinder: " << volume << endl;


    return 0;
}
