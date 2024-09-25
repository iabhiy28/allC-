#include<iostream>
using namespace std;

int main(){
    int n ,m , o , p , q , r;
    int hun , fiv , tw , ten , one;
    cout << "Enter any amount:";
    cin >> n;
    char ch;
    cout << " Enter 1:";
    cin >> ch;
    
    switch (ch)
    {
     case '1':
      hun = n/100;
     cout << "100 = " << hun << endl;
      m = n - (100*hun);
    case '2':
     fiv = m/50;
     cout << "50= " << fiv << endl;
     o = hun- (50*fiv);
     if(fiv==0)
     {
        o=m;
     }
    case '3':
     tw = o/20;
     cout << "20 = " << tw << endl;
      if(tw==0)
     {
        q=o;
     }
     else {
              q = o - (20*tw);
     }
    case '4':
     ten = q/10;
     cout << "10 = " << ten << endl;
     if(ten==0)
     {
        r=q;
     }
     else {
         r = q - (10*ten);
     }
    case '5':
     one = r/1;
     cout << " 1 = " << one << endl;
    }


    return 0;
}
// work is pending recheck again to resove the issues
