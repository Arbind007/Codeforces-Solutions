#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int coutA = 0; 
    int coutD = 0; 
    char c[n];
    for(int i=0;i<n;i++){
        cin >> c[i];
        if(c[i] == 'A'){
            coutA++;
        }
        else if(c[i] == 'D'){
            coutD++;
        }
    }
    if(coutD == coutA){
        cout << "Friendship" << endl;
    }
    else if(coutD > coutA){
        cout << "Danik" << endl;
    }
    else{
        cout << "Anton" << endl;
    }
    
    return 0;
}
