#include <iostream>
#include <string>

using namespace std;

int main()
{
    string askAllan;

    cout << "Do you know what fire on poop looks like? : ";
    cin >> askAllan;
    if ( askAllan == "yes" )
    {
        cout << "\n\nAllan, you are a bad boy !!!! \n\n";
    }
    else
    {
        cout << "\n\nI am glad to hear this, I was starting to think you were a bad boy !!!! \n\n";
    }

    return 0;
}
