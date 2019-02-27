
#include <string>

using namespace std;
string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
	answer="ноль";
	break;
	case 1:
		answer="один";
	break;
	case 2:
	answer="два";
	break;
	case 3:
		answer="три";
	break;
	case 4:
	answer="четыре";
	break;
	case 5:
		answer="пять";
	break;
	case 6:
	answer="шесть";
	break;
	case 7:
		answer="семь";
	break;
	case 8:
	answer="восемь";
	break;
	case 9:
		answer="девять";
	break;
	case 10:
	answer="десять";
	break;
	case 11:
		answer="одинадцать";
	break;
	case 12:
	answer="двенадцать";
	break;
	case 13:
		answer="тринадцать";
	break;
	case 14:
	answer="четырнадцать";
	break;
	case 15:
		answer="пятьнадцать";
	break;
	case 16:
	answer="шестьнадцать";
	break;
	case 17:
		answer="семьнадцать";
	break;
	case 18:
	answer="восемьнадцать";
	break;
	case 19:
		answer="девятьнадцать";
	break;
	}
	return answer;



}
string  number_less_100(int n)
	{
	string an;
	if(n/10==2){
		int a=n%10;
		if(a==0) an = "двадцать";
		else an="двадцать " + string_from_int(a);
	
	}
	else if(n/10==3){
		int a=n%10;
		if(a==0) an = "тридцать";
		else an="тридцать " + string_from_int(a);
	
	}
	else if(n/10==4){
		int a=n%10;
		if(a==0) an = "сорок";
		else an="сорок " + string_from_int(a);
	
	}
	else if(n/10==5){
		int a=n%10;
		if(a==0) an = "пятьдесять";
		else an="пятьдесять " + string_from_int(a);

	}
	else if(n/10==6){
		int a=n%10;
		if(a==0) an = "шестьдесять";
		else an="шестьдесять " + string_from_int(a);

	}
	else if(n/10==7){
		int a=n%10;
		if(a==0) an = "семьдесять";
		else an="семьдесять " + string_from_int(a);

	}
	else if(n/10==8){
		int a=n%10;
		if(a==0) an = "восемьдесять";
		else an="восемьдесять " + string_from_int(a);

	}
	else if(n/10==9){
		int a=n%10;
		if(a==0) an = "девяносто";
		else an="девяносто " + string_from_int(a);

	}

		
		return an;
}
string  number_less_1000(int num)
	{
	string ans;
	if(num/100==1){
		int a=num%100;
		if(a==0) ans = "сто";
		else ans="сто " + string_from_int(a);
			}
	else if(num/100==2){
		int a=num%100;
		if(a==0) ans = "двести";
		else ans="двести " + string_from_int(a);

	}
	else if(num/100==3){
		int a=num%100;
		if(a==0) ans = "триста";
		else ans="триста " + string_from_int(a);

	}
	else if(num/100==4){
		int a=num%100;
		if(a==0) ans = "четыреста";
		else ans="четыреста " + string_from_int(a);

	}
	else if(num/100==5){
		int a=num%100;
		if(a==0) ans = "пятьсот";
		else ans="пятьсот " + string_from_int(a);

	}
	else if(num/100==6){
		int a=num%100;
		if(a==0) ans = "шестьсот";
		else ans="шестьсот " + string_from_int(a);

	}
	else if(num/100==7){
		int a=num%100;
		if(a==0) ans = "семьсот";
		else ans="семьсот " + string_from_int(a);

	}
	else if(num/100==8){
		int a=num%100;
		if(a==0) ans = "восемьсот";
		else ans="восемьсот " + string_from_int(a);

	}
	else if(num/100==9){
		int a=num%100;
		if(a==0) ans = "девятьсот";
		else ans="девятьсот " + string_from_int(a);

	}
	else if(num/100==10){
		int a=num%100;
		if(a==0) ans = "тысяча";
		else ans="тысяча " + string_from_int(a);

	}


	return ans;
}