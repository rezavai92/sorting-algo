let arr =[5,6,2,3,1,32,0,12,54];

function bubbleSort(arr){

    for(let i =0;i<arr.length;i++){
        let check=0;
        for (let j=0;j<arr.length-i-1;j++){
            if(arr[j]>arr[j+1]){

                let tmp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
                check++;

            }
        }

        if(check==0){
            return arr;
        }
    }

}

console.log(bubbleSort(arr))