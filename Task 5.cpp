#include <iostream>
using namespace std;

int main() {
    double length1, width1, length2, width2;
    double area1, area2;

    
    cout << "Enter the length of Rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of Rectangle 1: ";
    cin >> width1;

    
    cout << "Enter the length of Rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of Rectangle 2: ";
    cin >> width2;


    area1 = length1 * width1;
    area2 = length2 * width2;

    cout << "Area of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 << endl;


    if (area1 == area2) {
        cout << "Both rectangles have equal areas." << endl;
    } else {
        cout << "The rectangles have different areas." << endl;
    }

    return 0;
}
