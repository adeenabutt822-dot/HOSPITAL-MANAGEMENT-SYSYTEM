#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Medical Part
void medicalPart() {
    ofstream file("medical.txt", ios::app);

    if (!file) {
        cout << "Error opening medical file!\n";
        return;
    }

    int choice;

    cout << "\n--- Medical Part ---\n";
    cout << "1. Diagnosis\n";
    cout << "2. Prescription\n";
    cout << "3. Lab Test\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        string diagnosis;

        cout << "Enter Diagnosis: ";
        getline(cin, diagnosis);

        file << "Diagnosis: " << diagnosis << endl;
        cout << "Diagnosis saved.\n";
    }
    else if (choice == 2) {
        string medicine;

        cout << "Enter Medicine Name: ";
        getline(cin, medicine);

        file << "Prescription: " << medicine << endl;
        cout << "Prescription saved.\n";
    }
    else if (choice == 3) {
        string test;

        cout << "Enter Lab Test Name: ";
        getline(cin, test);

        file << "Lab Test: " << test << endl;
        cout << "Lab test record saved.\n";
    }
    else {
        cout << "Invalid choice!\n";
    }

    file.close();
}

// Main Function
int main() {
    cout << "===== Hospital Management System =====\n";
    medicalPart();
    return 0;
}

