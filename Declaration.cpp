#include <iostream>
using namespace std;
int main()
{
    // It is the collection of homogeneous types of bdata types.
    // It stores at contigous memory location.
    // Strating index of an array is 0.But we can perform operation by taking 1.
    //"0" is more Appropiate .

    // syntax to declar an Array
    // Datatype variable_Name=[Size of an Array];
    // Ex:-int a[10];
    // where "a" is an Array of size 10 which stores interger datatypes.

    // There are 5 types of declaration with intialization:-

    //  TYPE-01:-
    int i;
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;


    // we can print using for loop


    for (i = 0; i < 5; i = i + 1)
    {
        cout << arr[i] << " ";
    }


     cout << endl;
    // TYPE:02:-
    int arr1[] = {11, 12, 13, 14, 15, 16};
    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;
    cout << arr1[5] << endl;

    // we can print using for loop
    for (i = 0; i < 6; i = i + 1)
    {
        cout << arr1[i] << " ";
    }




    // TYPE:03:-
    //Taking input from the user:-

    int arr2[5];
    for (int i = 0; i < 5; i = i + 1)
    {
        cout << " Enter The " << i << "number Element : " ;
        cin >> arr2[i];
    }
    for (int i = 0; i < 5; i = i + 1)
    {
  




//TYPE:04:-

int arr3[5]={10,20};
for (int i = 0; i < 5; i = i + 1)
    {
        cout <<"The"<<i<<"index number Element is:"<< arr3[i]<<endl;
    }
//conclusion:-
//Here Size of Array is 5 but it contain only 2 items,then remaining three cell contains garbage value.



//TYPE:05:-
int arr4[5]={0};//When this position contains one value that is only zero i.e "0" then all 5 positions filled with zero otherwise not. 
for (int i = 0; i < 5; i = i + 1)
    {
        cout <<"The"<<i<<"index number Element is:"<< arr4 [i]<<endl;
    }
    return 0;
}