#include <iostream>
#include <climits>

using namespace std;

int main() {
    int array[4][4]={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int m=4;
    int n=4;

    int row=-1;
    int max1=INT_MIN;

    for(int i=0;i<m;i++) {
        int idx=-1;
        int count=0;

        int low=0;
        int high=n-1;
       

      while (low<=high) {
        
        int mid=low+(high-low)/2;

        if(array[i][0]==1) {
            idx=0;
            break;
        }
        else if(array[i][mid]==1) {
            if(array[i][mid-1]==1) {
                high=mid-1;
            }
            else if(array[i][mid-1]==0) {
                idx=mid;
                break;
            }
        }
        else {
            low=mid+1;
        }
     }
     if(idx==-1) {
        count=0;
       }
       else{
        count=n-idx;
       }

       if(count>max1) {
        max1=count;
        row=i;
       }
       
    }
    if(row==-1) {
        cout << "no row has ones in it";
    }
    else
    cout << "row no. have max ones in it is " << row << endl;

    return 0;
}