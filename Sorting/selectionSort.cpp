#include<bits/stdc++.h>
using namespace std;

// selectes the smallest element in each pass and place it at the appropriate place


void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    vector<int> ans = { 2, 3, 5 ,12 ,8, 16};
    int n = 6;
    selectionSort(ans , 6);

    for(int i=0;  i<6; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}