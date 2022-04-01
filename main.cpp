#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, x=0, y=0;
  cin >> a >> b >> x >> y;
    if (x<0 and y>0){
       cout << a*x - b*y;
    }else if(x>=0 and y<=0){
        cout << a*(x*x) - b*y;
    }else{
        cout << a*x + b*(y*y);
    }
   return 0;
}
