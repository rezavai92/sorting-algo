
function merge(left,right){

    let size_left = left.length;
    let size_right = right.length;

    let A=[]
    let i =0;
    let j =0;
    let k=0;

    
    while(i<size_left && j<size_right){

        if(left[i] > right[j] ){

            A.push(right[j]);
            j++;

        }
        else {
            
            A.push(left[i])
            i++;
            
        }

    

    }

    if(i<left.length){

       A= A.concat(left.slice(i))
    }

    if(j<right.length){
       A= A.concat(right.slice(j))
    }

    return A;

}

function mergeSort(arr){

    let size = arr.length;
    let mid = Math.floor(size/2);
    if(size>1)
    {

        let leftArr = [];
        let rightArr = [];
    
        leftArr=(arr.slice(0,mid))
        rightArr = arr.slice(mid)

        return merge(mergeSort(leftArr),
        mergeSort(rightArr) );
    
    

    }
    else{
        return arr;
    }
    
}

console.log(mergeSort([5,4,6,4,2,1]));