#include<iostream>
using namespace std;
int main()
{
   int V[4][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};
   int i,j,k;
   for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cout<<V[i][j]<<"   ";
    }
    cout<<endl;
   }
   cout<<endl<<"TRANSPUESTA!!"<<endl;
   for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cout<<V[j][i]<<"   ";
     }
     cout<<endl;
   }


}
