#include<bits/stdc++.h>
#include<iostream>
 long long int N=1000001;
 long long int arr[1000001];
 void sieve()
 {
     arr[0]=arr[1]=0;
     for(int i=2;i<=N;i++)
     {
         arr[i]=1;
     }
     for(int i=2;i*i<N;i++)
     {
        for(int j=i*i;j<=N;j+=i)
        {
            arr[j]=0;
        }
     }
 }

 int main()
 {
     sieve();
     int x;
     std::cin>>x;
     if(arr[x]==1)
     {
         std::cout<<"prime";
     }
     else
     {
         std::cout<<"not prime";
     }
     return 0;
 }
