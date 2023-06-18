#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }   
        }
        if(swapped == false) {
            //already sorted
            break;
        }
    }
}

int main(){

    vector<int> ans = { 2, 3, 5 ,12 ,8, 16};
    int n = 6;
    bubbleSort(ans , 6);

    for(int i=0;  i<6; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}