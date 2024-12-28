#include <iostream>

using namespace std;


int max_of_four(int a, int b, int c, int d){
    int result;
    result = a>b && a>c && a>d ? a: (b>a && b>c && b>d ? b : (c>a && c>b && c>d ? c : d));
    // loop into
    return result;
}
int main(){
    int a,b,c,d, res;
    cin >>a>>b>>c>>d;
    res = max_of_four(a,b,c,d);
    cout<<res<<endl;
    return 0;
}