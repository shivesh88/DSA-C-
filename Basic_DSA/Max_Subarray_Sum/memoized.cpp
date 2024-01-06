#include<bits/stdc++.h>
using namespace std;
//n yahan nhi kaam karega
// int n;
// vector<int> max_length(n,1);
 
//arr ko refrence se pass krna hota hai
int nodeCheck(int curr_node,int curr_min,int curr_max,int curr_len,vector<int> &arr,vector<int>&max_length)
{
 
cout<<curr_node<<" : "<<curr_len<<"  "<<arr[curr_node]<<endl;
if(curr_node==(int)(arr.size()-1))
{
 return(arr[curr_node]>curr_max)? curr_len+1:curr_len;
}
// if( curr_len+1<max_length[curr_node]){
 
//     return max_length[curr_node];
// }

 if(curr_len==1&& arr[curr_node]<=curr_max)
{
    return nodeCheck(curr_node+1, arr[curr_node], arr[curr_node],1, arr, max_length);
}

else if(arr[curr_node]>curr_max){

curr_len++;
max_length[curr_node]=max(curr_len,max_length[curr_node]);
return nodeCheck(curr_node+1, curr_min, arr[curr_node],max_length[curr_node], arr, max_length);
 
}

else if(arr[curr_node]<=curr_max)
{
    
return max(nodeCheck(curr_node+1, curr_min, curr_max,curr_len, arr, max_length),nodeCheck(curr_node+1, arr[curr_node], arr[curr_node],1, arr, max_length));
}
else 
{
    cout<<"else: "<<curr_node;
return curr_len;
}
 
}
//main class ke andar hai
 
int main(){
int n=10;
    //cin>>n;
    vector<int>arr={3, 8, 3, 8, 1, 5, 10, 5, 8, 10 };
    // for(int& x:arr){
    //     cin>>x;
    // }
vector<int> max_length(n,1);
 
cout<<nodeCheck(1,arr[0],arr[0],1,arr,max_length);
return 0;
}