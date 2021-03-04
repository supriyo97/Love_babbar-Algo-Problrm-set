#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int *Arr[1000],sizeofArr=0;
    cout << "Provide the array to reverse: ";
    while(1){
        Arr[sizeofArr] = new int;
        cin >> *Arr[sizeofArr];
        if(cin.get() == '\n'){       //exit the loop if ENTER is pressed
            break;
        }
        sizeofArr++;
    }
    for (int i = 0; i <= floor(sizeofArr/2); i++){
        swap(Arr[i] ,Arr[sizeofArr-i]);
    }
    cout << "Reversed Array: ";
    for (int j=0;j<=sizeofArr;j++){
        cout << *Arr[j] <<" ";
    }
    cout << endl;
    return 0;
}