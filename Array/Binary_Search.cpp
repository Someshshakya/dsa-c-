
// 1. Binary search
using namespace std;
#include<iostream>
main(){
int NumberList[7]={2,4,34,56,89,92,96};
int TobeSearched, initial,final,mid,count;
TobeSearched = 8;
initial = 0;
final = sizeof(NumberList)/sizeof(int);
count =1;
mid = (initial+final)/2;
while ((initial <= final) && (TobeSearched !=NumberList[mid]) )
    {
    mid = (initial+final)/2;
    if (TobeSearched > NumberList[mid])
        {
            initial=mid+1;
        }
    else{
            final=mid-1;
        }
    }
    if (TobeSearched ==NumberList[mid])
    cout << "Data is present\n";
    else 
    cout << "Data is not present";
}

