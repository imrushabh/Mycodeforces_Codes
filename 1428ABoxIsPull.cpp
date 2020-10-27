#include<iostream>
int t,a1,a2,b1,b2;
int main(){
    for(std::cin>>t;t--;std::cout<<abs(a1-b1)+abs(a2-b2)+(a1!=b1&&a2!=b2)*2<<'\n')std::cin>>a1>>a2>>b1>>b2;
}
