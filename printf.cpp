#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int x=max_element(v.begin(), v.end())-v.begin();
    cout<<x+1<<endl;

return 0;
}
