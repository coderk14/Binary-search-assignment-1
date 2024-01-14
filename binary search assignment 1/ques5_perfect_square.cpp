#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "enter your number" << endl;
    cin >>x;

    bool flag=false;

    if(x==0 || x==1) {
        flag=true;
    }
    else{
        int low=1;
        int high=x;

        while(low<=high) {
            int mid=low+(high-low)/2;
            if(mid*mid==x){
                flag=true;
                break;
            }
            else if(mid*mid<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }


    if(flag==true) {
        cout << "given number is a perfect square";
    }
    else {
        cout << "given number is not a perfect square";
    }

    return 0;
}