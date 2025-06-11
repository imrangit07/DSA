// #include <iostream>
// using namespace std;

// void merges(int arr[], int low, int mid, int high)
// {
//     int arr2[high + 1];
//     int i = low;
//     int j = mid + 1;
//     int k = low;

//     while (i <= mid && j <= high)
//     {
//         if (arr[i] < arr[j])
//         {
//             arr2[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             arr2[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     while (i <= mid)
//     {
//         arr2[k] = arr[i];
//         i++;
//         k++;
//     }

//     while (j <= high)
//     {
//         arr2[k] = arr[j];
//         j++;
//         k++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = arr2[i];
//     }
// }

// void mergeSort(int arr[], int low, int high)
// {

//     if (low < high)
//     {
//         int mid = (low + high) / 2;
//         mergeSort(arr, low, mid);
//         mergeSort(arr, mid + 1, high);
//         merges(arr, low, mid, high);
//     }
// }

// int main()
// {
//     int arr[] = {3, 5, 4, 1, 2, 6, 7, 10, 9, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, size - 1);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

void merges(int arr[], int low, int mid, int high) {
    int arr2[high + 1];  // temporary array
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            arr2[k++] = arr[i++];
        } else {
            arr2[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        arr2[k++] = arr[i++];
    }

    while (j <= high) {
        arr2[k++] = arr[j++];
    }

    for (int i = low; i <= high; i++) {
        arr[i] = arr2[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merges(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {3, 5, 4, 1, 2, 6, 7, 10, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
