#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;
    vector <int> v;
    int j = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.insert(v.begin()+j,a);
        j++;
    }
    
    sort(v.begin(),v.end());
        
    int i=v.size()-1;
    int k=0;
    while(k!= i){
        if(v[i]+ v[k]<=4){
            v[i]+=v[k];
            k++;
        }
        else{
            i--;
            count++;
        }
    }
  
   
    cout << count+1 << endl;
    
    return 0;
}
