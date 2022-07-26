#include<bits/stdc++.h>
using namespace std;


// int binarySearch(int arr[],int n, int key){
//     int start =0;
//     int end =n;
//     while(start <=end){
//         int mid =(start+end)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//     }
//     return -1;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cin>>key;

//     cout<<binarySearch(arr,n,key);
//     return 0;


    
// }


// int main(){
//     int n;
//     cin>>n;
//     int key;
//     cin>>key;

//     int arr[n][n];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     bool isPresent = false;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            if(arr[i][j]==key){
//                cout<<i<<" "<<j<<endl;
//                isPresent = true;
               
//            }
//         }
//     }
//     if(isPresent){
//         cout<<"The element is present"<<endl;
//     }else{
//         cout<<"The element is not present"<<endl;
//     }

//     return 0;
// }


// int main(){
//     string s;
//     cin>>s;
//     bool palendrom = true;
//     int i,j;

//     for(i=0,j=(s.length()-1);i<(s.length()/2),j>=(s.length()/2);i++,j--){
//         if(s[i]==s[j]){
//             continue;
//         }else{
//             palendrom = false;
//             break;
//         }
//     }
//     if(palendrom){
//         cout<<"The string is palendrom"<<endl;
//     }else{
//         cout<<"The string is not palendrom"<<endl;
//     }
// }


/* Dynamic Programming */

// const int N = 1e5+10;
// int dp[N];

/* Memoization */

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     return dp[n] = fib(n-1)+fib(n-2);
// }


// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     cout<<fib(n);

//     return 0;

// }

// Tabulation

// int main( ){
//     int n;
//     cin>>n;

//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n];
//     return 0;

// }

/* Print all the prime number between A and B */

// void primeNumber(int a,int b){  //This function will print all the prime Number between A and B

//     for(int number = a; number <= b;number++){
//         bool prime =true;
//         for(int i=2;i<number;i++){
//             if(number%i==0){
//                 prime = false;
//                 break;
//             }
            
            
//         }
//         if(prime==true){
//                 cout<<number<<" ";
//         }
//     }cout<<endl;

// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     primeNumber(a,b);

//     return 0;
// }

/* Pair */

// int main(){
//     pair <int,char> p(2,'s');
//     pair<int ,char> p2;
//     p2 = make_pair(3,'d');

//     cout<<p2.first<<" "<<p2.second;

//     cout << p.first <<" "<<p.second;

//     return 0;
// }

/* Vector */

// int main(){
//     int n;cin>>n;

// vector <int> v;


// for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
// }

// vector<int> :: iterator it;
// for(it = v.begin(); it!=v.end();it++){
//     cout <<*it<<endl;
// }

// return 0;

// }


/* Set */

// int main(){
//     set<int>s;
//     int x;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         s.insert(x);
//     }
//     set<int> :: iterator it;
//     for(it = s.begin();it != s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;

//     if(s.find(6) == s.end()){
//         cout<<"Element not found"<<endl;
//     }else{
//         cout<<"element found"<<endl;
//     }


//     return  0;

// }


/* Map and UnorderedMap */

// int main(){

//     int n;
//     cin>>n;
//     // map<int,int> m;
//     unordered_map<int,int> um;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         // m[arr[i]]++;
//         um[arr[i]]++;
//     }

//     // map<int,int> :: iterator it1;
//     unordered_map<int,int> :: iterator it2;

//     // for(it1 = m.begin(); it1 !=m.end();it1++){
//     //     cout<<it1->first<<" "<<it1->second<<endl;
//     // }
//     for(it2 = um.begin(); it2 !=um.end();it2++){
//         cout<<it2->first<<" "<<it2->second<<endl;
//     }

//     return 0;



// }


// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%15 == 0){
//             cout<<"Lion"<<" ";
//         } else if(i%5 == 0){
//             cout<<"Doncky"<<" ";
//         }else if(i%3 == 0){
//             cout<<"Cat"<<" ";
//         }else{
//             cout<<i<<" ";
//         }

//     }
//     return 0;
// }

/* Fibonacci DP */

// const int N = 1e8;
// int dp[N];

// int fibonacci(int n){
//     if(n==0 ||n==1){
//         return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//      return dp[n] = fibonacci(n-1)+fibonacci(n-2);
// }


// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;

//     cout<<fibonacci(n);

//     return 0;
// }

// #include <queue>
// #include<stack>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     stack <int> s;
//     queue<int> q;
//     priority_queue <int, vector<int>> pq1;
//     priority_queue <int , vector<int>,greater<int>> pq2;
    

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         s.push(arr[i]);
//         q.push(arr[i]);
//         pq1.push(arr[i]);
//         pq2.push(arr[i]);
//     }

//     while(! s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }cout<<endl;
//     while(! q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }cout<<endl;
//     while(! pq1.empty()){
//         cout<<pq1.top()<<" ";
//         pq1.pop();
//     }cout<<endl;
//     while(! pq2.empty()){
//         cout<<pq2.top()<<" ";
//         pq2.pop();
//     }
    
//     return 0;

// }

// const int N = 1e5+10;
// int height[N];
// int dp[N];

// int frogg(int n, int k){
//     if(n<=0){
//         return 0;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int ans = INT_MAX;

//     for(int i=1;i<=k;i++){
//         if(n-i>=0){
//         ans = min(ans,(abs(height[n-i]-height[n])+frogg(n-i,k)));
//         }
//     }

    

    
//     // ans = min(ans,(abs(height[n-2]-height[n])+frogg(n-2)));
    
//     return dp[n] = ans;
    

// }

// int main(){

//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;

//     for(int i=0 ;i<n;i++){
//         cin>>height[i];
//     }

//     cout<<frogg(n-1,k);

//     return 0;
// }

// int main(){
//     string s;
//     getline(cin,s);

//     stack<string>st;

//     for(int i=0;i<s.length();i++){
//         string word ;
//         while(s[i] != ' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
        
