using namespace std;
#include<iostream>

const int Length = 5;
main(){
    int UnSArray[Length], i, j, Temp;
    cout << "Enter numbers to be sorted: \n";
    for (i = 0; i < Length;i++){
        cin >> UnSArray[i];
    }
    // sorting starts
    for (i = 0; i < Length;i++){
        for (j = i+1; j < Length;j++){
            if (UnSArray[i] > UnSArray[j])      
            {
                Temp = UnSArray[i];
                UnSArray[i] = UnSArray[j];
                UnSArray[j] = Temp;
            }
            
        }
    }
    // consoling output
    cout << "After sorting items : \n";
    for (i = 0; i < Length;i++){
        cout << UnSArray[i] << "\n";
    }
}