#include<iostream>
using namespace std;
int main() { 
    /*cout<<"namaste duniya"<<endl;

    char ch= 98; 
    cout << ch <<endl;

    unsigned int a=112;
    cout << a <<endl;

    int c=3;
    int d=4;

    bool first = (c==d);
    cout<<first<<endl;

    bool second = (c>d);
    cout<<first<<endl;
    
    bool third = (c<d);
    cout<<third<<endl;

    bool fourth = (c<=d);
    cout<<fourth<<endl;

    bool fifth = (c>=d);
    cout<<fifth<<endl;
    bool sixth = (c!=d);
    cout<<sixth<<endl;*/

      /* int n;
       cin>>n;
       if(n>0)
       {
        cout<<"N is positive "<<endl;
       }
    else{ cout<<"N is negative "<<endl;
    }*/
     
      /*int a;
    cin>>a;
     
     if(a>0){
        cout<< "NO. is positive "<<a<<endl;
      }
      else if(a<0)
      {cout<<"NO. is negative "<<a<<endl;
      }
      else{
        cout<<"NO. is zero "<<a<<endl;
      }*/
      //TRY QUESTIONS//

    /*  int a=2;
      int b=a+1;
    if((a=3)==b){
        cout<<"a";
    }
    
    else{
        cout<<"a+1";
    }*/

    /*char ch;
    cout<<"enter a character: ";
    cin>>ch;
     if(ch>='a' && ch<='z'){
        cout<<"this is lower case "<<ch<<endl;
     }
     else if(ch>='A' && ch<='Z'){
        cout<<"this is upper case "<<ch<<endl;
     }
     else if(ch>='0' && ch<='9'){ 
        cout<<"this is numeric "<<ch<<endl;
     }
     else{
        cout<<"invalid input "<<ch<<endl;
     }*/

    //wap to find sum of all even no.
    /* int n;
     cout<<"enter value of n : "<<endl;
     cin>>n;

     int i=2;
     int sum=0;

     while(i<=n){ 
        if (i%2==0){ 
        sum = sum + i;
        i = i +1;
     } 
     else{
        cout<<"invalid output "<<endl;
     } }
      cout<<"value of sum is  "<<sum<<endl;  */
//wap to find whether it is prime or not

int n;
cout<<"enter value of n "<<endl;
cin>>n;
int i;
i=2;
while(i<n){
    if(n%i==0){
        cout<<"not prime for "<<i<<endl;
    }
    else{
        cout<<"prime for "<<i<<endl;
    }
    i=i+1;
}

    


    
    


}