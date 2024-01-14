#include <iostream>

using namespace std;

int main() {

    int array[]={1,2,3,3,4,4,4,5};
    int n=8;
    int x=4;

    int idx=-1;

    int low=0;
    int high=n-1;

    while(low <=high) {
        int mid=low+(high-low)/2;
        if(array[n-1]==x) {
            idx=n-1;
            break;
        }
        else if(array[mid]==x) {
            if(array[mid+1]==x) {
                low=mid+1;
            }
            else {
                idx=mid;
                break;
            }
        }

        else if(array[mid]>x){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    if(idx==-1) {
        cout << "no ones is present in it";
    }
    else{
    cout << "last occurence of " << x << " is " << idx;
}

    return 0;
}