//     }

//     while(!st.empty()){
//         cout<<st.top()<<" ";

//         st.pop();

//     }
    
//     return 0;

// }


/* Balanced Paranthesis */

// bool validParanthesis(string s){
//     stack <char> st;

//     bool valid = true;

//     for(int i=0;i<s.length();i++){
//         if(s[i]== '(' || s[i]== '{' || s[i]== '['){
//             st.push(s[i]);
//         }else if(s[i]== ')'){
//             if(st.top() == '(' && ! st.empty()){
//                 st.pop();
//             }else{
//                 valid = false;
//                 break;
//             }
//         }else if(s[i]== '}'){
//             if(st.top() == '{' && ! st.empty()){
//                 st.pop();
//             }else{
//                 valid = false;
//                 break;
//             }
//         }else if(s[i]== ']'){
//             if(st.top() == '[' && ! st.empty()){
//                 st.pop();
//             }else{
//                 valid = false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         return false;
//     }
//     return true;
// }

// int main(){
//     string s;
//     cin>>s;

//     if(validParanthesis(s)){
//         cout<<"This is a valid paranthesis"<<endl;
//     }else{
//         cout<<"This paranthesis is not valid"<<endl;
//     }

//     return 0;
// }

/* Graph */

// #define vi vector<int>
// #define vii vector<vi>


// int main(){
//     int n,m; 
//     cin>>n>>m;   //n= no. of nodes and m = no. of edges
//     vii adjm (n+1,vi(n+1,0));   // the 2-D vector is initialized as 0
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;

//         adjm[x][y] = 1;
//         adjm[y][x] = 1;  // undirected graph (both way edge)

//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<n+1;j++){
//             cout<<adjm[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }

/* MergeSort */

    // void merge(int arr[],int start,int mid,int end){

    //     int n1 = mid-start+1;
    //     int n2 = end-mid;

    //     int temp1[n1];
    //     int temp2[n2];

    //     for(int i=0;i<n1;i++){
    //         temp1[i] = arr[start+i];
    //     }
    //     for(int i=0;i<n2;i++){
    //         temp2[i] = arr[mid+1+i];
    //     }
    //     int pointer1=0,pointer2=0,traverse=start;

    //     while(pointer1<n1 && pointer2<n2){
    //         if(temp1[pointer1]<temp2[pointer2]){
    //             arr[traverse]=temp1[pointer1];
    //             pointer1++;traverse++;
    //         }else{
    //             arr[traverse]=temp2[pointer2];
    //             pointer2++;traverse++;
    //         }
    //     }
    //     while(pointer1<n1){
    //         arr[traverse]=temp1[pointer1];
    //             pointer1++;traverse++;
    //     }
    //     while(pointer2<n2){
    //         arr[traverse]=temp2[pointer2];
    //             pointer2++;traverse++;

    //     }

    // }

    // void mergeSort(int arr[],int start,int end){
    //     if(start<end){
    //         int mid = (start+end)/2;

    //         mergeSort(arr,start,mid);
    //         mergeSort(arr,mid+1,end);

    //         merge(arr,start,mid,end);
    //     }
    // }

    // void printArray(int arr[],int size){
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" ";
    //     }cout<<endl;
    // }
    // void change(int a, int b){
    //     int c=b;
    //     b=a;
    //     a=c;

    // }

    // int main(){
        
    //     int a=5,b=6;

    //     change(a,b);
    //     cout<<a<<" "<<b;

    //     return 0;
    // }

//     void change(int arr[]){
//         arr[4] = 7;
//     }

// int main(){
//     int arr[5]={5, 4, 3, 2, 1};

//     change(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

/* MergeSort */

// void merge(int array[],int left,int mid,int right){
//     int size1 = mid-left+1;
//     int size2 = right-mid;

//     int temparr1[size1];
//     int temparr2[size2];

//     for(int i=0;i<size1;i++){
//         temparr1[i]=array[left+i];
//     }
//     for(int i=0;i<size2;i++){
//         temparr2[i]=array[mid+1+i];
//     }
//     int i=0,j=0,k=left;


//     while(i<size1 && j<size2){
//         if(temparr1[i]<temparr2[j]){
//             array[k]=temparr1[i];
//             i++;k++;
//         }else{
//             array[k]=temparr2[j];
//             j++;k++;
//         }
//     }
//     while(i<size1){
//         array[k]=temparr1[i];
//         i++;k++;
//     }
//     while(j<size2){
//         array[k]=temparr2[j];
//         j++;k++;
//     }
// }

// void mergesort(int array[],int left,int right){
//     if(left<right){
//         int mid = (right+left)/2;

//         mergesort(array,left,mid);
//         mergesort(array,mid+1,right);
//         merge(array,left,mid,right);
//     }
// }

// void printArray(int array[],int size){

//     for(int i=0;i<size;i++){
//         cout<<array[i]<<" ";
//     }cout<<endl;
// }


// int main(){
//     int size;
//     cin>>size;

//     int array[size];
//     for(int i=0;i<size;i++){
//         cin>>array[i];
//     }

//     mergesort(array,0,size-1);

//     printArray(array,size);

//     return 0;
// }



/* binary search */

// int binarySearch(int arr[],int first,int last,int k){
//     if(first<=last){
//         int mid = first+(last-first)/2;

//         if(arr[mid]==k){
//             return mid;
//         }if(arr[mid]>k){
//            return binarySearch(arr,first,mid-1,k);
//         }else{
//            return binarySearch(arr,mid+1,last,k);
//         }
//     }

//     return -1;
    
    
    
// }

// int main(){
//     int arr[]={1,2,3,4,5};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<size;

//     cout<< binarySearch(arr,0,size-1,6 );


//     return 0;
// }


// class student{
//     public:
//     string name;
//     int age;
//     bool gender;

//     student(string s,int a,bool g){
//         name = s;
//         age = a;
//         gender = g;
//     }

