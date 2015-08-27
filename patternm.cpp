#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Please input n = ";
	cin>>n;
	cout<<"Please input m = ";
	cin>>m;
        int j=1;
        do{
	for(int i=1;i<=n;i++)
	     	{
                   //if (i%n==0) cout<<endl;
                   //else   cout<<"*";
                    cout<<"*";
                   if (i%n==0) cout<<endl;
	        }
         j++;   
        }while(j<=m);
}
