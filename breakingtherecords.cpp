#include<iostream>
using namespace std;
int main(){
int max,i,min,n,a[102],wincnt=0,lcnt=0;

cin>>n;
for( i=0;i<n;i++)
{
    cin>>a[i];

}
max = a[0];
min = a[0];


  for(int i=0;i<n;i++)
  {
       if(a[i]>max)
        {
            max = a[i];
            wincnt++;

        }
    else if(a[i]<min)
       {
          min = a[i];
        lcnt++;
       }

  }

cout<<wincnt<<" "<<lcnt;
return 0;
}
