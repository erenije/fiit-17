
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
string  number_less_100(int n)
	{
	string an;
	if(n/10==2){
		int a=n%10;
		if(a==0) an = "��������";
		else an="�������� " + string_from_int(a);
	
	}
	else if(n/10==3){
		int a=n%10;
		if(a==0) an = "��������";
		else an="�������� " + string_from_int(a);
	
	}
	else if(n/10==4){
		int a=n%10;
		if(a==0) an = "�����";
		else an="����� " + string_from_int(a);
	
	}
	else if(n/10==5){
		int a=n%10;
		if(a==0) an = "����������";
		else an="���������� " + string_from_int(a);

	}
	else if(n/10==6){
		int a=n%10;
		if(a==0) an = "�����������";
		else an="����������� " + string_from_int(a);

	}
	else if(n/10==7){
		int a=n%10;
		if(a==0) an = "����������";
		else an="���������� " + string_from_int(a);

	}
	else if(n/10==8){
		int a=n%10;
		if(a==0) an = "������������";
		else an="������������ " + string_from_int(a);

	}
	else if(n/10==9){
		int a=n%10;
		if(a==0) an = "���������";
		else an="��������� " + string_from_int(a);

	}

		
		return an;
}
string  number_less_1000(int num)
	{
	string ans;
	if(num/100==1){
		int a=num%100;
		if(a==0) ans = "���";
		else ans="��� " + string_from_int(a);
			}
	else if(num/100==2){
		int a=num%100;
		if(a==0) ans = "������";
		else ans="������ " + string_from_int(a);

	}
	else if(num/100==3){
		int a=num%100;
		if(a==0) ans = "������";
		else ans="������ " + string_from_int(a);

	}
	else if(num/100==4){
		int a=num%100;
		if(a==0) ans = "���������";
		else ans="��������� " + string_from_int(a);

	}
	else if(num/100==5){
		int a=num%100;
		if(a==0) ans = "�������";
		else ans="������� " + string_from_int(a);

	}
	else if(num/100==6){
		int a=num%100;
		if(a==0) ans = "��������";
		else ans="�������� " + string_from_int(a);

	}
	else if(num/100==7){
		int a=num%100;
		if(a==0) ans = "�������";
		else ans="������� " + string_from_int(a);

	}
	else if(num/100==8){
		int a=num%100;
		if(a==0) ans = "���������";
		else ans="��������� " + string_from_int(a);

	}
	else if(num/100==9){
		int a=num%100;
		if(a==0) ans = "���������";
		else ans="��������� " + string_from_int(a);

	}
	else if(num/100==10){
		int a=num%100;
		if(a==0) ans = "������";
		else ans="������ " + string_from_int(a);

	}


	return ans;
}