#include <iostream>
using namespace std;

int main()
{
     int tmp;

    cout <<"Input days temperature : " << endl;
    cin >> tmp;
   if(tmp<0)
             cout <<"Freezing weather." << endl ; 
   else if(tmp<10)
            cout <<"Very cold weather." << endl;
            else if(tmp<20)
                        cout <<"Cold weather." << endl;
                    else if(tmp<30)
                               cout <<"Normal in temp." <<endl;
                            else if(tmp<40)
                                         cout <<"Its Hot." << endl;
                                    else
                                           cout <<"Its very hot." <<endl;


return 0;

}
