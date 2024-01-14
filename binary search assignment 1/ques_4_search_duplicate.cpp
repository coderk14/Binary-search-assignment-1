#include <iostream>

using namespace std;

int main() {
    int array[]={1,2,3,4,5,5,6};
    int n=7;

    int low=0;
    int high=n-1;
    int idx=-1;

    while(low<=high) {
        int mid=low+(high-low)/2;
        if(array[mid]!=mid ) {
            low=mid+1;
        }
        else if(array[mid]==mid){
           if(array[mid-1]==array[mid]) {
            idx=mid-1;
            break;
           }
           else{
            high=mid-1;
           }
        }
       
    }

    cout << idx;
    return 0;
}