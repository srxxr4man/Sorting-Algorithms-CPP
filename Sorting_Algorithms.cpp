#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void addElement(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter the Element: ";
        cin>>e;
        arr.push_back(e);
    }
}

void display(const vector<int>& arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

// QUICK SORT

int partition(vector<int>& arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=low;

    while(i<j){
        while(i<=high-1 && arr[i]<=arr[pivot]){
            i++;
        }
        while(j>=low+1 && arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[pivot]);
    return j;
}

void quickSort(vector<int>& arr,int low,int high){
    if(low<high){
        int j=partition(arr,low,high);
        quickSort(arr,low,j-1);
        quickSort(arr,j+1,high);
    }
}

// MERGE SORT

void merge(vector<int>& arr,int low,int mid,int high){
    int l=mid-low+1;
    int r=high-mid;

    vector<int> left(l);
    vector<int> right(r);

    for(int i=0;i<l;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<r;j++){
        right[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=low;

    while(i<l && j<r){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<l){
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<r){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr,int low,int high){
    if(low>=high){
        return;
    }

    int mid=(low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

// INSERTION SORT

void insertionSort(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        int temp=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

// SELECTION SORT

void selectionSort(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

// MAIN FUNCTION

int main(){
    vector<int> arr;
    int n,ch;

    cout<<"Enter the Number of Elements: ";
    cin>>n;

    if(n<=0){
        cout<<"Invalid number of elements";
        return 0;
    }

    addElement(arr,n);

    cout<<"\nOriginal Array: ";
    display(arr);

    do{
        cout<<"\n----- SORTING MENU -----"<<endl;
        cout<<"1. Quick Sort"<<endl;
        cout<<"2. Merge Sort"<<endl;
        cout<<"3. Insertion Sort"<<endl;
        cout<<"4. Selection Sort"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter your Choice: ";
        cin>>ch;

        vector<int> temp=arr;

        switch(ch){
            case 1:
                quickSort(temp,0,temp.size()-1);
                cout<<"Array After Quick Sort: ";
                display(temp);
                break;

            case 2:
                mergeSort(temp,0,temp.size()-1);
                cout<<"Array After Merge Sort: ";
                display(temp);
                break;

            case 3:
                insertionSort(temp);
                cout<<"Array After Insertion Sort: ";
                display(temp);
                break;

            case 4:
                selectionSort(temp);
                cout<<"Array After Selection Sort: ";
                display(temp);
                break;

            case 5:
                cout<<"Exiting Program...";
                break;

            default:
                cout<<"Invalid Choice! Try Again."<<endl;
        }

    }while(ch!=5);

    return 0;
}