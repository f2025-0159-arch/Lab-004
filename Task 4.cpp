#include <iostream>
using namespace std;

int main() {
    int currentYear, birthYear, age;

    cout << "Enter the current year: " << endl;
    
    cin >> currentYear;

    cout << "Enter the birth year: " << endl;
    cin >> birthYear;

    age = currentYear - birthYear;
    cout << "Applicant's age: " << age << endl;

    if (age >= 18 && age <= 28) {
        cout << "Applicant is eligible for hiring." << endl;
    } else {
        cout << "Applicant is not eligible." << endl;
    }

    return 0;
}
            
