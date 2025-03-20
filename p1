#include <iostream>
using namespace std;

int getMaxElement(int arr[], int size) {
    int maximum = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}

int getMinElement(int arr[], int size) {
    int minimum = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

struct Individual {
    string firstName;
    string lastName;
    int age;
};

int main() {
    int firstArraySize, secondArraySize;

    cout << "Size of first array: ";
    cin >> firstArraySize;
    int firstArray[firstArraySize];

    cout << "Input elements for first array:\n";
    for (int i = 0; i < firstArraySize; ++i) {
        cin >> firstArray[i];
    }

    int maxInFirst = getMaxElement(firstArray, firstArraySize);
    cout << "Maximum in first array: " << maxInFirst << endl;

    cout << "\nSize of second array: ";
    cin >> secondArraySize;
    int secondArray[secondArraySize];

    cout << "Input elements for second array:\n";
    for (int i = 0; i < secondArraySize; ++i) {
        cin >> secondArray[i];
    }

    int minInSecond = getMinElement(secondArray, secondArraySize);
    cout << "Minimum in second array: " << minInSecond << endl;

    int personCount = 0, ageSum = 0;
    cout << "\nNumber of individuals: ";
    cin >> personCount;

    Individual people[personCount];

    for (int i = 0; i < personCount; ++i) {
        cout << "\nDetails of individual " << i + 1 << ":\n";
        cout << "First name: ";
        cin >> people[i].firstName;
        cout << "Last name: ";
        cin >> people[i].lastName;
        cout << "Age: ";
        cin >> people[i].age;

        ageSum += people[i].age;
    }

    double averageAge = static_cast<double>(ageSum) / personCount;
    cout << "\nAverage age: " << averageAge << endl;

    return 0;
}
