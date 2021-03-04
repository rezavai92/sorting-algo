let arr=[3,2,1,4,6,12,43,0,-1]

function selectionSort(arr){

    for(let i=0;i<arr.length;i++){
        let min = arr[i]
        for(let j=i;j<arr.length;j++){
            if(arr[j] < min )
            {min =arr[j];
            let tmp = arr[i];
            arr[i]=arr[j];
            arr[j] = tmp;
            }
        }

        console.log(arr)
    }
    return arr;
}

console.log(selectionSort(arr))
