/*A 3D array
NAME FRENZY GATHERU
REG NO BSE-05-0163/2024
*/
#include <iostream>
using namespace std;

// Macro to input a 3D array
#define INPUT_3D_ARRAY(arr, x, y, z) \
    for (int i = 0; i < x; i++) { \
        for (int j = 0; j < y; j++) { \
            for (int k = 0; k < z; k++) { \
                cout << "Enter element [" << i << "][" << j << "][" << k << "]: "; \
                cin >> arr[i][j][k]; \
            } \
        } \
    }

int main() {
    int x, y, z;
    cout << "Enter dimensions (x, y, z) for 3D array: ";
    cin >> x >> y >> z;
    int arr[x][y][z];

    INPUT_3D_ARRAY(arr, x, y, z);

    // Display the array
    cout << "3D Array elements: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
