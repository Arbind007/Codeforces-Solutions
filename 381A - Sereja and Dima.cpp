#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int j = n-1;
    int i=0;
    
    int suma=0,sumb=0;
    int count = 0;
    while(i <= j){
        // cout << arr[i] << " "<< arr[j] << endl;
        if(arr[i] > arr[j]){
            if(count % 2 == 0){
                suma += arr[i];
            }
            else{
                sumb += arr[i];
            }
            i++;
        }
        else{
            if(count % 2 == 0){
                suma += arr[j];
            }
            else{
                sumb += arr[j];
            }
            j--;
        }
        count++;
    }
    
    cout << suma << " " << sumb << endl;
    
    return 0;
}
