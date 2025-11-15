//Xuat hien mot lan
/*
#include <iostream>
using namespace std;
void input(int a[], int n){
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void motlan(int a[], int n){
    for (int i=0; i<n;i++){
        int b=0;
        for (int j=0;j<n;j++)
            if (a[i]==a[j]) b++;
        if (b==1) cout<<a[i]<<" ";
    }
    }

int main (){
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    motlan(a,n);
}
*//*
#include <iostream>
using namespace std;
void input(int a[], int n){
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void sochan(int a[], int n){
    int k=0;
    for (int i=0;i<n;i++){
    if (a[i]%2==0) if (a[i]>k) k=a[i];}
    if (k!=0) cout<<"Mang so chan la:"<<endl;
    for (int i=0;i<n;i++)
    if (a[i]%2==0) cout<<a[i]<<" ";
    if (k!=0) {cout<<endl; cout<<"Max = "<<k;}
    if (k==0) cout<<"Mang khong co so chan";
}
int main (){
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    sochan(a,n);
}
*//*
#include <iostream>
#define MAX 100
using namespace std;
void input(double a[MAX][MAX],int &x, int &y){
    cin>>x>>y;
    double k;
    for (int i=0;i<x;i++)
        for (int j=0;j<y;j++){
            cin>>k;
            a[i][j]=k;
}}
void output(double a[MAX][MAX],int x, int y){
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
}}
int main (){
    double a[MAX][MAX];
    int dong,cot;
    input(a,dong,cot);
    output(a,dong,cot);
    return 0;
} *//*
    #include <iostream>
    #define MAX 100
    using namespace std;
    void input(float a[MAX][MAX],int &x, int &y){
        cin>>x>>y;
        for (int i=0;i<x;i++)
            for (int j=0;j<y;j++)
                cin>>a[i][j];
    }
    void output(float a[MAX][MAX],float b[MAX][MAX], int x, int y, int p){
        for (int i=0;i<x;i++){
            for (int j=0;j<y;j++){
                float t=0;
                for(int m=0;m<p;m++)
                    t+=a[i][m]*b[m][j];
                cout<<t<<" ";
            }
            cout<<endl;
        }
        
    }
    int main (){
        float a[MAX][MAX],b[MAX][MAX];
        int dong,cot, non;
        input(a,dong,cot);
        input(b,cot, non);
        output(a,b,dong,non,cot);
        return 0;
    }
*/
/*
#include <iostream>
using namespace std;
#define MAX 300
void input(int x[MAX], int n){
    for (int i=0;i<n;i++)
        cin>>x[i];
}
bool TangGiam(int x[MAX], int n){
        if (x[1]>x[0]) return true;
        return false;
}

void output (int y[MAX], int n){
    for (int i=0;i<n;i++)
        cout<<y[i]<<" ";
}
bool Ohio(int x[MAX], int n, int k){
    for (int i=0;i<n-1;i++)
        if (x[i]==k)
            return false;
        return true;
}
void Skibidi(int x[MAX],int y[MAX], int n, int k){
    int t=0;
    if (TangGiam(x,n)){
    for (int i=0;i<n-1;i++){
        t=i;
        if (k<x[i])
         break;
        y[i]=x[i];
    }
    y[t]=k;
     t++;
    for (int i=t;i<n;i++)
        y[i]=x[i-1];
    output(y,n);
}
else {
for (int i=0;i<n-1;i++){
        t=i;
        if (k>x[i])
         break;
        y[i]=x[i];
    }
    y[t]=k;
     t++;
    for (int i=t;i<n;i++)
        y[i]=x[i-1];
    output(y,n);
}
}

int main(){
    int x[MAX],y[MAX], n, k;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    input(x,n);
    cout<<"Nhap phan tu them: ";
    cin>>k;
    if (!Ohio(x,n+1,k)) cout<<"Khong them duoc";
    else Skibidi(x,y,n+1,k);
    return 0;
}
    *//*
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
            t++;
            if (arr[i]>x)
                break;
                if (i=n-1) break;
            }
            t+=2;
        for (int i=n-1;i>t;i--)
            arr[i]=arr[i-1];
            t--;
        arr[t+1]=arr[t];
                arr[t]=x;

    }
    else {
        for (int i=0;;i++){
            t++;
            if (arr[i]<x)
                break;
            if (i=n-1) break;

        }
        t+=2;
        for (int i=n-1;i>t;i--)
            arr[i]=arr[i-1];
         t--;
        arr[t+1]=arr[t];
                arr[t]=x;

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
    *//*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void Skibidi(char a, int k, int &x, int &y){
    int g=0;
    string u="";
    u+=k;
    g=stoi(u);
    switch (a) {
        case 'E':
            x-=g;
            break;
        case 'W':
            x+=g;
            break;
        case 'S':
            y-=g;
            break;
        case 'N':
            y+=g;
            break;
    }
}
int main (){
    int x=0,y=0;
    string a;
    cin>>a;
    int i=0;
    while (i<a.length()&&a[i]){
        Skibidi(a[i+1], a[i], x, y);
        i+=2;
    }
    if (x<0){
        cout<<-x;
        cout<<"E";
    }
    else if (x>0){
        cout<<x;
        cout<<"W";
    }
    if (y<0){
        cout<<-y;
        cout<<"S";
    }
    else if (y>0){
        cout<<y;
        cout<<"N";
    }
    return 0;
}
*//*
#include <iostream>
#include <cmath>
using namespace std;
long long Rev(long long a, long long r){
    while(a){ r=r*10+a%10;
        a/=10;}
    return r;

}
bool Check(long long a){
    long long t=0, r=0, k=0, m=0, n=0, l=0;
    if (a<10) if (a%2) return false;
    r=Rev(a,r);
    if (r==a) return true;
    k=a;
    while(a>0){
        t++;
        a/=10;
    }
    if (t%2==0) return false;
    t=(t-3)/2;
    l=t;
    int e= pow(10,t);
    m=k%e;
    int h=0;
    while(t){
        k/=10;
        t--;
    }
    h=k/100;
    if ((k%10)-(h%10)!=-1) return false;
    if ((k/10)%2) return false;
    n=(h/10)*pow(10,l)+m;
    r=0;
    if (n!=Rev(n,r)) return false;
    return true;

}
void output(long long a){
    long long t=0, x=0, y=0, b=a, r=0;
    while(a){
        t++;
        a/=10;
    }
    if (!(t%2)){
        int g=t/2;
        t=t/2;
        while(t){
        if ((b%10)%2) x=x*10+((b%10)+1)/2;
        else x=x*10+(b%10)/2;
        b/=10;
        t--;
        }
        while(g){
        if ((b%10)%2) x=x*10+((b%10)-1)/2;
        else x=x*10+(b%10)/2;
        b/=10;
        g--;
        }
    }
    if (t%2){
        int g=(t-3)/2;
        t=(t-3)/2;
        while(t){
        if ((b%10)%2) x=x*10+((b%10)+1)/2;
        else x=x*10+(b%10)/2;
        b/=10;
        t--;
        }
        if ((b%10)%2) x=x*10+((b%10)+1)/2;
        else x=x*10+(b%10)/2;
        b/=10;
        x=x*10+((b%10)+10)/2;
        b/=10;
        if (((b%10)-1)%2) x=x*10+((b%10)-2)/2;
        else x=x*10+((b%10)-1)/2;
        b/=10;
        while(g){
        if ((b%10)%2) x=x*10+((b%10)-1)/2;
        else x=x*10+(b%10)/2;
        b/=10;
        g--;
        }
    }
cout<<x<<endl;
y=x;
while(y&&!(y%10)){
    cout<<"0";
    y/=10;
}
cout<<Rev(x,r);
}

int main (){
    long long a;
    cin>>a;
    if (!Check(a)) cout<<-1;
    else 
        output(a);
}
*//*
#include <iostream>
#include <cmath>
#define MAX 300
using namespace std;
bool Check(int b){
    if (b>10) {
        int r=b;
        while (r>9){
        if (r%10) break;
        r/=10;
        if (r==1) return true;
    }
}
    for (double i=2;;i++){
        if (pow(b,1.0/i)<2) return false;
        if (pow(b,1.0/i)==round(pow(b,1.0/i))) return true; 
    }
}
int main (){
    int a[MAX],i=0;
    cin>>a[i];
    while(a[i]){
        i++;
        cin>>a[i];
    }
    for (int j=0;j<i;j++){
        if (Check(a[j])) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
*//*
#include <iostream>
#include <cmath>
#define MAX 100000
using namespace std;
void input(int a[],int &n){
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void output(int a[], int &n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                for (int k=j+1;j<n;j++){
                    a[j]=a[k];
                    n--;
                }
                j--;
            }

        }
    }
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main (){
    int a[MAX], n;
    input(a,n);
    output(a,n);
}
*//*
#include <iostream>
#define MAX 100000
using namespace std;
void input(int a[], int &n){
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>a[i];
}
bool Check1(int a[], int n){
    for (int i=1;i<n;i++){
        if (a[i]!=a[i-1]) return false;
    }
    return true;
}
bool Check2(int a[], int n){
    for (int i=1;i<n;i++){
        if (a[i]<=a[i-1]) return false;
    }
    return true;
}
bool Check3(int a[], int n){
    for (int i=1;i<n;i++){
        if (a[i]>=a[i-1]) return false;
    }
    return true;
}
int main (){
    int a[MAX], n;
    input(a,n);
    if (Check1(a,n)) cout<<"Bang nhau";
    else if (Check2(a,n)) cout<<"Tang dan";
    else if (Check3(a,n)) cout<<"Giam dan";
    else cout<<"Mang khong tang khong giam";
}
*//*
#include <iostream>
#define MAX 100
using namespace std;
void input(int a[][MAX], int &m, int &n){
    cin>>m>>n;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            cin>>a[i][j];
    }
void output(int a[][MAX], int m, int n){
    for (int i=0;i<n;i++){
        int t=a[0][i];
        for (int j=1;j<m;j++){
            if (t<a[j][i]) t=a[j][i];
        }
        cout<<"Gia tri lon nhat tren cot "<<i+1<<" la: "<<t<<endl;
    }

}
int main(){
    int a[MAX][MAX],m,n;
    input(a,m,n);
    output(a,m,n);
}
*/

    