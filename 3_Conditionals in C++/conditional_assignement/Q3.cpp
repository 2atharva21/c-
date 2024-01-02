#include <iostream>
using namespace std;
int main (){
    int cost_price ,amt;
    cout<<"enter the cost price :";
    cin >>cost_price;
    int selling_price;
    cout<<"enter the selling price :";
    cin >>selling_price;
    if(selling_price>cost_price){
        amt=selling_price-cost_price;
        cout<<"profit";
    }else if(cost_price>selling_price){
        amt=cost_price-selling_price;
        cout<<"loss";
    }else{
        cout<<"invalied";
    }


}