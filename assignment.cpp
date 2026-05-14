#include <iostream>
#include <string>
using namespace std;

int main() {

    // QUESTION 1: Linear Search Algorithm
    int n;
    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    // Input names and ages
    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    // Search for a name
    string key;
    cout << "\nEnter name to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (names[i] == key) {
            cout << key << " was found and is aged "
                 << ages[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    // QUESTION 2: Bubble Sort Names
    string arr[] = {"Zuck", "Shayd", "Emely",
                    "Amjed", "Esther", "Manar", "Anne"};

    int size = 7;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in ascending order:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // QUESTION 3: Bubble Sort Numbers
    int numbers[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int s = 8;

    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s - i - 1; j++) {

            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "\n\nNumbers in ascending order:\n";
    for (int i = 0; i < s; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
