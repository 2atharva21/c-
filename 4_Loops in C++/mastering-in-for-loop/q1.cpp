//   this program calculate to a sum of all odd number and give by user //
    #include <iostream>
    using namespace std;
    int main(){
        int n;//input from user
        cout<<"enter the number :";
        cin>>n;
        int i=1;//Initialization
        int sum=0;//store
        while(n>=i){
            if(i % 2 !=0){
                sum+=i;
            }
            i++;
        }
        cout<<sum<<endl;
        
        }
    }