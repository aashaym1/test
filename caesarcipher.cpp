#include<bits/stdc++.h>

using namespace std;
int main()
{
	string Text;
	cout<<"\nenter the string : ";
	cin>>Text;
	int shift;
	cout<<"\nenter the shift value (0-25) : ";
	cin>>shift;
	
	for(int i=0;i<Text.size();i++){
		if(Text[i]+shift>122)
			Text[i]=Text[i]+shift-26;
		else
			Text[i]=Text[i]+shift;
	}
	cout<<"\n ciphered text is : "<<Text;
	
	return 0;
}
