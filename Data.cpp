#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int mny[]={1,4,10,60,250,800};
int expr[]={1,2,5,13,47,123};
int am[]={2,7,20,100,400,1000};
int enoexp[]={0,25,90,750,2400,7500,2147483647};
int costjv[]={40,150,500,1600,10000,40000}; 
string s[]={"����","Ұ����","������","���","��ǹ��","̹��"};
pair<int,int> take[6][6]={{{1,1},{1,3},{1,10},{1,40},{1,1000},{1,600}},{{3,1},{1,1},{4,11},{1,20},{1,100},{1,258}},{{10,1},{11,4},{1,1},{3,4},{2,53},{1,124}},{{40,1},{20,1},{4,3},{1,1},{1,23},{1,59}},{{1000,1},{80,1},{53,2},{23,1},{1,1},{1,5}},{{600,1},{258,1},{124,1},{59,1},{5,1},{1,1}}};
int mmax[6][6]={{15,0,0,0,0,0},{20,12,0,0,0,0},{30,20,12,0,0,0},{70,50,30,12,0,0},{200,120,90,52,31,0},{1000,600,333,200,130,78}};
int mmin[6][6]={{10,0,0,0,0,0},{15,8,0,0,0,0},{20,15,10,0,0,0},{60,35,20,10,0,0},{150,100,60,30,20,0},{580,350,120,70,40,20}};
inline void __pr(string s){for(int i=0;i<s.size();++i) cout<<s[i],Sleep(7);}
int openmh=0;
int opencp;
int kswj;