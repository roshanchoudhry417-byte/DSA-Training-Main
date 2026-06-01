 #include <iostream>
 using namespace std;

 int main()
{
    int arr[5] = {2,5,8,1,9};
    int key = 1;
    cout << "Enter the key";
    cin >> key;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }
    if (found == false)
    {
            cout << "Element not found in the array";
        }
        return 0;
}