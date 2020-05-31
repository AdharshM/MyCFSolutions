#include <iostream>
using namespace std;

int bi[1000],a[1000];
int n;

void update(int i){
    int val=a[i-1];
    while(i<=n){
        bi[i]+=val;
        i+=i&-i;
    }
}

int query(int x){
    int ans=0;
    while(x>0){
        ans+=bi[x];
        x-=x&-x;
    }
    return ans;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        update(i+1);
    }
    // Example for sum between array limits l and r (both inclusive), here l=3 and r=2;
    cout << query(5) - query(3-1) << endl;
    return 0;
}
