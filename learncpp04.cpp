#include <iostream>

using namespace std;
int main()
{
    int i,j;
    i=1;
    cout<<"Square number pattern\n\n";
    cout << "Here your pattern\n" << endl;
    do{
        j=1;
        do{
            cout<<j;
            j++;
        }while(j<=10);
        cout<<"\n";
        i++;
    }while(i<=10);
    
      return 0;
    }
