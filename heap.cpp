#include <iostream>
using namespace std;

//           12

//        10    11

//      6   5  4   3

int left(int i){

return i*2;
}

int right (int i){

return i*2+1;

}

void max_heapify(int heap[],int s,int i){
int l,r,biggest;

l = left(i);
r = right(i);

if(l<s && heap[l] > heap[i] ){
    biggest = l;
}
else{
    biggest=i;
}

if(r<s && heap[r] > biggest ){
    biggest = r;
}

if( i!= biggest )
 {
     int temp  = heap[i];
    heap [i] = heap[biggest];
    heap[biggest] = temp;
    max_heapify(heap,s,biggest);

 }


}

void min_heapify (int heap[],int s,int i){

    int l = left(i);
    int r = right(i);
    int lowest;

    if(l<=s-1 && heap[l] < heap[i]){
        lowest = l;
    }
    else{

        lowest = i;
    }

    if(r<=s-1 && heap[r] < heap[lowest]){

        lowest = r;
    }

    if(lowest != i){
        int tmp = heap[i];
        heap [i] = heap[lowest];
        heap [lowest]= tmp;


        min_heapify(heap,s,lowest);
    }


}


void build_heap(int heap[],int s){

    int i;

    for(i=s/2;i>=1;i--){
        min_heapify(heap,s,i);
    }

}

void heap_sort(int heap[],int s){

    for(int i=s-1;i>1;i--){

        int tmp = heap[1];
        heap[1] = heap[i];
        heap[i] = tmp;

        s--;

        max_heapify(heap,s,1);

    }

}


int main (){
int heap_size =7;
int a[]={0,2,4,12,6,8,9,15};

build_heap(a,8);

for(int i=1;i<8;i++){
    cout<<a[i]<<"\t"<<"left child is "<<a[left(i)]<<"right child is "<<a[right(i)] <<endl;
}
heap_sort(a,8);


for(int i=1;i<8;i++){
    cout<<a[i]<<"\t" <<endl;
}

}
