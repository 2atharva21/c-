#include <iostream>
using namespace std;
int main (){
    int n=5;
// Diamond alphabetical pattern printing.
    //upper triangle 
    for (int i=0;i<=n;i++){
        int space=(n-i);
        for(int space_line=0;space_line<space;space_line++){
            cout<<" ";
        }
        int numchar=2*i-1;
        for(int j=0;j<numchar;j++){
            cout<<(char)('A'+j);
        }
cout<<endl;
    }
    
    //lower triangle 
for(int i=n+1;i<=2*n-1;i++){
    int space=(i-n);
        for(int space_line=0;space_line<space;space_line++){
            cout<<" ";
        }
        int numchar=2*(2*n-i)-1;
        for(int j=0;j<numchar;j++){
            cout<<(char)('A'+j);
        }
cout<<endl;
}
}
// upper triangle
//2*i-1