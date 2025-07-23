/*a c++ array for deleting values in an array 
NAME Frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include <iostream>
using namespace std;

int main() {
    int scores[6] = {0};  // Array with default value 0
    int index, size = 5;

    // Initialize array with default values
    for(int i = 0; i < size; i++) {
        scores[i] = i + 2;
    }

    // Print initial array
    cout << "Initial Array:\n";
    for(int i = 0; i < size; i++) {
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    // Input index to delete
    cout << "\nEnter the index (0-" << size - 1 << ") of the element to delete: ";
    cin >> index;

    if(index < 0 || index >= size) {
        cout << "Invalid index! Must be between 0 and " << size - 1 << ".\n";
        return 1;
    }

    // Shift elements to the left
    for(int i = index; i < size - 1; i++) {
        scores[i] = scores[i + 1];
    }

    // Set last element to 0
    scores[size - 1] = 0;

    size--;  // logical size reduced

    // Print updated array
    cout << "\nArray After Deletion:\n";
    for(int i = 0; i < 5; i++) {  // always print 5 elements
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    return 0;
}
