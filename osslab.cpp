
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<" enter number of elements: ";
    int n;
    cin>>n;
    float sum=0;
    int *k=new int(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
        sum=sum+k[i];
    }
    cout<<"average is "<<sum/n;
    return 0;
}
