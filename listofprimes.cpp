#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
using namespace std;




int main(){
long long int endo; long long int low;
cout<<"Please Enter the Lower limit: ";cin>>low;
cout<<"Please Enter the Higher limit: ";cin>>endo;
Sleep(400);cout<<"Generating The list of Prime Numbers from "<<low<<" to "<<endo<<endl;
Sleep(400);cout<<".";Sleep(400);cout<<".";Sleep(400);cout<<".\n";Sleep(400);
int a;

if(low<=2 && low>=0){ cout<<"Prime: 2\n";
if(low%2 != 0){
for(int b=low; b<=endo;b=b+2){
    int x=0;
    int a = b;

   
for(int i=1; i<=a; i++){

    if(a%i==0){x++; }
}
 Sleep(1);
 
if(x==2){
    
    cout<<"Prime: "<<a<<endl;}else{x--;}
}
}
else{
    low = low+1;

    for(int b=low; b<=endo;b=b+2){
    int x=0;
    int a = b;

for(int i=1; i<=a; i++){

    if(a%i==0){x++;}
}
 Sleep(1);
if(x==2){cout<<"Prime: "<<a<<endl;}else{x--;}
}
}
}







else if(low>2){

if(low%2 != 0){
for(int b=low; b<=endo;b=b+2){
    int x=0;
    int a = b;

   
for(int i=1; i<=a; i++){

    if(a%i==0){x++; }
}
 Sleep(1);
 
if(x==2){
    
    cout<<"Prime: "<<a<<endl;}else{x--;}
}
}
else{
    low = low+1;

    for(int b=low; b<=endo;b=b+2){
    int x=0;
    int a = b;

for(int i=1; i<=a; i++){

    if(a%i==0){x++;}
}
 Sleep(1);
if(x==2){cout<<"Prime: "<<a<<endl;}else{x--;}
}
}

}

return 0;
}