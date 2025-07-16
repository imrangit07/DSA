const sortAlgo = (arr,size)=>{
    
    for (let i = 0; i < size; i++) {
        let isSort=false;
        for (let j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSort=true;
            }
        }
        if(isSort==false){
            break;
        }
    }
}

const bubbleSort = () => {
    const arr = [3, 4, 20, 10, 6];
    const size = arr.length;
    
    sortAlgo(arr,size);

    for (let i = 0; i < size; i++) {
        console.log(arr[i]);
    }
}
bubbleSort();