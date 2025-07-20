//very basic multiplication tables. ie. n tables till 10

#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout <<" Enter what tables u need:"<<endl;
    cin>>n;
    for (i=1;i<=10;i++){
        cout<< n <<"x" <<i <<"=" <<n*i<<endl;
    }
    return 0;
}
