#include<iostream>
#include<string>
using namespace std;
//Õ·Ì
struct stPiggyBankContenet
{
	int Dollor,Dime,P,N,Q;
};

stPiggyBankContenet Read()
{
	stPiggyBankContenet n;

	cout<<"enter dollar "; 
	cin>>n.Dollor;
	cout<<endl;

	cout<<"enter Q "; 
	cin>>n.Q;
	cout<<endl;

	cout<<"enter P "; 
	cin>>n.P;
	cout<<endl;

	cout<<"enter Dime "; 
	cin>>n.Dime;
	cout<<endl;

	cout<<"enter nickel "; 
	cin>>n.N;
	cout<<endl;
	return n;
}


float calculaTotataP(stPiggyBankContenet n)
{
	int TotalP=n.Dollor*100+n.P+n.Q*25+n.Dime*10+n.N*5;
   return (float)TotalP;
}

int main()
{
	float TotalP=calculaTotataP(Read());
	cout<<"the total p="<<TotalP<<endl;
	cout<<"the total Dollor="<<TotalP/100<<endl;
}



/*   
«·„—… «· «· … »” «·„«Ì‰ ›—ﬁ ’€Ì—////


#include<iostream>
#include<string>
using namespace std;
 struct stBiggybank
 {
	 float P;
	 float d;
	 float D;
	 float Q;
	 float N;
 };

 stBiggybank ReadBiggybank()
 {
	 stBiggybank  info;
	 cout<<"enter the pinnys ";
	 cin>>info.P;

	 cout<<"enter the quarter ";
	 cin>>info.Q;

	 cout<<"enter the dollats "; 
	 cin>>info.d;

	 cout<<"etner the Dimmis ";
	 cin>>info.d;

	 cout<<"enter the nikkel ";
	 cin>>info.N;
	 return info;
 }

 float calculateTotalPinnys(stBiggybank info)
 {
	 float TotalPinnys=info.d*100 + info.P + info.d*10 + info.N*5 + info.Q*25;
	 return TotalPinnys;
 }


int main()
{
	

//	«·„«Ì‰  »⁄Ì
//	stBiggybank info;
//	ReadBiggybank(info);
//  float totaPinnys=calculateTotalPinnys(info);
	


	float totaPinnys=calculateTotalPinnys(ReadBiggybank());
	cout<<"the total pinnys is "<<	totaPinnys<<endl;
	cout<<"the total dollar is "<<	totaPinnys/100;


}




*/