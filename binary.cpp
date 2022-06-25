#include<iostream>

using namespace std;

int binarysearch(int arr[] ,int size ,int key){
    int start = 0;
    int end = size-1;

    int mid =start + (end - start)/2;
    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
            }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
 int even[6] ={1,24,8,27,98,99};
 int odd[5]={8,28,78,98,1};

    int index = binarysearch(even,6,98);

    cout<<"index of 98 is " <<index<<endl;

    return 0 ;

}