
#include<iostream>
using namespace std;
void buble( int arr[],int s)
{  int c=0;
    for(int i=0;i<s;i++)
    {
        bool f=true;
        for(int j=0;j<s-i-1;j++)
        {  c++;
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

                f=false;
            }
        }
        if(f==true)
        {
            break;
        }
    }
    cout<<"\n couting is ="<<c;

}
int main()
{
    //driver code
    int arr[]={1,2,3,5,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n element of array is= \n";

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    buble(arr,s);
    cout<<"\n after applying buble sort\n";
     for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
