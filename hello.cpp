#include <iostream>
#include <string>
using namespace std;

class Individual {
private:
    string firstName, lastName;
    int yearsOld;

public:
    Individual() : firstName(""), lastName(""), yearsOld(0) {}

    void setDetails(const string& fn, const string& ln, int age) {
        firstName = fn;
        lastName = ln;
        yearsOld = age;
    }

    int retrieveAge() const {
        return yearsOld;
    }

    void showDetails() const {
        cout << "Full Name: " << firstName << " " << lastName << " | Age: " << yearsOld << endl;
    }
};

int main() {
    const int peopleCount = 10;
    Individual group[peopleCount];

    for (int i = 0; i < peopleCount; ++i) {
        string firstName, lastName;
        int age;

        cout << "Provide data for individual " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> firstName;
        cout << "Last Name: ";
        cin >> lastName;
        cout << "Age: ";
        cin >> age;

        group[i].setDetails(firstName, lastName, age);
    }

    int sumAges = 0;
    for (int i = 0; i < peopleCount; ++i) {
        sumAges += group[i].retrieveAge();
    }
    double avgAge = static_cast<double>(sumAges) / peopleCount;
    cout << "Average age among all individuals: " << avgAge << endl;

    return 0;
}
