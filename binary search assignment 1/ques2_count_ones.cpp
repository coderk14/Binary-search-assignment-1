#include <iostream>

using namespace std;

int main() {
    int array[]={0,0,0,0,1,1};

    int n=6;

    int idx=-1;

    int low=0;
    int high=n-1;

    while (low<=high) {
        int mid=low+(high-low)/2;
        if(array[mid]==1) {
            if(array[mid-1]==1) {
                high=mid-1;
            }
            else {
                idx=mid;
                break;
            }
        }
        else {
            low=mid+1;
        }
    }

    int count=n-idx;

    cout << "total number of 1 in the array is " << count;

    return 0;
}
