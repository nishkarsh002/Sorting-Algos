#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(){
    int n=5;
    vector<int> arr= {1,4,2,3,5};
    insertionSort(n, arr);
    for(int i=0; i<n;i++){
        cout << arr[i]<<" ";
    }cout << endl;


    return 0;

}