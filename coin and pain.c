#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p;
    cin>>t>>p;
    int r;
    int count=0;
    r=p-t;
    while(r!=0){
        if(r>=32){
            r=r-32;
        }
        else if(r>=16){
            r=r-16;
        }
        else if(r>=8){
            r=r-8;
        }
        else if(r>=4){
            r=r-4;
        }
        else if(r>=2){
            r=r-2;
            count++;
        }
        else if(r>=1){
            r=r-1;
        }
    }
    if(count!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


}
