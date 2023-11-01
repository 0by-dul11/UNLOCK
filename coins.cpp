#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p,r;
    int c;
    c=0;
    cin>>t>>p;

    r=p-t;
    if(r>32){
        r=r%32;
    }
    else if(r>16){
        r=r%16;
    }
    else if(r>8){
        r=r%8;
    }
    else if(r>4){
        r=r%4;
    }
    else if(r>2){
         c++;
        r=r%2;
    }
    else if(r>1){
        r=r%1;
    }

    if(c==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;


}
