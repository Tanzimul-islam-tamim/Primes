#include <iostream>
using namespace std;

int main(){

int a;int x=0;
cin>>a;
for(int i=1; i<=a; i++){
    if(a%i==0){x++;}
}
if(x==2){cout<<"Yes";}else{cout<<"No";}

return 0;
}

