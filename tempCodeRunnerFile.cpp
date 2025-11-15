#include <iostream>
using namespace std;
#define MAX 300
void output (int a[], int n){
    for (int i=0;i<n+1;i++)
        cout<<a[i]<<" ";
}
bool Check(int x[], int n, int k){
    for (int i=0;i<n;i++)
        if (x[i]==k)
            return false;
        return true;
}
bool TangGiam(int x[], int n){
        if (x[1]>x[0]) return true;
        return false;
}

void Add(int arr[], int n, int x){
    int t=0;
    if (!Check(arr,n,x)) cout<<"Khong them vo duoc"<<endl;
    else
    {if (TangGiam(arr,n)) {
        for (int i=0;;i++){
            t=i;
            if (arr[i]>x)
                break;
            if (i=n-1) break;
        }
        arr[t+1]=arr[t];
        arr[t]=x;
        t++;
        for (int i=n-1;i>t;i--)
            arr[i]=arr[i-1];

    }
    else {
        for (int i=0;;i++){
            t=i;
            if (arr[i]<x)
                break;
            if (i=n-1) break;

        }
         arr[t+1]=arr[t];
        arr[t]=x;
        t++;
        for (int i=n-1;i>t;i--)
            arr[i]=arr[i-1];

        }
    output(arr,n);
    }
}

int main (){
    int a[]={1,3,5,7,9},n=5;
    int b[]={8,6,4,2,0},m=5;
    int x=5;
    Add(a,n,x);
    Add(b,m,x);
    return 0;
}