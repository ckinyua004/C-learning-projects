
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11};
    int even = 0;
    int odd = 0;
    
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0 ; i<length ; i++){
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Even numbers: "<<even<<endl;
    cout<<"Odd numbers: "<<odd;
    return 0;
}