//     void print(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;
//         cout<<"Gender: "<<gender<<endl;
        
//     }
// };

// int main(){

//     student s("Sujan",22,1);
//     // student s;
//     // cout<<"Name : "<<" ";
//     // getline(cin,s.name);
//     // cout<<"Age : "<<" ";
//     // cin>>s.age;
//     // cout<<"Gender : "<<" ";
//     // cin>>s.gender;

//     s.print();
//     return 0;
    
// }


/* inheritance in cpp */

// single inheritance

// class A{
    

//     public:
//     void func(){
//         cout<<"I am a good boy"<<endl;
//     }
    
// };
// class B : public A{
//     public:
//     void func2(){
//         cout<<"I am not a good boy"<<endl;
//     }
// };

// int main(){
//     B b;
//     b.func();
//     b.func2();
   

//     return 0;
// }

// Multiple Inheritence

// class A{
//     public:
//     void func1(){
//         cout<<"Kaner tolai thabra marbo"<<endl;
//     }
// };
// class B{
//     public:
//     void func2(){
//         cout<<"The laesa karthick no.1"<<endl;
//     }
// };
// class C : public A, public B {

// };

// int main(){
//     C c;
//     c.func1();
//     c.func2();

//     return 0;
// }

/* Practices of recursion */

// add n numbers

// int add(int n){
//     if(n==1){
//         return 1;
//     }
//     int result = n+add(n-1);

//     return result;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<add(n)<<endl;

//     return 0;
// }

/* calculate n^p */

// int power(int n,int p){
//     if( p==1){
//         return n;
//     }

//     int result = n*power(n,p-1);

//     return result;
// }

// int main(){
//     int n,p;
//     cin>>n>>p;

//     cout<<power(n,p);
// }

// factorial of n numbers 

// int factorial(int n){
//     if(n==1){   //base case
//         return 1;
//     }

//     int result = n*factorial(n-1);

//     return result;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;

//     return 0;
// }

// fibonacci



//  int fibonacci(int n,int dp[]){
//     if(n==1||n==0){
//         return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }

//     int result = fibonacci(n-1,dp)+ fibonacci(n-2,dp);

//     return dp[n]= result;
// }

// int main(){
    
//     int n;
//     cin>>n;
//     int dp[n];
//     memset(dp,-1,sizeof(dp));

//     cout<<fibonacci(n,dp);
// }


// Is a array is sorted or not 

// bool isSorted(int arr[],int n){
//     //base case
//     if(n==1){
//         return true;
//     }
//     bool restArray = (arr[0]<=arr[1]) && isSorted(arr+1,n-1);

//     return restArray;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<isSorted(arr,n);

//     return 0;
// }


// print numbers till n

// void incresingPrint(int n){
//     if(n==0){
//         return ;
//     }

    

//     incresingPrint(n-1);

//     cout<<n<<" ";
    
// }

// int main(){
//     int n;
//     cin>>n;

//     incresingPrint(n);

//     return 0;
// }

/* mergesort */

// void merge(int arr[],int start,int mid,int end){
//     int size1 = mid-start+1;
//     int size2 = end-mid;

//     int temparr1[size1];
//     int temparr2[size2];

//     for(int i=0;i<size1;i++){
//         temparr1[i]=arr[start+i];
//     }
//     for(int i=0;i<size2;i++){
//         temparr2[i]=arr[mid+1+i];
//     }
//     int pointer1=0,pointer2=0,pointer3=start;
//     while(pointer1<size1 && pointer2<size2){
//         if(temparr1[pointer1]>temparr2[pointer2]){
//             arr[pointer3]=temparr2[pointer2];
//             pointer3++;pointer2++;
//         }else{
//             arr[pointer3]=temparr1[pointer1];
//             pointer3++;pointer1++;
//         }
//     }
//     while(pointer1<size1){
//         arr[pointer3]=temparr1[pointer1];
//             pointer3++;pointer1++;
//     }while(pointer2<size2){
//         arr[pointer3]=temparr2[pointer2];
//             pointer3++;pointer2++;
//     }
// }

// void mergeSort(int arr[],int start,int end){
//     if(start<end){
//         int mid = (start+end)/2;

//         mergeSort(arr,start,mid);
//         mergeSort(arr,mid+1,end);
//         merge(arr,start,mid,end);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;

// }

// frog1

//  const int N = 10e5+10;
//  int height [N];

//     int func(int i){
//         if(i==0){
//             return 0;
//         }
//         int cost = INT_MAX;

//          cost = min(cost,func(i-1)+abs(height[i]-height[i-1]));

//         if(i>1){
//          cost = min(cost,func(i-2)+abs(height[i]-height[i-2]));
//         }

//         return cost;

//     }


//  int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>height[i];
//     }

//     cout<<func(n-1);

//     return 0;


//  }


/* Binary Search */

// int binarySearch(int arr[],int start,int end,int x){
//     if(start<=end){
//         int mid = (start+end)/2;
//         if(arr[mid]==x){
//             return mid;
//         }else if(arr[mid]<x){
//             binarySearch(arr,start,mid-1,x);
//         }else{
//             binarySearch(arr,mid+1,end,x);
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;cin>>n;
//     int x;
//     cin>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<binarySearch(arr,0,n-1,x);

//     return 0;
// }

/* Longest incresing sub-sequence */ 

// int const N = 10e3+10;
// vector<int> v(N);

// int lis(int n){

//     int ans=1;
//     for(int i=0;i<n;i++){
//         if(v[i]<=v[n]){
//             ans = max(ans,lis(i)+1);
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int ans =1;
//     for(int i=0;i<n;i++){
//         ans = max(ans,lis(i));
//     }
//     cout<<ans;
// }

// union employee{
//     int id;
//     // string name;
//     float salary;
// };
// // class emp{
// //     public:
// //     int id;
// //     string name;
// //     float salary;
// // };

