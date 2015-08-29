#include <iostream>
#include <vector>
#include<string>
using namespace std;
struct card
{
	string suit,name;
};
int numReturn(string s)
{
	int i=0;
	for (int x=s.length()-1,y=1; x>=0; x--,y*=10)
		i+=((s[x]-'0')*y);
	return i;
}

int main()
{
	int cases, nShuff,x,y,z;
	string buff;
	cin>>cases;
	cin.ignore(1000,'\n');
	getline(cin,buff);
	for (x=0; x<cases; x++)
	{
		vector<card> deck;
		vector<card> pdeck;
		card c;
		deck.push_back(c);
		for (y=0; y<52; y++)
		{
			c.name="";
			c.suit="";
			if (y/13==0)
				c.suit="Clubs";
			if (y/13==1)
				c.suit="Diamonds";
			if (y/13==2)
				c.suit="Hearts";
			if (y/13==3)
				c.suit="Spades";
			if (y%13==12)
				c.name="Ace";
			else if (y%13==11)
				c.name="King";
			else if (y%13==10)
				c.name="Queen";
			else if (y%13==9)
				c.name="Jack";
			else if (y%13==8)
				c.name="10";
			else
				c.name+=((y%13)+'2');
			deck.push_back(c);
		}

		cin>>nShuff;
		vector<int> shuffle[101];
		for (y=1; y<=nShuff; y++)
		{
			shuffle[y].push_back(0);
			for (z=0; z<52; z++)
			{
				int i;
				cin>>i;
				shuffle[y].push_back(i);
			}
		}

		pdeck=deck;
		cin.ignore(1000,'\n');
		while (!cin.eof())
		{
			getline(cin,buff);
			if (buff=="")
				break;
			int i=numReturn(buff);
			for (y=1; y<=52; y++)
			{
				deck[y]=pdeck[shuffle[i][y]];
			}
			pdeck=deck;
		}
		for (y=1; y<=52; y++)
			cout<<deck[y].name<<" of "<<deck[y].suit<<endl;
		if (x!=cases-1)
			cout<<endl;
	}
	return 0;
} 