#include <bits/stdc++.h>

using namespace std;

int main(){
    int max=-1, x, rez=0, n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x>max){
            max=x;
            rez++;
        }
    }
    cout<<rez<<endl;
}