// int main(){
//     union employee e;
//     // emp ee;
//     // e.id = 0001;
//     // e.name = "Sujan Biswas";
//     e.salary = 45000.50;
//     // ee.id = 0002;
//     // ee.name = "Suman Biswas";
//     // ee.salary = 55000.50;

//     cout<<e.salary<<" "<<endl;
//     // cout<<ee.id<<" "<<ee.name<<" "<<ee.salary<<endl;

//     return 0;
// }


/* Graph */

// const int N = 1e2+7;
// int graph[N][N];

// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;
//     for(int i=0;i<edges;i++){
//         int x,y;
//         cin>>x>>y;
//         graph[x][y]=1;
//         graph[y][x]=1;
//     }

//     for(int i=1;i<nodes+1;i++){
//         for(int j=1;j<nodes+1;j++){
//             cout<<graph[i][j]<<" ";
//         }cout<<endl;
//     }
// }


// Adacentcy List

// const int N = 1e5+10;
// vector<int> graph[N];

// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;
//     for(int i=0;i<edges;i++){
//         int x,y;
//         cin>>x>>y;
//        graph[x].push_back(y);
//     //    graph[y].push_back(x);
//     }
//     for(int i=1;i<nodes+1;i++){
        
//         cout<<i<<"->";
//         for(int x: graph[i]){
//             cout<<x<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }

/* MergeSort */

// void merge(int arr[],int start,int mid,int end){
//     int x = mid-start+1;
//     int y = end-mid;
//     int arr1[x];
//     int arr2[y];
//     for(int i=0;i<x;i++){
//         arr1[i]=arr[start+i];
//         //cout<<arr1[i]<<" ";
//     }//cout<<endl;
//     for(int i=0;i<y;i++){
//         arr1[i]=arr[mid+1+i];
//         //cout<<arr1[i]<<" ";
//     }//cout<<endl;
//     int m=0,n=0,p=start;
//     while(x>m && y>n){
//         if(arr1[m]<arr2[n]){
//             arr[p]=arr2[n];
//             n++;p++;
//         }else{
//             arr[p]=arr1[m];
//             m++;p++;
//         }

//     }
//     while(x>m ){
//         arr[p]=arr1[m];
//         m++;p++;
//     }
//     while(y>n ){
//         arr[p]=arr2[n];
//         n++;p++;
//     }
   

// }

// void mergeSort(int arr[],int start,int end){
//     if(start<end){
//         int mid = (start+end)/2;
        
//         mergeSort(arr,start,mid);
//         mergeSort(arr,mid+1,end);
    
//         merge(arr,start,mid,end);
//     }
// }

// int main(){
    
//     int arr[]={5,4,3,2};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;

//     mergeSort(arr,0,size-1);
    
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     return 0;
// }

/* Graph */

// DFS-Depth First Search

// const int N = 1e5+10;
// vector<int> g[N];
// bool vis[N];

// void dfs(int vertex){
//     cout<<vertex<<endl;
//     vis[vertex]=true;
//     for(int child:g[vertex]){
//         cout<<"Parent: "<<vertex<<" Child:"<<child<<endl;
//         if(vis[child]){
//             continue;
//         }
//         dfs(child);
//     }
// }


// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     dfs(1);

//     return 0;
// }





// Number of connected components



// const int N = 1e5+10;

// vector<int> g[N];
// bool vis[N];

// void dfs(int vertex){
//     vis[vertex]=true;
//     for(int child : g[vertex]){
//         if(vis[child]){
//             continue;
//         }
//         dfs(child);
//     }
// }

// int main(){
//     int n,e;
//     cin>>n>>e;
//     for(int i=0;i<e;i++){
//         int n1,n2;
//         cin>>n1>>n2;
//         g[n1].push_back(n2);
//         g[n2].push_back(n1);

//     }

//     int count = 0;
//     for(int i=1;i<=n;i++){
//         if(vis[i]){
//             continue;
//         }
//         dfs(i);
        
//         count++;
//     }
//     cout<<count<<endl;

//     return 0;

// }

/* Graph */

//Adjacency Matrix

// const int N = 10e3+10;
// //int graph[N][N];

// vector<int> graph[N];


// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;

//     for(int i=0;i<edges;i++){
//         int node1,node2;
//         cin>>node1>>node2;
//         // graph[node1][node2]=1;
//         // graph[node2][node1]=1;
//         graph[node1].push_back(node2);
//         graph[node2].push_back(node1);

//     }
//     for(int i=1;i<=nodes;i++){
//         for(int j=1;j<=nodes;j++){
//             cout<<graph[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }


//Longest increasing subsequence

// const int N = 1e5+10;
// vector<int> a(N);

// int dp[N];

// int lis(int n){
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int ans =1;
//     for(int i=0;i<n;i++){
//         if(a[n]>=a[i]){
//             ans = max(ans,lis(i)+1);
//         }
//     }
//     return dp[n] = ans;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));

//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int ans =0;
//     for(int i=0;i<n;i++){
//         ans = max(ans,lis(i));
//     }
//     cout<<ans<<endl;

//     return 0;
// }

//Longest incresing sub sequences

// const int N = 1e5+10;
// int arraySize[N];
// int dp[N];

// int lis(int n){

//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int currentLIS = 1;

//     for(int i=0;i<n;i++){
//         if(arraySize[n]>=arraySize[i]){
//             currentLIS = max(currentLIS,lis(i)+1);
//         }
//     }

//     return dp[n] =  currentLIS;

// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arraySize[i];
//     }
//     int maxLIS = 0;
//     for(int i=0;i<size;i++){
//         maxLIS = max(maxLIS,lis(i));
//     }

//     cout<<maxLIS<<endl;

//     return 0;
// }


//Minimun Coin (by DP)


// const int N = 1e5;
// int allCoin[N];
// int dp[N];

// int coins(int n,int k){
    
