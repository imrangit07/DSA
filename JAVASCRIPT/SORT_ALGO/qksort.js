function part(arr, low, high) {
    let pv = arr[low];
    let i = low + 1;
    let j = high;
    let temp;

    do {
        while (i <= high && arr[i] < pv) {
            i++;
        }
        while (arr[j] > pv) {
            j--;
        }
        if (i < j) {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    } while (i < j);

    // Swap pivot with arr[j]
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    
    return j;
}

function qksort(arr, low, high) {
    if (low < high) {
        let pv = part(arr, low, high);
        qksort(arr, low, pv - 1);
        qksort(arr, pv + 1, high);
    }
}

function main() {
    const arr = [5, 4, 6, 3, 7, 2, 8];
    const s = arr.length;

    qksort(arr, 0, s - 1);  // Note: s-1 here
    
    // Print the sorted array
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i]);
    }
}

main();