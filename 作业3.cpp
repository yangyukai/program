#include<iostream.h>
void main()
{
	int i;
	cout<<"����������"<<endl;
	cin>>i;
	if(i>=100)
		if(i>=1000)
			cout<<"1000����"<<endl;
		else
			cout<<"100-999"<<endl;
	else
		if(i>=10)
			cout<<"10-99"<<endl;
		else
			cout<<"С��10"<<endl;
}