//     if(k == 0){
//         return 0;
//     }
//     if(dp[k]!= -1){
//         return dp[k];
//     }
//     int ans = INT_MAX;
//     for(int coin: allCoin){
//         if(k-coin>=0){
//             ans = min(ans,coins(n, k-coin)+1);
//         }
//     }
//     return dp[k]= ans;
    
    
// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     for(int i=0;i<n;i++){
//         cin>>allCoin[i];
//     }

//     cout<<coins(n,k);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }cout<<endl;

//     for(int i :arr){
//         cout<<i<<" ";
//     }
//     return 0;

    
// }


// fibonacci number

// const int N =1e5+10;
// int dp[N];

// long long int fibonacci(long long int n){
//     if(n==1 || n==0){   // base case
//         return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }

//     long long int answer = fibonacci(n-1)+fibonacci(n-2);

//     return dp[n] = answer;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));

//     long long int n;
//     cin>>n;

//     cout<<fibonacci(n);

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

// int factorial(int n){

//     if(n==0 || n==1){
//         return n;
//     }

//     int prev = factorial(n-1)+factorial(n-2);

//     return prev ;

// }

// int main(){
// int n;
// cin>>n;

// cout<<factorial(n);

//     return 0;
// }

/* A given array is shorted or not */

// bool check(int arr[], int n){

//     if(n==1){
//         return true;
//     }

//     bool prev = check(arr+1, n-1);

//     return (arr[0]<=arr[1] && prev);


// }

// int main (){
//     int arr[] = {1,1,2,3,4};
    
//     cout <<check(arr,5);

//     return 0;
// }

/* Print all number till n */

// void accending(int n){
//     if(n==0){
//         return;
//     }
//     accending(n-1);
//     cout<<n<<" ";

// }
// void decending(int n){
//     if(n==0){
//         return;
//     }
    
//     cout<<n<<" ";
//     decending(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     accending ( n);
//     cout<<endl;
//     decending(n);
// }

/* Reverse a string */

// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }

//     string res = s.substr(1);
//     reverse(res);

//     cout<<s[0]<<" ";



// }

// int main(){
//     reverse("Binod");
//     return 0;
// }

/* Reverse acstring using stack */

// int main(){
//     string s;
//     getline(cin,s);

//     stack <string> st;
//     for(int i=0;i<s.length();i++){
//         string word = "";
//         while (s[i] != ' ' && i <s.length()){
//             word += s[i];
//             i++;
//         }
        
//         st.push(word);
//     }

//     while(! st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }

//     return 0;

// }



/* Traversing of a Tree */


// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data =val;
//         left = NULL;
//         right = NULL;
//     }
// };

// void preOrder(struct Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void inOrder(struct Node* root){
//     if(root == NULL){
//         return;

//     }
//     inOrder(root -> left);
//     cout<< root ->data<<" ";
//     inOrder(root->right);

// }

// void postOrder(struct Node* root){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<< " ";
// }

// int main(){
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     preOrder(root);
//     cout<<endl;
//     inOrder(root);
//     cout<<endl;
//     postOrder(root);

//     return 0;

// }


/* Dinamic Programming */

// Memoization

// const int N = 1e5+10;
// int dp[N];

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }

//     if(dp[n] != -1){
//         return dp[n];

//     }

//     return dp[n] = fib(n-1)+fib(n-2);
// }

// int main(){

//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;

//     cout<<fib(n);

// }

/* Frog1 */

// const int N = 1e5 +10;
// int height[N];
// int dp[N];


// int func(int n){
//     if(n==0 ){
//         return 0;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     int cost = INT_MAX;

//     //way1

//     cost = min(cost,func(n-1)+abs(height[n]-height[n-1]));

//     //way2
    
//     if(n>1){
//     cost = min(cost,func(n-2)+abs(height[n]-height[n-2]));
//     }

//     return dp[n] = cost;

// }

// int main(){
//     memset(dp, -1, sizeof(dp));
//     int n;
// cin>>n;
// // int height[n];

// for(int i =0;i<n;i++) {
//     cin>>height[i];
// }
// cout<<func(n-1);
// return 0;
// }

/*Frog 2 */

// const int N =1e5+10;
// int dp[N];
// int height[N];
// int k;


// int func(int n){

//     if(n==0){
//         return 0;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }

//     int cost = INT_MAX;

//     for(int j=1;j<=k;j++){
//         if(n-j>=0){
//         cost = min(cost,func(n-j)+abs(height[n]-height[n-j]));
//         }
//     }
//     return dp[n]= cost;
// }


// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n>>k;
//     for(int i=0; i<n;i++){
//         cin>>height[i];
//     }
//     cout<<func(n-1);

//     return 0;
// }



/* Longest increasing subsequence */

// int const N = 1e5+10;
// int sequence[N];
// int dp[N];

// int lis(int n){
//     if(dp[n] != -1){
//         return dp[n];
//     }
    
//     int ans = 1;
//     for(int i=0;i<n;i++){
//         if(sequence[i]<=sequence[n]){
//             ans = max(ans,lis(i)+1);
//         }
//     }
//     return dp[n] = ans;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>sequence[i];
//     }

//     int ans =0;
//     for(int i=0;i<n;i++){
//         ans = max(ans,lis(i));
//     }
//     cout<<ans;

//     return 0;
// }


/* Coin Change Problem */\

/* (i) BrouteForce by me ...O(n^2) */

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int total;
//     cin>>total;
//     int count =0;
//     sort(arr,arr+n,greater<int>());
//     for(int i=0;i<n;i++){
//         while(arr[i]<=total){
//             total -= arr[i];
//             count++;
//         }
//     }
//     if(total != 0){
//         cout<<"-1"<<endl;
//     }else{
//         cout<<count<<endl;
//     }

//     return 0;
    
// }

    /* (ii) By Luv  */

//     int const N = 100;
//     int coins[N];

