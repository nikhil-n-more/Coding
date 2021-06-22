#include<bits/stdc++.h>

using namespace std;

// int bs1(int arr[], int high, int target)
// {
//     // find given target in given sorted array
//     int low=0;
//     while(low < high)
//     {
//         int mid = low + (high - low)/2;
//         if(arr[mid] == target)
//             return mid;
//         if(arr[mid] < target)
//             low = mid + 1;
//         else 
//             high = mid;
//     }
//     return -1;
// }

// pair<int,int> bs2(int arr[], int n, int target)
// {
//     // first and last occurence
//     // first binary-search and then linear
//     int low=0,high=n-1;
//     pair<int, int> index;
//     index.first = -1;
//     index.second = -1;
//     while(low <= high)
//     {
//         int mid = low + (high - low)/2;
//         cout<<arr[mid]<<endl;
//         if(arr[mid] == target)
//         {
//             index.first = mid;
//             index.second = mid;
//             // int index.first = mid, index.second = mid;
//             while((index.first >= low) && (arr[index.first] == target))
//                 index.first--;
//             while((index.second <= high) && (arr[index.second] == target))
//                 index.second++;
//             index.first += 1;
//             index.second -= 1;
//             return index;
//         }
//         if(arr[mid] < target)
//             low = mid + 1;
//         else 
//             high = mid - 1;
//     }
//     return index;
// }

// pair<int,int> bs3(int arr[], int n, int target)
// {
//     //first and last occurence
//     //find operation binary-search and then again binary-search
//     int low=0,high=n-1;
//     pair<int, int> index;
//     index.first = -1;
//     index.second = -1;
//     while(low <= high)
//     {
//         int mid = low + (high - low)/2;
//         cout<<arr[mid]<<endl;
//         if(arr[mid] == target)
//         {
//             //in this case we now need to first  search for left and then right
//             index.second = high;
            
//             high = mid;
//             bool found = false;
//             if(arr[mid-1] != target)
//                 index.first = mid;
//             else
//             {
//                 while(1)
//                 {
//                     while(low <= high)
//                     {
//                         mid = low + (high - low)/2;
//                         if(arr[mid] == target)
//                         {
//                             // if we find target then look further left
//                             index.first = mid;
//                             if(arr[mid-1] != target)
//                             {
//                                 found = true;
//                                 break;
//                             }
//                             high = mid-1;
//                         }
//                         else
//                             low = mid + 1;
//                         //here target can only be equal or lower than element
//                     }
//                     if(found)
//                         break;
//                 }
//             }
           
//             if(arr[mid+1] != target)
//             {
//                 index.second = mid;
//                 return index;
//             }
//             low = mid+1;
//             high = index.second;
//             found = false;
//             while(1)
//             {
//                 while(low <= high)
//                 {
//                     mid = low + (high - low)/2;
//                     if(arr[mid] == target)
//                     {
//                         index.second = mid;
//                         if(arr[mid+1] != target)
//                         {
//                             found = true;
//                             break;
//                         }
//                         low = mid+1;
//                     }
//                     else
//                         high = mid-1;
//                 }
//                 if(found)
//                     break;
//             }
//             return index;
//         }
//         if(arr[mid] < target)
//             low = mid + 1;
//         else 
//             high = mid - 1;
//             //here target can only be higher or equal to the element
//     }
//     return index;
// }

// int bs4(int arr[], int n, int target)
// {
//     int low=0,high=n-1;
//     int count = 0;
//     int first =0, last=0;
//     bool found = false;
//     while(low <= high)
//     {
//         int mid = low + (high - low)/2;
//         if(arr[mid] == target)
//         {
//             if(found)
//             {
//                 last = mid;
//                 low = mid+1;
//             }
//             else
//             {
//                 first = mid;
//                 high = mid-1;
//             }
//         }
//     }
//     return -1;
// }

int bs5(int arr[], int n)
{
    // Number  of times an array rotated
    int low=0, high=n-1;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        // cout<<arr[mid]<<endl;
        if(arr[mid] > arr[mid+1]){
            // cout<<arr[mid];
            return mid+1;
        }

        if(arr[mid] < arr[mid-1])
            return mid; 
        if(arr[mid] > arr[high])
            low = mid+1;
        else
            high = mid-1;
    }
    return 0;
}
 
int bs6(int arr[], int n, int target)
{
    int low=0,high=n-1;
    while(low <= high)
    {
        int mid = low + (high -low)/2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] < arr[high])
        {
            if(target < arr[high] && target > arr[mid])
                low = mid+1;
            else
                high = mid-1;
        }
        else{
            if(target > arr[low] && target < arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
    }
    return -1;
}

int bs7(int arr[], int n, int taret)
{
    //floor of element
    int low=0,high=n-1;
    int floor = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == target)
            return arr[mid];
        if(arr[mid] > target)
        {
            high = mid-1;
        }
        else{
            floor = arr[mid];
            low = mid + 1;
        }
    }
    return floor;
}

int main()
{
    int n=9, target=2 ;
    int arr[9] = {15,23,25,29,2,5,8,11,12};
    cout<<"Array was rotated "<<bs6(arr, n, target)<<" times"<<endl;
    return 0;
}
