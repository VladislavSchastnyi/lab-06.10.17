#include <iostream>
using namespace std;

int main() {
  int n,m;
        cout<<"Razmer pervoi yacheiki"<<endl;
        cin>>n;
        cout<<"Razmer vtoroi yacheiki"<<endl;
        cin>>m;
  int a[n][m];
  int b[n][m];
        cout<<"Vvod elementov pervogo massiva"<<endl;
          for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
        cin>>a[i][j];

        cout<<"Vvod elementov vtorogo massiva"<<endl;
          for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
        cin>>b[i][j];

    cout<<"Summa matrix "<<endl;
        
        for(int i=0;i<n;i++) 
        {
          for(int j=0;j<m;j++)
        cout<<a[i][j]+b[i][j]<<" ";
        cout<< endl; }

return 0;
}