//     int minCoin(int n, int k){
//         if(n==0){
//             return 0;
//         }
//         int ans = INT_MAX;
//         for(int coin :coins){
//             if(k-coin >= 0){
//                 ans = min(ans, minCoin(k-coin,k)+1);
//             }
//         }
//         return ans;

//     }

// int main(){
//     int n;
//     cin>>n;
//     int k;cin>>k;
//     for(int i=0;i<n;i++){
//         cin>>coins[i];
//     }
//     cout<<minCoin(n,k);
// }

/* Knapsack 1 */
 
// const int N = 100;
// int value[N];
// int weight[N];
// int dp[N][N];

// int knapsack(int item,int capasity){
//     if(capasity==0 || item <0){
//         return 0;

//     }
//     if(dp[item][capasity] != -1){
//         return dp[item][capasity];
//     }
//     int sum = knapsack(item-1,capasity);    // Not taking that item

//     if(capasity-weight[item]>=0){
//         sum = max(sum,knapsack(item-1,capasity-weight[item])+value[item]);  // taking that item
//     }
//     return dp[item][capasity] =  sum;
// }


// int main(){
//     memset(dp, -1, sizeof(dp));

//     int item, capasity;
//     cin>>item>>capasity;

//     for(int i=0;i<item;i++){
//         cin>>weight[i]>>value[i];
//     }

//    cout<< knapsack(item-1,capasity);

//    return 0;

// }


/* graph representation with adjusancy matrix  */

// const long long int N = 1e2+10;

// long long int g[N][N];

// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;
//     for(int i=0;i<edges;i++){
//         int node1,node2;
//         cin>>node1>>node2;

//         g[node1][node2] = 1;
//         g[node2][node1] = 1;    //because it's a undirected graph

//     }

//     for(int i=1;i<edges+1;i++){
//         for(int j=1;j<edges+1;j++){
//             cout<<g[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }

/* graph representation with adjusancy list  */

// const int N = 110;
// vector <int> graph[N];
// bool vis[N];

// void dfs(int vertex){
//     cout<<vertex<<endl;
//     vis[vertex] = true;

//     for(int child : graph[vertex]){
//         cout<<"parent:"<<vertex<<",child"<<child<<endl;
//         if(vis[child]){
//             continue;
//         }
//         dfs(child);
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int v1,v2;
//         cin>>v1>>v2;

//         graph[v1].push_back(v2);
//         graph[v2].push_back(v1);

//     }
    
//     dfs(n);
//     return 0;

// }


/* Number of connected components of a graph */

// const int N = 10e5+10;
// vector<int> graph[N];
// bool visited[N];


// void dfs(int vertex){

//     visited[vertex] = true;

//     for(int child :graph[vertex]){
//         if(visited[child]){
//             continue;
//         }
//         dfs(child);
//     }
    
    
// }

// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;

//     for(int i=0;i<edges;i++){   //giving input to the undirected graph
//         int node1,node2;
//         cin>>node1>>node2;

//         graph[node1].push_back(node2);
//         graph[node2].push_back(node2);
//     }

//     int count =0;
//     for(int i=1;i<=nodes;i++){
//         if(visited[i]==true){
//             continue;
//         }
//         dfs(i);
//         count++;
//     }

//     cout<<count<<endl;

//     return 0;
// }


/* is there any cycle present in the given graph */

// const int N = 1e5+10;

//  vector<int> graph[N];
// bool visited[N];

// bool iscyclePresent(int vertex,int parent){
//     visited[vertex] = true;
//     bool isLoopExists = false;

//     for(int child : graph[vertex]){
//         if(visited[child] && child == parent){
//             continue;
//         }
//         if(visited[child]){
//             return true;
//         }

//         isLoopExists |= iscyclePresent(child,vertex);

        
//     }
//     return isLoopExists;

// }

// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;

//     for(int i=0;i<edges;i++){
//         int node1,node2;
//         cin>>node1>>node2;

//         graph[node1].push_back(node2);
//         graph[node2].push_back(node1);

//     }

//     bool isLoopExists = false;

//     for(int i=0;i<nodes;i++){
//         if(visited[i]){
//             continue;
//         }
//         if(iscyclePresent(i,0)){
//             isLoopExists = true;
//             break;
//         }
//     }cout<<isLoopExists<<endl;

//     return 0;




//}

//Merge Sort

// void merge(int arr[],int start,int mid,int end){

//     int n1 = mid-start+1;
//     int n2 = end-mid;

//     int arr1[n1];
//     int arr2[n2];

//     for(int i=0;i<n1;i++){
//         arr1[i] = arr[start+i];
//     }

//     for(int i=0;i<n1;i++){
//         arr2[i] = arr[mid+1+i];
//     }
//     int i=0,j=0,k=start;

//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//           arr[k]=  arr1[i];
//             i++;k++;
//         }else{
//            arr[k] = arr2[j];
//             j++;k++;
//         }
//     }
//     while(i<n1){
//         arr[k]=  arr1[i];
//             i++;k++;
//     }

//     while(j<n2){
//         arr[k]=  arr2[j];
//             j++;k++;
//     }

// }

// void mergeSort(int arr[],int start,int end){

//     if(start<end){
//         int mid = (start+end)/2;

//         mergeSort(arr,start,mid);
//         mergeSort(arr,mid+1,end);

