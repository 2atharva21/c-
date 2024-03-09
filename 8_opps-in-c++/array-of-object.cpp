#include <iostream>
using namespace std;
class student {
int roll;
char name[20];
int Class;
public :
void setData(){
    cout<<"enter the roll no :"<<endl;
    cin >>roll;
    cout<<"enter the name of student :"<<endl;
    cin>>name;
    cout<<"enter the class number :"<<endl;
    cin>>Class;

}
void getData(){
    cout<<"roll no :"<<roll<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"class :"<<Class<<endl;
}   
};
int main(){
    int i ;
    student atharva[4];
    for(int i =0 ;i<4;i++){
        cout<<i+1<<" student information :"<<endl;
        atharva[i].setData();
    }
    for (int i = 0 ;i<4 ;i++){
        atharva[i].getData();
    }
    for(int i =0 ;i<4 ;i++){
       
        atharva[i].getData();

    }
}