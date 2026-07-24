#include<iostream>
#include<string>

//ÖãäÊ ãßÊÈÉ ÇáãÇË ..áÇä ÈÏí ÇÓÊÎÏã ÊÇÈÚ ÇáŞíãÉ ÇáãØáŞÉ
#include<math.h> 
using namespace std;

// ÚÑİÊ ãÊÛíÑíä ŞíãÊåä ËÇÊÈÉ  ...æÇÍÏ íÏá ÚÇáÇÓØÑ æÇáÊÇäí ÚÇáÇÚãÏÉ  ..
const int ROW=1000,COL=1000;

//ÚÑİÊ ÊÇÈÚ ÈíÃÏÎá ÇáÚäÇÕÑ ááÕİæİÉ ÇáËäÇÆíÉ
void Read(int Rooms[ROW][COL],int n,int m)
{
 for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
     {
      cout<<"arr["<<i<<"]"<<"["<<j<<"]=";
         cin>>Rooms[i][j];
     }
  }
}


// æåæä ÚÑİÊ ÊÇÈÚ ÈíØÈÚ ÇáãÕİæİÉ ÇáËäÇÆíÉ
void Print(int Rooms[ROW][COL],int n,int m)
{
 for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
     {
      cout<<Rooms[i][j]<<" ";
     }
     cout<<endl;
  }
}


/*åæä ÚÑİÊ ÊÇÈÚ :
åÇÏ ÇáÊÇÈÚ åæ Íá ÇáÓÄÇá 
ÈÚØí ÇáÛÑÖ æÇáãÕİæİÉ  
æåæ  ÈÓÇæí ãÕİæİÉ 
ÌÏíÏÉ  
ãßÇä ÇáÛÑÖ ÈÍØ ÕİÑ 
æãßÇä ßá ÚäÕÑ ÈÍØ ÚÏÏ ÇáÎØæÇÊ íáí ÈÊæÕáí ááÛÑÖ 
æÇáÇãÇßä íáí ãÇ ÑÍ ÊæÕáäí ááÛÑÖ ÈÍØ İíåÇ ÓÇáÈ æÇÍÏ 
*/
void SetNewElement(int Rooms[ROW][COL],int n,int m,int Target)
{
 int row_of_target;
 int col_of_target; 
 bool _;
 
 for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
     {
      if(Rooms[i][j]==Target) // ÇĞÇ áŞíÊ ÇáÛÑÖ ÎØ ãßÇäå ÕİÑ
      {
       Rooms[i][j]=0;   
       row_of_target=i;
       col_of_target=j;
       _=true; 
      
      
      }  
     }
     if(_) // İí ÍÇá áŞì ÇáÛÑÖ ÑÍ íØáÚ ÈÑÇ ÇáÍáŞÉ ÇáÎÇÑÌíÉ ..æãÇ ÑÍ íãßá
     {
      break;
     }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
     if(i>row_of_target||j>col_of_target)  
     
     {
      Rooms[i][j]=-1;
     }
     else
     {
      
      // åæä ÈÍÓÈ ÈõÚÏ ßá ãßÇä ÈÇáãÕİæİÉ Úä ÇáÛÑÖ
      Rooms[i][j]=abs(i-row_of_target)+abs(j-row_of_target);
      
     }
 
     
    }
  }
  
}

// æÈÇáãÇíä ÈÓ ÇÓÊÏÚÇÁ ÊæÇÈÚ 
int main()
{
 
 int n,m,Target;
 int Rooms[ROW][COL];
 cout<<"n=";
 cin>>n;
 cout<<"m=";
 cin>>m;
 cout<<"Targer=";
 cin>>Target;
 
 Read(Rooms,n,m);
 Print(Rooms,n,m);
 
 cout<<endl;
 

 SetNewElement(Rooms,n,m,Target);
 Print(Rooms,n,m);
 
}