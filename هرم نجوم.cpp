#include <iostream>
using namespace std;
int main()
{
   int raw=7;
   for(int i=1;i<=raw;i++){
    for(int w=7;w>=i;w--){
        cout<<" ";
    }
        
        
    for(int q=1;q<=(i*2)-1;q++){
            cout<<"#";
    }
        cout<<endl;
    }
      
}