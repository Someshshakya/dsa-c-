// bubble sort for arrays

#include<iostream>
using namespace std;
const int Length = 5;
main(){
    int initialNumber, i, j,SizeArray[Length],Temp;
    cout << "Enter your numbers : \n";
    for (i = 0; i < Length;i++)
        cin >> SizeArray[i];
    // sorting
    for (i = Length; i > 0;i--){
        for (j = 0; j < i;j++){
            if(SizeArray[j]>SizeArray[j+1]){
                Temp = SizeArray[j];
                SizeArray[j] = SizeArray[j+1];
                SizeArray[j+1] = Temp ;
            }
        }
    }
        cout << "Following are the sorted items of  Array is :- \n";
    for (i = 0; i < Length;i++)
        cout << SizeArray[i] << "\n";
}

