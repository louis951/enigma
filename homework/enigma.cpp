#include<iostream>
#include<stdio.h>
#include<string> 
using namespace std;
int main()
{
	char str[]="";
	int n0,n1,n2; //n0判斷正負,n1判斷位移多少,n2判斷初始英文字母 
	int a,b,total,i = 0; //a當作位移後字母,b當作位移後超出90的字母,total輸入多少字串,i計算多少位數 
	cin >> str; //輸入字串(最後會多一個'/0') 
	
	while(i != -1) //-1為警示值 
	{
		if(str[i] != '\0') //因為str[]最後會是'/0'所以一步一步計算直到計算到'/0'就停止 
		{
			i++;
			total = i;
		}
		else 
			i = -1;
	}
	total = total - 3; //把前面的 正負 位移 字母 刪除 
	n0 = str[0]; //正負 
	n1 = str[1]; //位移幾位 
	n2 = str[2]; //初始字母
	
	if(n2 >= 65 && n2 <= 90) //因為char(65~90)在ASCII裡面代表的是A~Z,所以判斷是否為字母非字母就輸出input error!
	{
		if(n0==43) //判斷是否為正 
		{
			a = n2 + (n1 - 48);
			if(a >= 90) //超出ASCII裡面的Z char(90)
			{	
				b = a - 26; //降低一輪 
				cout << char(b);
			}	
			else
				cout << char(a);
		}
		else if(n0 == 45) //判斷是否為負
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
