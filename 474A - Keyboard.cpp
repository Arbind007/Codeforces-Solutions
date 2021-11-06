#include <bits/stdc++.h>
using namespace std;


int main(){
    map <char,int> mp;
    mp.insert({'q',0});
    mp.insert({'w',1});
    mp.insert({'e',2});
    mp.insert({'r',3});
    mp.insert({'t',4});
    mp.insert({'y',5});
    mp.insert({'u',6});
    mp.insert({'i',7});
    mp.insert({'o',8});
    mp.insert({'p',9});
    
    mp.insert({'a',10});
    mp.insert({'s',11});
    mp.insert({'d',12});
    mp.insert({'f',13});
    mp.insert({'g',14});
    mp.insert({'h',15});
    mp.insert({'j',16}); 
    mp.insert({'k',17});
    mp.insert({'l',18});
    mp.insert({';',19});
    
    mp.insert({'z',20});
    mp.insert({'x',21});
    mp.insert({'c',22});
    mp.insert({'v',23});
    mp.insert({'b',24});
    mp.insert({'n',25});
    mp.insert({'m',26});
    mp.insert({',',27});
    mp.insert({'.',28});
    mp.insert({'/',29});
    
    
    
    char c;
    cin >> c;
    string str;
    string ans;
    cin >> str;
    if(c == 'R'){
        for(int i=0;i<str.length();i++){
            int a = mp[str[i]];
            a--;
            char temp;
            for ( auto X : mp )
                if ( X.second == a )
                    cout << X.first;
        }
    }
    else if(c == 'L'){
        for(int i=0;i<str.length();i++){
            int a = mp[str[i]];
            a++;
            char temp;
            for ( auto X : mp )
                if ( X.second == a )
                    cout << X.first;
        }
    }
    
    return 0;
}
