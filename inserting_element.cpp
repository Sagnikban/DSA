#include <iostream>
using namespace std;
int main()
{
    int x;
    int arr[50], i, num,ele, pos;

    cout << "Enter the no of elements u want in the array :" << endl;
    cin >>ele;

    cout << "Enter the elements:"<<endl;
    for (int i = 0; i<ele; i++) 
    {
        cin>>arr[i];
    }

    cout << "The array is: [";
    for (int i = 0; i <ele; i++)
    {
        cout<<arr[i] << " ";
    }
    
    cout<<endl;
 
    cout << "Chosen from the given option" <<endl;
    cout << "1 for inserting at the specific position"<<endl<<"2 for inserting at beginning "<<endl;
    cout << "Enter ur choice:"<<endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Enter the postion at which u want to insert: " <<endl;
        cin >> pos;
        cout << "Enter an element u want to insert: " <<endl;
        cin >> num;
        for (i=ele; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[i] = num;

        cout << "The new array is : [";
        for (i = 0; i <=ele; i++)
        {
            cout << arr[i]<<" ";
        }

        break;

    case 2:
        cout << "Enter an element u want to insert: ";
        cin >> num;
        
        for (i = ele- 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = num;

        cout << "The new array is : [";
        for (i = 0; i <= ele; i++)
        {
            cout <<arr[i]<<' ';
        }

       
        break;
    }
    return 0;
}