//         merge(arr,start,mid,end);
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0 ;i<n;i++){
//         cin>>arr[i];
//     }

//     mergeSort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;


// }


//DP fibonacci 

// const long long int N =1e10+7;
// long long int dp[N];

// long long int fibonaccii(int n){
//     if(n==0||n==1){
//         return n;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     long long int result = fibonaccii(n-1)+fibonaccii(n-2);

//     return dp[n] = result;
// }


// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;

//     cout<<fibonaccii(n);

//     return 0;
// }

//Frog 

// const int N = 1e5+10;
// int froog[N];
// int dp[N];

// int height(int n,int k){
//     if(n==0){
//         return 0;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int ans = INT_MAX;

//     //ans = min(ans,height(n-1)+abs(froog[n]-froog[n-1]));
//     for(int i=1;i<=k;i++){
//         if(n-i>=0){
//         ans = min(ans,height(n-i,k)+abs(froog[n]-froog[n-i]));
//         }
//     }


//     return dp[n] = ans;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k=5;
//     for(int i=0;i<n;i++){
//         cin>>froog[i];
//     }

//     cout<<height(n-1,k);

//     return 0;
// }

//Longest incresing subsequence

// const int N = 1e5+10;

// int arr[N];

// int lis(int n){
//     int ans =1;

//     for(int i=0;i<n;i++){
//         if(arr[i]<=arr[n]){
//             ans = max(ans,lis(i)+1);

//         }
//     }

//     return ans;

    
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int ans = 0;

//     for(int i=0;i<n;i++){
//         ans = max(ans,lis(i));
//     }

//     cout<<ans;

//     return 0;


// }




//Longest Incresing SubSequence

// const int N = 1e3+10;

// int arr[N];

// int dp[N];

// int lis(int n){

//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int ans =1;

//     for(int i=0;i<n;i++){
//         if(arr[i]<=arr[n]){
//             ans = max(ans,lis(i)+1);
//         }
//     }

//     return dp[n] = ans;
// }


// int main(){

//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int ans =0;

//     for(int i=0;i<n;i++){
//         ans = max(ans,lis(i));
//     }

//     cout<<ans<<endl;

//     return 0;



// }


// Coin Change Problem 1

// const int N = 1e5+10;

// int arr[N];
// int dp[N];

// int coinChange(int arr[],int k,int n){

//     if(k==0){
//         return 0;
//     }
//     if(dp[k]!= -1){
//         return dp[k];
//     }
//     int ans = INT_MAX;

//     for(int i =0;i<n;i++){
//         if(k-arr[i]>=0){
//         ans = min(ans+0LL,coinChange(arr,k-arr[i],n)+1ll);
//         }

//     }

//     return dp[k]= ans;
// }



// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;

//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     if(coinChange(arr,k,n)==INT_MAX){
//         cout<<"-1"<<endl;
//     }else{
//         cout<<coinChange(arr,k,n)<<endl;
//     }



// }

// const int N = 1e5+10;
// int arr[N];

// int coinChange(int arr[],int k,int n){
//     if(k==0){
//         return 1;
//     }
//     int ans = 0;
//     for(int i=0;i<n;i++){
        
//         if(k-arr[i]>=0){
//            ans += coinChange(arr,k-arr[i],n);
//         }
//     }

//     return ans;
// }


// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//    cout<< coinChange(arr, k, n);

//    return 0;
// }

// const int N = 1e3+10;
// int arr[N];
// int dp[N][N];

// int coinChange2(int index,int arr[],int k){
    // if(k==0){
    //     return 1;
    // }

    // if(k==0){
    //     return 0;
    // }

    // if(index<0){
    //     return 0;
    // }
//     if(dp[k][index] != -1){
//         return dp[k][index];
//     }

//     //int ways =0;
//     int ans =INT_MAX;

//     // for(int coin_amount =0 ;coin_amount<= k; coin_amount+=arr[index]){
//     //     ways +=coinChange2(index-1,arr,k-coin_amount);
//     // }
//     for(int i=0;i<=index;i++){
//         if((k-arr[i])>=0){
//         ans = min(ans, coinChange2(index,arr,k-arr[i])+1);
//         }
//     }

//    // return dp[k][index] = ways;
//     return ans;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<coinChange2(n-1,arr,k);

//     return 0;
// }

//Quick Srot

// void swap(int arr[],int i,int j){
//     int temp = arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

// int partition(int arr[],int start, int end){
//     int pivot = arr[end];
//     int i =start-1;

//     for(int j=0;j<end;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr,i,j);
//         }

//     }
//     swap(arr,i+1,end);

//     return i+1;
// }

// void quickSort(int arr[],int start,int end){
//     if(start<end){
//         int pivot = partition(arr,start,end);

//         quickSort(arr,start, pivot-1);
//         quickSort(arr,pivot+1,end);
//     }
// }

// int main(){
//     int arr[]={5,4,6,8,1,2,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     quickSort(arr,0,6);

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;

    
// }


// coins 1

// const int N = 10e6;

// int coins[N];

// int dp[N];

// int calculation(int total, int n){

//     if(total == 0){
//         return 0;
//     }
//     if(dp[total] != -1){
//         return dp[total];
//     }
//     int ans = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(total-coins[i]>=0){
//             ans = min(ans+0LL,calculation((total-coins[i]),n)+1LL);
//         }
//     }

//     return dp[total] = ans;
// }

// int minCoins(int total,int n){

//     memset(dp,-1,sizeof(dp));
//     int ans = calculation(total,n);

//     if(ans == INT_MAX){
//         return -1;
//     }else{
//         return ans;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int total;
//     cin>>total;

//     for(int i=0;i<n;i++){
//         cin>>coins[i];
//     }

//     cout<<minCoins(total,n);
// }


// const int N = 1e5+10;
//  int coins[N];

 

//  int coinChange(int amount,int index){

//     if(amount ==0){
//         return 1;
//     }
//     if(index<0){
//         return 0;
//     }

//     int ways =0;

//     for(int coinAmount = 0; coinAmount<=amount;coinAmount+=coins[index]){
//         ways += coinChange((amount-coinAmount),index-1);    
//     }

//     return ways;
//  }


//  int main(){
//     int n;
//     cin>>n;

//     int amount;
//     cin>>amount;

//     for(int i=0;i<n;i++){
//         cin>>coins[i];
//     }

//     cout<<coinChange(amount,n-1);

//     return 0;
//  }




// const int N = 1e5+10;

// int frogs[N];

// long long minDistance(int k,int n){

//     if(n==0){
//         return 0;
//     }
//     long long ans = INT_MAX;

//     for(int i=1;i<=k;i++){
//         if(n-k>=0){
//             ans = min(ans,(minDistance(k,n-i)+abs(frogs[n]-frogs[n-i])));
//         }
//     }

//     return ans;


// }


// int main(){
//     int n;
//     cin>>n;

//     int k ;
//     cin>>k;

//     for(int i=0;i<n;i++){
//         cin>>frogs[i];
//     }

//     cout<<minDistance(k,n-1);
// }



// 0-1 Knapsack

// const int N =1e3+10;

// int weight[N], value[N];

// int dp[N][N];

// int knapsack(int size,int k){


//     if(k==0){
//         return 0;
//     }

//     if(size<0){
//         return 0;
//     }


//     if(dp[size][k] != -1){
//         return dp[size][k];
//     }
//     int ans = 0;

//     ans = max(ans,knapsack(size-1,k));

//     if(k-weight[size]>=0){
//         ans = max(ans, knapsack(size-1,k-weight[size])+value[size]);
//     }

//     return dp[size][k] = ans;
// }

// int main(){

//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;

//     for(int i=0;i<n;i++){
//         cin>>weight[i]>>value[i];


//     }

//     cout<<knapsack(n-1,k);
// }


//  Marge Sort






// void merge(int arr[],int start, int mid, int end){
//     int size1 = mid-start+1;
//     int size2 = end-mid;

//     int subArr1[size1];
//     int subArr2[size2];

//     for(int i=0;i<size1;i++){
//         subArr1[i]=arr[start+i];
//     }
//     for(int i=0;i<size2;i++){
//         subArr2[i]=arr[mid+1+i];
//     }

//     int pointer1 =0,pointer2=0, pointer = start;

//     while(pointer1<size1 && pointer2<size2){
//         if(subArr1[pointer1]>subArr2[pointer2]){
//             arr[pointer]=subArr2[pointer2];
//             pointer++;pointer2++;
//         }else{
//             arr[pointer]=subArr1[pointer1];
//             pointer++;pointer1++;
//         }
//     }
//     while(pointer2<size2){
//         arr[pointer]=subArr2[pointer2];
//             pointer++;pointer2++;
//     }
//     while(pointer1<size1){
//         arr[pointer]=subArr1[pointer1];
//             pointer++;pointer1++;
//     }
// }

// void mergeSortt(int arr[],int start,int end){
//     if(start<end){
//         int mid = (start+end)/2;
    
//         mergeSortt(arr,start,mid);
        
//         mergeSortt(arr,mid+1,end);
    
//         merge(arr,start,mid,end);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     mergeSortt(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }



// }




// Knapsack 1


// const int N = 10e3;

// int weight[N],value[N];

// int dp[N][N];

// int knapsack(int index,int weight_left){

    

//     if(index <0){
//         return 0;
//     }
//     if(weight_left==0){
//         return 0;
//     }

//     if(dp[index][weight_left] != -1){
//         return dp[index][weight_left];
//     }
    
//     int ans = 0;

//     ans = max(ans,knapsack(index-1,weight_left));

//     if(weight_left-weight[index]>=0){
//         ans = max(ans,knapsack(index-1,weight_left-weight[index])+value[index]);
//     }

//     return dp[index][weight_left] = ans;
// }


// int main(){

//     memset(dp,-1,sizeof(dp));
//     int n,k;
//     cin>>n>>k;

//     for(int i=0;i<n;i++){
//         cin>>weight[i]>>value[i];
//     }

//     cout<<knapsack(n-1,k);

//     return 0;
// }

// void merge(int arr[],int start,int mid,int end){

//     int size1 = mid-start+1;
//     int size2 = end-mid;

//     //temporary array

//     int temp1[size1];
//     int temp2[size2];

//     for(int i=0;i<size1;i++){
//         temp1[i] = arr[start+i];
//     }
//     for(int i=0;i<size2;i++){
//         temp2[i] = arr[mid+1+i];
//     }

//     int pointer = start, pointer1 = 0, pointer2= 0;

//     while(pointer1<size1 && pointer2<size2){
//         if(temp1[pointer1]<temp2[pointer2]){
//             arr[pointer] = temp1[pointer1];
//             pointer1++;pointer++;
//         }else{
//             arr[pointer] = temp2[pointer2];
//             pointer2++; pointer++;
//         }
//     }

//     while(pointer1<size1){
//         arr[pointer]<temp1[pointer1];
//         pointer1++;pointer++;
//     }
//     while(pointer2<size2){
//         arr[pointer] = temp2[pointer2];
//         pointer2;pointer;
//     }
// }


// void mergeSort(int arr[], int start, int end){
//     if(start<end){
//         int mid = (start+end)/2;

//         mergeSort(arr,start,mid);
//         mergeSort(arr,mid+1,end);

//         merge(arr,start,mid,end);

//     }
// }


// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     mergeSort(arr, 0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;
// }


// void mergeSort(int arr[],int l,int r){
//     if(l<r){
//         int mid = (l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);

//         mergee(arr,l,mid,r);
//     }
// }

// void mergee(int arr[],int l,int mid,int r){
//     int n1 = mid-l+1;
//     int n2 = r-mid;

//     int a[n1];
//     int b[n2];

//     for(int i=0;i<n1;i++){
//         a[i] = arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = arr[mid+1+i];
//     }

//     int i=0,j=0,k = l;

//     while(i<n1 && j<n2){
//         if(a[i] < b[j]){
//             arr[k] = a[i];
//             k++;i++;

//         }

//         else{
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }

//     while(i<n1){
//         arr[k] = a[i];
//         k++;i++;
//     }
//     while(j<n2){
//         arr[k] = b[j];
//         k++;j++;
//     }
// }


// int main(){
//     int arr[] ={5,4,6,2,1};
//     mergeSort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<"////////////"<<endl;
//     for(int i=0;i<n;i++){
//         if(i == 4){
//             cout<<"xxx"<<" ";;
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }








