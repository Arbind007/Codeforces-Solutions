#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int o = 0, e = 0;
        for(int i=0;i<2*m;i++){
        int x;
        cin>>x;
        if(x%2==0) 
            e++;
        else 
            o++;
        }
    if(e==o) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
 
    }
    return 0;
}
