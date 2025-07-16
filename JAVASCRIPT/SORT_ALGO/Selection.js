

function Selection(){
    const arr= [3, 4, 20, 10, 6];
    const size = arr.length;

    for(let i=0;i<size-1;i++){
        let index=1;

        for(let j=i+1;j<size;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        let temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for(let i=0;i<size;i++){
        console.log(arr[i]);
    }
}
Selection();