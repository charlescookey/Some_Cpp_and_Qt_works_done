#include<bits/stdc++.h>

using namespace std;

class Box{
    int l,b,h;  
    public:
    Box(){
        l=b=h=0;
    };
    Box(int fl,int fb,int fh){
        l =fl;
        b =fb;
        h =fh;
    };
    Box(Box *A){
        l = (*A).l;
        h = (*A).h;
        b = (*A).b;
    };
    int getLength(){return l;};
    int getBreadth (){return b;};
    int getHeight (){return h;}; 
    long CalculateVolume(){return (long)l*h*b;}; 

   

    
    bool operator<(Box& D){
        if(l<D.l){return true;}
        if((l==D.l)&&(b<D.b)){return true;}
        if((l==D.l)&&(b==D.b)&&(h<D.h)){return true;};
        return false;
    };

   
    friend ostream &operator<<(ostream& output, Box& B){
        output <<B.l<<' '<<B.b<<' '<<B.h;
        return output;
    };
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
