#include <string>

using namespace std;
string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
	answer="����";
	break;
	case 1:
		answer="����";
	break;
	case 2:
	answer="���";
	break;
	case 3:
		answer="���";
	break;
	case 4:
	answer="������";
	break;
	case 5:
		answer="����";
	break;
	case 6:
	answer="�����";
	break;
	case 7:
		answer="����";
	break;
	case 8:
	answer="������";
	break;
	case 9:
		answer="������";
	break;
	case 10:
	answer="������";
	break;
	case 11:
		answer="����������";
	break;
	case 12:
	answer="����������";
	break;
	case 13:
		answer="����������";
	break;
	case 14:
	answer="������������";
	break;
	case 15:
		answer="�����������";
	break;
	case 16:
	answer="������������";
	break;
	case 17:
		answer="�����������";
	break;
	case 18:
	answer="�������������";
	break;
	case 19:
		answer="�������������";
	break;
	}
	return answer;



}
string  number_less_100(int number)
	{
	string an;
	if(number<20)
	{
		an = string_from_int(number);
	}
	if(number/10==2){
		int a=number%10;
		if(a==0) an = "��������";
		else an="�������� " + string_from_int(a);
	
	}
	else if(number/10==3){
		int a=number%10;
		if(a==0) an = "��������";
		else an="�������� " + string_from_int(a);
	
	}
	else if(number/10==4){
		int a=number%10;
		if(a==0) an = "�����";
		else an="����� " + string_from_int(a);
	
	}
	else if(number/10==5){
		int a=number%10;
		if(a==0) an = "����������";
		else an="���������� " + string_from_int(a);

	}
	else if(number/10==6){
		int a=number%10;
		if(a==0) an = "�����������";
		else an="����������� " + string_from_int(a);

	}
	else if(number/10==7){
		int a=number%10;
		if(a==0) an = "����������";
		else an="���������� " + string_from_int(a);

	}
	else if(number/10==8){
		int a=number%10;
		if(a==0) an = "������������";
		else an="������������ " + string_from_int(a);

	}
	else if(number/10==9){
		int a=number%10;
		if(a==0) an = "���������";
		else an="��������� " + string_from_int(a);

	}

		
		return an;
}
string  number_less_1000(int number)
	{
	string ans;
		if (number<100)
	{ans =  number_less_100(number);}
	if(number/100==1){
		int a=number%100;
		if(a==0) ans = "���";
		else ans="��� " + number_less_100(a);
			}
	else if(number/100==2){
		int a=number%100;
		if(a==0) ans = "������";
		else ans="������ " + number_less_100(a);

	}
	else if(number/100==3){
		int a=number%100;
		if(a==0) ans = "������";
		else ans="������ " + number_less_100(a);

	}
	else if(number/100==4){
		int a=number%100;
		if(a==0) ans = "���������";
		else ans="��������� " + number_less_100(a);

	}
	else if(number/100==5){
		int a=number%100;
		if(a==0) ans = "�������";
		else ans="������� " + number_less_100(a);

	}
	else if(number/100==6){
		int a=number%100;
		if(a==0) ans = "��������";
		else ans="�������� " + number_less_100(a);

	}
	else if(number/100==7){
		int a=number%100;
		if(a==0) ans = "�������";
		else ans="������� " + number_less_100(a);

	}
	else if(number/100==8){
		int a=number%100;
		if(a==0) ans = "���������";
		else ans="��������� " + number_less_100(a);

	}
	else if(number/100==9){
		int a=number%100;
		if(a==0) ans = "���������";
		else ans="��������� " + number_less_100(a);

	}
	else if(number/100==10){
		int a=number%100;
		if(a==0) ans = "������";
		else ans="������ " + number_less_100(a);

	}
	
	return ans;
	
	}
string objects_less_100_to_string(int number, string s1,string s2,string s3)
{
	string answer;
	if (number%100==11||number%100==12||number%100==13||number%100==14) answer = number_less_1000(number)+" "+s3;
	else
	if (number%10==1) 
	answer = number_less_1000(number)+" "+s1;
	else
	if (number%10>1&&number%10<5) 
	answer = number_less_1000(number)+" "+s2;
	else
	answer = number_less_1000(number)+" "+s3;
	return answer;
}

string currency_to_string(int integer, string si1, string si2, string si3, int decimal, string sd1, string sd2, string sd3)
{
	string answer;
	int a=integer%100;
	int b=decimal%100;
	if (a==11||a==12||a==13||a==14)
		answer=number_less_1000(integer)+" "+si3;
	else if (integer%10==1) answer = number_less_1000(integer)+" "+si1;
	else if (integer%10>1&&integer%10<5) answer=number_less_1000(integer)+" "+si2;
	else answer = number_less_1000(integer)+" "+si3;
	if (decimal==0) answer=answer;
	else if (b==11||b==12||b==13||b==14) answer=answer+", "+number_less_1000(decimal)+" "+sd3;
	else if (decimal%10==1) answer=answer+", "+number_less_1000(decimal)+" "+sd1;
	else if (decimal%10>1&&decimal%10<5) answer=answer+", "+number_less_1000(decimal)+" "+sd2;
	else answer=answer+", "+number_less_1000(decimal)+", "+sd3;
    return answer;
}