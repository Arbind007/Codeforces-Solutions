#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int arr[m];
        for(int i=0;i<m;i++){
        cin >> arr[i];
        }
        if(arr[0] == arr[1]){
            int i = 2;
            while(i<=m){
                if(arr[0] != arr[i]){
                    cout << i+1 << endl;
                    break;
                }
                i++;
            }
        }
        else{
            if(arr[0] == arr[2]){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
    }
    
    
    return 0;
}
