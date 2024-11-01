#include <iostream>

#include <string>

using namespace std;
int main() {
    string binaryInput;
    int countOnes = 0;

   
    cout << "Please enter a binary number :";
    cin >> binaryInput;

   

    for (char bit : binaryInput) {
        if (bit == '1') {
            countOnes++;
        } else if (bit != '0') {
            cout << "Please enter zero and one only :" << endl;
            return 1; 
        }
    }


    if (countOnes % 2 == 0) {
        cout << "The number of ones is even" << endl;
    } else {
        cout << "The number of ones is odd" << endl;
    }

    return 0;
}