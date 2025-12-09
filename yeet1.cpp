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
*//*
#include <iostream>
#define MAX 300
using namespace std;
void input(int *a, int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void check(int *a, int n){
    for (int i = 0; i < n; i++){
        int k = 0;
        int t = k;
            for (int j = 0; j < n; j++)
                if (a[j] >= a[i])
                    k++;
            if (k == a[i]){
                cout<<k;
                break;
            }
    }

}
int main(){
    int a[MAX], n;
    input(a, n);
    check(a, n);
}
*//*
#include <iostream>
#define MAX 100
using namespace std;
void Loc(int a[][MAX], int m, int n, int k, int t){
    int i = k, j = k;
    for (; j < n - k; j++){
        a[i][j] = t;
        t++;
    }
    i++;
    j--;
    if (t == m*n) return;
    for (;i < m - k; i++){
        a[i][j] = t;
        t++;
    }
    j--;
    i--;
    if (t == m*n) return;
    for (; j > -1 + k; j--){
        a[i][j] = t;
        t++;
    }
    i--;
    j++;
    if (t == m*n) return;
    for (;i >  k; i--){
        a[i][j] = t;
        t++;
    }
    i++;
    j--;
    if (t == m*n) return;
    Loc(a, m, n, k + 1, t);

}
void output(int a[][MAX], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cout << " " << a[i][j] << " ";
        cout << endl;
    }
}
int main (){
    int a[MAX][MAX], m, n, t = 0, k = 0, r =0;
    cin >> m >> n;
    Loc(a, m, n, k, t);
    output(a, m, n);
} 
*//*
#include <iostream>
#include <string.h>
using namespace std;
int Count (char *s, char *w){
    int k = strlen(w), t = 0;
    for (int i = 0; s[i] != '\0'; i++){
        int p = i, j;
        for (j =0; w[j] != '\0'; j++){
            char z,x;
            if (w[j]>='a') z = w[j] -32;
            else z = w[j] +32;
            if (s[p]>='a') x = s[p] -32;
            else x = s[p] +32;
            if ((w[j] == s[p] ) || w[j] == x || z == s[p] ){
                p++;
                continue;
            }
                break;
        }
        if (j == k) { t++; i+= k-1;}
    }
    return t;
   

}
int main (){
    char s[100];
    char w[100];
    cin.getline(s, 100);
    cin.getline(w, 100);
    cout<<Count(s,w);
    
}
*//*
    #include <iostream>
    using namespace std;

    void solve(int* arr, int n);

    int main(){
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        solve(arr, n);

        return 0;
    }
    void solve(int *arr, int n){
        int t = 0, m = 0;
        for (int i = 0; ; i++ ){
            int k = 0;
            for (int j = 0; j < n; j++){
                if (arr[j] == i || arr[j] == i + 1)
                    k++;
                    if (arr[j] > m) m = arr[j];
            }
            if (k > t) t = k;
            if (i == m && m){ cout << t;
                return;
            }

        }
    }
*//*
#include <iostream>
#define MAX 300
using namespace std;
void input(int a[MAX], int n){
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int Ski(int a[MAX], int n){
    int k = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > k) k = a[i];
    return k;
}
int MIN(int a[MAX], int n){
    int k = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < k) k = a[i];
    return k;
}
int Check(int a[MAX], int n){
    int x = MIN(a, n);
    int y = Ski(a, n);
    return y - x - n +1;
}
int main (){
    int a[MAX], n;
    cin >> n;
    input(a, n);
    cout << Check(a, n);

}
*/
/*
#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1, MAX, stdin);
	fgets(s2, MAX, stdin);
	bool kt = myStrcat(s1, s2);
    if (kt) cout << s1 << s2;
    else cout << "Khong noi duoc. Khong du bo nho";
}
bool myStrcat(char s1[], char s2[]){
    if (myStrlen(s1) + myStrlen(s2) < 254 ) 
        return true;
    return false;
}
int myStrlen(char s[]){
    int i = 0;
    while (s[i] != '\n')
    i++;
    s[i] = '\0';
    return i;
}
    */
