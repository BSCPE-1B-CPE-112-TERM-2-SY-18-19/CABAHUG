#include <iostream>


using namespace std;
	class rena{ 
		public:
			long wasteful_number(long num); 
			void exam(long num[1000],long size);
			void sorting_ascending(long num[1000],long size);
			long binary(long x);
			
			long a,num[100],size,num2; 
			long factor,digit,temp1,j,n,x,t,rem;
			long bin, pdtemp, rem2, base;
	};
int main() 
	{
		long a,inp[1000],size; 
		rena mando; 
		cout<<"INPUTS: ";  
		size=0; 
		for(a=0;;a++){ 
			cin>>inp[a];
			if(inp[a]==0){
				break; 
			}
			size++; 
		}
	cout<<"SIZE: "<<size<<endl;
	mando.exam(inp,size);
	
	cout<<"BINARY: ";
	for (a=0; a<size; a++)
		{
			mando.binary(inp[a]);
			
			
							}					
	}						
	
	long rena::wasteful_number(long num2) {	
	n=num2;
	x=n;
	digit=0;
	for (;n!=0;)
		{
		n=n/10;
		digit++;
		}
	t=0;
	j=2;
	factor=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem=j;
			t++;
			factor++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if(factor>digit){	
			return 1; 
		}else{
			return 0; 
		}
	}
	void rena::exam(long num[1000],long size){
		rena mando;
		if(mando.wasteful_number(size)==1){
			cout<<" - WASTEFUL NUMBER"<<endl;
			cout<<"Sorted: ";
			mando.sorting_ascending(num,size);
			cout<<endl;
		}
		else
		{
			cout<<" - NOT WASTEFUL NUMBER "<<endl;
			cout<<"Not Sorted: ";
			for(a=0;a<size;a++)
				{
					cout<<" "<<num[a];
				}
				cout<<endl;
		}
}

	void rena::sorting_ascending(long num[1000],long size)
		{
			long temp1;
			for(a=0;a<size;a++)
				{
					for(j=a+1;j<size;j++)
						{
							if(num[a]<num[j])
								{
									temp1=num[a];
									num[a]=num[j];
									num[j]=temp1;
								}
						}		
				cout<<" "<<num[a];
			}
		}
		
		long rena::binary(long x){
				pdtemp = x;
				bin=0;
				base = 1;
				cout<<endl;
				for (;pdtemp>0;){
					rem2=pdtemp%2;
					bin=bin+rem2*base;
					base = base*10;
					pdtemp=pdtemp/2;
				}
			cout<<bin<<endl;
}

		

