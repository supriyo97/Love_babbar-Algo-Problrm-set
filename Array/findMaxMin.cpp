#include <iostream>
#include "OJheader.h"

using namespace std;

int main()
{
    // OJ;
    int max,min,*Arr[1000],sizeofArr=0;
    cout << "Provide the array : ";
    while(1){
        Arr[sizeofArr] = new int;
        cin >> *Arr[sizeofArr];
        if(cin.get() == '\n'){
            break;
        }
        sizeofArr++;
    }
    if(*Arr[0] > *Arr[1]){
        max = *Arr[0];
        min = *Arr[1];
    }else{
        max = *Arr[1];
        min = *Arr[0];
    }
    for (int i = 2; i <= sizeofArr; i+=2){
        if(*Arr[i] > *Arr[i+1]){
            if(*Arr[i] > max){
                max = *Arr[i];
            }
            if(*Arr[i+1] < min){
                min = *Arr[i+1];
            }
        }
        else{
            if(*Arr[i+1] > max){
                max = *Arr[i+1];
            }
            if(*Arr[i] < min){
                min = *Arr[i];
            }
        }
    }
    cout << "MAX : " << max << "\tMIN : " << min;
    cout << endl;
    return 0;
}