/*
   #include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}
void ChenChuoiTaiVitriK(char s[], char s1[], int k){
    int t = k;
    int j = myStrlen(s, 0);
    if (s1[k] != ' ' && s1[k-1] == '.'){
        s[j+1] = '\0';
        while (j > t){
            s1[j] = s1[j-1];
            j--;
        }
        s1[t] = ' ';
        return;
    }
    while(s[k+1] != '\0'){
        s1[k] = s1[k+1];
        k++;
    }
}
int myStrlen(char s[], int k){
    int i = 0;
    for (; s[i] !='\n' && s[i] != '\0';)
        i++;
    return i;
}
void myStrcpy(char s1[], int vt, char s[], int k){
    int t = myStrlen(s, 0);
    for (int i = 0; s[i] != '\n'; i++){
        s1[i] = s[i];
    }
    int j = 0;
    int l = 0;
    int o = t;
    while (j < o){
        if (s1[j] != ' ') l++;
        if (!l) {

            j++;
            continue;
        }
        if (s1[j] == ' ' && s1[j+1] == ' '){
            ChenChuoiTaiVitriK(s, s1, j);
            o--;
        }
        else if (s1[j] != ' ' && s1[j-1] == '.'){
            ChenChuoiTaiVitriK(s, s1, j);
            o++;
            j++;
        }
        else if (s1[j] == ' ' && s1[j+1] == '.' && s1[j-1] != '.'){
            ChenChuoiTaiVitriK(s, s1, j);
            o--;
        }
        else j++;
}
s[t] = '\0';
s1[o] = '\0';
}
void Chuanhoa(char s[]){
    int i = 0;
    int k = myStrlen(s, 0);
    while (s[i] == ' '){
        for (int j = 0; j < k; j++){
            s[j] = s[j+1];
        }
        k--;
    }
    return;
}
*/
/*
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}
int myStrcmp(char s1[MAX], char s2[MAX]){
    if (s1[0] == '\n') return 0;
    if (s2[0] == '\0') return 1;
    int t = 0;
        for (int i = 0; s1[i] != '\n'; i++)
            if (s1[i] == s2[0])
                t++;
    return t;
}
void DemKyTu(char s[]){
    char x[MAX];
      int t = 0;
    for (int i = 0; s[i] != '\n'; i++){
        int j = 0;
        int b = 0;
        for (int k = 0; x[k] != '\0'; k++)
            if (x[k] == s[i])
                b++;
        char m[MAX];
        m[0] = s[i];
         if (b) continue;
         cout << s[i] << ": " << myStrcmp(s, m) << endl;
         x[t] = s[i];
         t++;

}
}
*/
/*
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

int myStrcmp(char s1[], char s2[]){
    if (s1[0] == '\n') return 0;
    return 1;
}
void myStrcpy(char s[], int vt, char s1[], int k){
    int r = 0, f = 0;
    for (int i = 0; i < k; i++){
        int m = 0;
        if (s[i] == s1[0] && (i == 0 || s[i - 1] == ' ')) {
            for (int j = 0; s1[j] != '\0'; j++){
                if (s1[j] != s[i+j])
                    m--;
                    f= i + j;
            }
            if (s[f+1] != ' ' && s[f+1] != '\n') m--;
        if (!m) r++;
        }
    }
    if (r < 2){
        int u = 0, f = 0;
    for (int i = 0; s[i] != '\n'; i++){
        int m = 0;
        if (s[i] == s1[0] && (i == 0 || s[i -1] == ' ')) {
            for (int j = 0; s1[j] != '\0'; j++){
                if (s1[j] != s[i+j])
                    m--;
                    f= i + j;
            }
            if (s[f+1] != ' ' && s[f+1] != '\n') m--;
        if (!m) u++;
        }
}
        cout << s1 << ": " << u <<endl;
    }
}
void DemTieng(char s1[]){
    char x[MAX];
    int i = 0, t = 0;
    do{ 
          if ((s1[i] == ' ' || s1[i] == '\n') && s1[i-1] != ' ' && i){
        x[t] = '\0';
        myStrcpy(s1, 0, x, i);
        i++;
        t = 0;
        x[0] = '\0';
    }
        if (s1[i] != ' '){
         x[t] = s1[i];
         t++;
        }
        i++;
    } while (s1[i] != '\0');
}
*//* Email hop li
#include <iostream>
#include <string.h>
#define MAX 300
using namespace std;
void fun(char *s){
    int m = 0;
    char *z = strrchr(s, '@');
    for (int i = 0; z[i] != '\0'; i++)
        if (z[i] == ' ' || z[i]  == '.')
            m++;
    if (m) {
        cout << "Invalid";
        return;
    }


    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == '@' || s[i] == ' ');
            k++;
    if (k == 1){
        char *x = strchr(s, '@');
        int t = 0;
        for (int i = 0; x[i] != '\0'; i++)
            if (x[i] == '.')
                t++;
        if (t == 1){
            cout << "Valid";
            return;
        }
}
        cout << "Invalid";
}
int main (){
    char s[MAX];
    cin.getline(s,MAX);
    fun(s);
    return 0;
}
*//*
#include <iostream>
#include <string.h>
#include <string>
#define MAX 300
using namespace std;
void fun(char *s){
    char k[MAX], l[MAX];
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '@'){
            k[0] = '\0';
            int t = 0;
            while(s[i]!=' '){
                k[t] = s[i];
                t++;
                i++;
            }
            int v = 0;
            if (strstr(l, k) == NULL){
                char* g = strchr(s, '@');
                while (strstr(g, k)!=''){
                    v++;
                    g[0] = '.';
                    g = strchr(g, '@');
                }
                cout << k << ": " << v <<endl;
                strcat(l,k);
            }
        }
}
}
int main (){
    char s[MAX];
    cin.getline(s,MAX);
    fun(s);
    return 0;
}
*/
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s, MAX, stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}
int myStrcmp(char s1[], char s2[]){
    if (s1[0] == '\n') return 0;
    else return 1;
}
void StringReverse(char st[]){
    char s3[MAX];
    int i = 0, t = 0;
    while (st[i] != '\0'){
        if (st[i] == ' ' || st[i] == '\n' ){
            int g = i - t;
            for (;t > 0; t--){
                st[g] = s3[t-1];
                g++;
            }
            if (st[i] == '\n'){
                st[i] == '\0';
                return;
            }
            i++;
            t = 0;
            s3[0] = '\0';
        }
        s3[t] = st[i];
        i++;
        t++;
    }
}