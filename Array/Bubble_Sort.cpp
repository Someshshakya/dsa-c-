// bubble sort for arrays

#include<iostream>
using namespace std;
const int N = 5;
main(){
    int initialNumber, i, j,LargeArray[N],Temp;
    cout << "Enter your numbers : \n";
    for (i = 0; i < N;i++)
        cin >> LargeArray[i];
    // sorting
    for (i = 0; i < N; i++)
        for (j = 0; j < i + 1;j++)
            if (LargeArray[i] < LargeArray[j]){
                Temp = LargeArray[i];
                LargeArray[i] = LargeArray[j];
                LargeArray[j] = Temp;
            }
    cout << "Following are the sorted items of  Array is :- \n";
    for (i = 0; i < N;i++)
        cout << LargeArray[i] << "\n";
}

