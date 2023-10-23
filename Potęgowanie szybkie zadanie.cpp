#include <iostream>
using namespace std;
int f2(int a, int n) {
    int w=1;                            
    while (n>0){                      
        if (n%2==1){                   
            w *= a;                     
        }
        a *= a;                         
        n /= 2;                         
    }
    return w;                           
}
int main() {
    int a, n;
    cout<<"Podaj podstawe:";
    cin>>a;
    cout<<"Podaj wykladnik:";
    cin>>n;
    int result=f2(a, n);
    cout<<a<<" do potegi "<<n<<" wynosi: "<<result<<endl;
    return 0;
}
