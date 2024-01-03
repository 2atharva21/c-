#include <iostream>
using namespace std;
int main (){#include <iostream>
using namespace std;
int main (){
    // float num='1.12';
    // cout<<sizeof(num);
    // bool flag =false;
    // cout<<flag<<endl;
    // bool flag1 =true;
    // cout<<flag1<<endl;
    // int a ,b;
    // cout<<"enter the number ";
    // cin>>a ;
    // cout<<"enter the other ";
    // cin>>b;
    // cout<<"the sum of number "    << a+b;
    int n1 , n2,n3;
    cout<<"enter the number 1st:";
    cin>>n1;
    cout<<"enter the number 2nd: ";
    cin >>n2;
    cout<<"enter the number 3rd: ";
    cin >>n3 ;
    if(n1>n2 and n1<n3){
        cout<<"the number is maxmimum :"<<n1<<endl;
    }else if(n2 >n3  and n2 >n1){
        cout<<"the number is maxmimum:"<<n2<<endl;
    }else if (n3 >n1 and n3>n2){
        cout<<"the number is maxmimum :"<<n3<<endl;
    }else{
        cout<<"the all number are equal "<<endl;
    }
}#include <iostream>
using namespace std;
int main (){
    // float num='1.12';
    // cout<<sizeof(num);
    // bool flag =false;
    // cout<<flag<<endl;
    // bool flag1 =true;
    // cout<<flag1<<endl;
    // int a ,b;
    // cout<<"enter the number ";
    // cin>>a ;
    // cout<<"enter the other ";
    // cin>>b;
    // cout<<"the sum of number "    << a+b;
    int n1 , n2,n3;
    cout<<"enter the number 1st:";
    cin>>n1;
    cout<<"enter the number 2nd: ";
    cin >>n2;
    cout<<"enter the number 3rd: ";
    cin >>n3 ;
    if(n1>n2 and n1<n3){
        cout<<"the number is maxmimum :"<<n1<<endl;
    }else if(n2 >n3  and n2 >n1){
        cout<<"the number is maxmimum:"<<n2<<endl;
    }else if (n3 >n1 and n3>n2){
        cout<<"the number is maxmimum :"<<n3<<endl;
    }else{
        cout<<"the all number are equal "<<endl;
    }
}#include <iostream>
using namespace std;
int main (){
    // float num='1.12';
    // cout<<sizeof(num);
    // bool flag =false;
    // cout<<flag<<endl;
    // bool flag1 =true;
    // cout<<flag1<<endl;
    // int a ,b;
    // cout<<"enter the number ";
    // cin>>a ;
    // cout<<"enter the other ";
    // cin>>b;
    // cout<<"the sum of number "    << a+b;
    int n1 , n2,n3;
    cout<<"enter the number 1st:";
    cin>>n1;
    cout<<"enter the number 2nd: ";
    cin >>n2;
    cout<<"enter the number 3rd: ";
    cin >>n3 ;
    if(n1>n2 and n1<n3){
        cout<<"the number is maxmimum :"<<n1<<endl;
    }else if(n2 >n3  and n2 >n1){
        cout<<"the number is maxmimum:"<<n2<<endl;
    }else if (n3 >n1 and n3>n2){
        cout<<"the number is maxmimum :"<<n3<<endl;
    }else{
        cout<<"the all number are equal "<<endl;
    }
}
    int n;
    cin>>n;
    int sum=0;
    int i=1; //loop varible 
    while(i<=n){//condition of loop
        sum+=i;
        i++;//updating a loop variable 
    }
    cout<<sum<<endl;
}