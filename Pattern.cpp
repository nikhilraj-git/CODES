// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       if(i==0 || i==(n-1)){
//         cout<<"*";
//       }
//       else if(j==0 || j==(n-1))
//       {
//         cout<<"*";
//       }
//       else cout<<" ";
//     }
//   cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int t =n-2;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       if(i==0 || i==(n-1))
//       {
//         cout<<"*";
//       }
//       else if(j==t && j!=0){
//         cout<<"*";
//         t--;
//       }
//       else cout<<" ";
//     }
//     cout<<endl;
//   }

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       if(i>=j){
//         cout<<"*";
//       }
//       else {
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;
// void printSpiral(int a[4][4],int s,int e,int m,int n)
// {
//   if(s>=m || e>=n)
//   {
//     return;
//   }
//   for(int i=e;i<n;i++)
//   {
//     cout<<a[s][i]<<" ";
//   }
//   for(int i=s+1;i<m;i++)
//   {
//     cout<<a[i][n-1]<<" ";
//   }
//   if((m-1)!=s)
//   {
//     for(int i=n-2;i>=e;i--)
//     {
//       cout<<a[m-1][i]<<" ";
//     }
//   }
//   if((n-1)!=e)
//   {
//     for(int i = m-2;i>s;i--)
//     {
//       cout<<a[i][e]<<" ";
//     }

//   }
//   printSpiral(a,s+1,e+1,m-1,n-1);

// }
// int main()
// {
  
//    int a[4][4] = { { 1, 2, 3, 4 },
//                     { 5, 6, 7, 8 },
//                     { 9, 10, 11, 12 },
//                     { 13, 14, 15, 16 } };

//   printSpiral(a,0,0,4,4);
// }

// 1  2  3  4
// 12 13 14 5
// 11 16 15 6
// 10  9  8 7
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int t=n-1;
//   for(int i=0;i<n;i++)
//   {
//     while(t!=0){
//       cout<<" ";
//     }
//     cout<<i;
//   }

// }

// 9/2/23
// #include<vector>
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   vector<pair<int,string>> vp(n);
//   for(int i=0;i<n;i++)
//   {
//     string s;
//     cin>>s;
//     vp[i]=make_pair(i,s);
//   }
//   for(int i=0;i<n;i++)
//   {
//     if((vp[i].second).length()>10)
//     {
//       int len=(vp[i].second).length();
//       cout<<(vp[i].second).at(0)<<len-2<<(vp[i].second).at(len-1)<<endl;
//     }
//     else {
//       cout<<(vp[i].second)<<endl;
//     }
//   }


// }

// #include<bits/stdc++.h>
// using namespace std;

// bool isOperator(char c){
//     if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int precedence(char c){
//     if(c=='^')return 3;
//     else if(c=='*' ||c=='/')return 2;
//     else if(c=='+' || c=='-')return 1;
//     else return -1; 
// }

// string infixToPostfix(stack<char>s,string infix){

//     string postfix="";
//     int l=postfix.length();

//     for(int i=0;i<l;i++){
//         if( ( infix[i]>='a' && infix[i]<='z' ) ||
//          ( infix[i]>='A' && infix[i]<='Z' ) ){
//             postfix+=infix[i];
//         }

//         else if(infix[i]=='('){
//             s.push(infix[i]);
//         }

//         else if(infix[i]==')'){
//             while( (!s.empty()) && (s.top()!='(' )   ){
//                 char temp=s.top();
//                 postfix+=temp;
//                 s.pop();
                
//             }
//             if(s.top()=='('){
//                 s.pop();
//             }
//         }
//         else if( isOperator(infix[i]) ){
//             if(s.empty()){
//                 s.push(infix[i]);
//             }
//             else{
//                 if( precedence(infix[i])>precedence(s.top()) ){
//                     s.push(infix[i]);
//                 }
//                 else if( (precedence(infix[i])==precedence(s.top())) ){
//                     s.push(infix[i]);
//                 }
//                 else{
//                     while( (!s.empty()) && ( precedence(infix[i])<=precedence(s.top()) ) ){
//                         char t=s.top();
//                         postfix+=t;
//                         s.pop();
//                     }
//                     s.push(infix[i]);
                    
//                 }
//             }
//         }


//     }

//     while(!s.empty()){
//         postfix+=s.top();
//         s.pop();
//     }

//     return postfix;
// }


// int main(){
//     string infix_exp,postfix_exp;
//     cout<<"Enter a infix express: "<<endl;
//     cin>>infix_exp;

//     stack<char>s;

//     cout<<"Infix express: "<< infix_exp<<endl;
//     postfix_exp=infixToPostfix(s,infix_exp);

//      cout<<"Postfix express is : "<< postfix_exp<<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// string convert(stack<char> st,string prefix)
// {
  
// }
// int main()
// {
//   string s,e;
//   cin>>s;
//   stack<char> st;
//   e=convert(st,s);
//   cout<<e; 
// }

#include <iostream>
#include <vector>

using namespace std;

int count_non_divisible(int N, vector<int>& A, int M) {
    int count = 0;

    for (int i = 1; i <= M; ++i) {
        bool divisible = false;
        for (int num : A) {
            if (i % num == 0) {
                divisible = true;
                break;
            }
        }
        if (!divisible) {
            count++;
        }
    }

    return count;
}

int main() {
    int N, M;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cin >> M;

    cout << count_non_divisible(N, A, M) << endl;

    return 0;
}