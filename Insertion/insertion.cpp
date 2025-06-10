// #include <iostream>
// using namespace std;

// void Insertion(int arr[], int size)
// {

//     for (int i = 1; i < size; i++)
//     {
//         int mins = i;

//         while (mins > 0 && arr[mins] < arr[mins - 1])
//         {
//             int sw = arr[mins];
//             arr[mins] = arr[mins - 1];
//             arr[mins - 1] = sw;
//             mins--;
//         }

//     }
// }

// int main()
// {
//     int arr[] = {5, 4, 6, 2, 1};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     Insertion(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Current element to be inserted
        int j = i - 1;     // Start comparing with the previous element

        // Shift elements greater than 'key' to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift right
            j--;
        }

        arr[j + 1] = key; // Place 'key' in its correct position
    }
}

int main() {
    int arr[] = {5, 4, 6, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}