#include<iostream>
#include<stdio.h>
#include<string> 
using namespace std;
int main()
{
	char str[]="";
	int n0,n1,n2; //n0�P�_���t,n1�P�_�첾�h��,n2�P�_��l�^��r�� 
	int a,b,total,i = 0; //a��@�첾��r��,b��@�첾��W�X90���r��,total��J�h�֦r��,i�p��h�֦�� 
	cin >> str; //��J�r��(�̫�|�h�@��'/0') 
	
	while(i != -1) //-1��ĵ�ܭ� 
	{
		if(str[i] != '\0') //�]��str[]�̫�|�O'/0'�ҥH�@�B�@�B�p�⪽��p���'/0'�N���� 
		{
			i++;
			total = i;
		}
		else 
			i = -1;
	}
	total = total - 3; //��e���� ���t �첾 �r�� �R�� 
	n0 = str[0]; //���t 
	n1 = str[1]; //�첾�X�� 
	n2 = str[2]; //��l�r��
	
	if(n2 >= 65 && n2 <= 90) //�]��char(65~90)�bASCII�̭��N���OA~Z,�ҥH�P�_�O�_���r���D�r���N��Xinput error!
	{
		if(n0==43) //�P�_�O�_���� 
		{
			a = n2 + (n1 - 48);
			if(a >= 90) //�W�XASCII�̭���Z char(90)
			{	
				b = a - 26; //���C�@�� 
				cout << char(b);
			}	
			else
				cout << char(a);
		}
		else if(n0 == 45) //�P�_�O�_���t
		{
			a = n2 - (n1 - 48);
			if(a >= 90)
			{
				b = a - 26;
				cout << char(b);
			}
			else 
				cout << char(a);
		} 
		else 
			cout <<"input error!";
		cout << total << endl;
	} 
	else
		cout << "input error!" ;
} 
