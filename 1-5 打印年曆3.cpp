// 2月28天 7月31天 8月31天
#include<iostream>
using namespace std;

int main(){
	int y,m,d,x; //x控制一個月幾天
	y=2016; m=1; d=1;
	
	for(int j=1; j<13 ; j++)
	{
	 if(m%2==1) // 奇數月
	  x=32;
	  
	 else if(m==2) //2月28天
	  x=29;
	  
	 else if(m==8) // 8月31天
	  x=32;
	  
	 else  //偶數月
	  x=31;
	  
	 for (int i=1; i<x; i++)
	 {
		
	   cout<<y<<"/"<<m<<"/"<<d<<endl;
	   d=d+1; 
	   
     }
	 
	 m=m+1; //月+1
	 d=1;       //把D歸零，不然會一直累加
    }

	return 0;
}




