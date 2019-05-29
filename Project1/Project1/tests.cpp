#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
#include "map.h";


BOOST_AUTO_TEST_SUITE( test_suite1 )


 BOOST_AUTO_TEST_CASE( test_case1 )
{
	
BOOST_TEST(string_from_int(0)==string("ноль"));
BOOST_TEST(string_from_int(1)==string("один"));
BOOST_TEST(string_from_int(2)==string("два"));
BOOST_TEST(string_from_int(3)==string("три"));
BOOST_TEST(string_from_int(4)==string("четыре"));
BOOST_TEST(string_from_int(5)==string("пять"));
BOOST_TEST(string_from_int(6)==string("шесть"));
BOOST_TEST(string_from_int(7)==string("семь"));
BOOST_TEST(string_from_int(8)==string("восемь"));
BOOST_TEST(string_from_int(9)==string("девять"));
BOOST_TEST(string_from_int(10)==string("десять"));
BOOST_TEST(string_from_int(11)==string("одинадцать"));
BOOST_TEST(string_from_int(12)==string("двенадцать"));
BOOST_TEST(string_from_int(13)==string("тринадцать"));
BOOST_TEST(string_from_int(14)==string("четырнадцать"));
BOOST_TEST(string_from_int(15)==string("пятьнадцать"));
BOOST_TEST(string_from_int(16)==string("шестьнадцать"));
BOOST_TEST(string_from_int(17)==string("семьнадцать"));
BOOST_TEST(string_from_int(18)==string("восемьнадцать"));
BOOST_TEST(string_from_int(19)==string("девятьнадцать"));



}
BOOST_AUTO_TEST_CASE( test_case2 )
{
	
BOOST_TEST(number_less_100(1)==string("один"));
BOOST_TEST(number_less_100(6)==string("шесть"));
BOOST_TEST(number_less_100(46)==string("сорок шесть"));
BOOST_TEST(number_less_100(56)==string("пятьдесять шесть"));
BOOST_TEST(number_less_100(62)==string("шестьдесять два"));
BOOST_TEST(number_less_100(77)==string("семьдесять семь"));
BOOST_TEST(number_less_100(87)==string("восемьдесять семь"));
BOOST_TEST(number_less_100(91)==string("девяносто один"));
BOOST_TEST(number_less_100(92)==string("девяносто два"));
BOOST_TEST(number_less_100(19)==string("девятьнадцать"));
BOOST_TEST(number_less_100(20)==string("двадцать"));
BOOST_TEST(number_less_100(33)==string("тридцать три"));
BOOST_TEST(number_less_100(40)==string("сорок"));




}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	
BOOST_TEST(number_less_1000(92)==string("девяносто два"));
BOOST_TEST(number_less_1000(200)==string("двести"));
BOOST_TEST(number_less_1000(300)==string("триста"));
BOOST_TEST(number_less_1000(400)==string("четыреста"));
BOOST_TEST(number_less_1000(555)==string("пятьсот пятьдесять пять"));
BOOST_TEST(number_less_1000(643)==string("шестьсот сорок три"));
BOOST_TEST(number_less_1000(700)==string("семьсот"));
BOOST_TEST(number_less_1000(801)==string("восемьсот один"));
BOOST_TEST(number_less_1000(900)==string("девятьсот"));
BOOST_TEST(number_less_1000(100)==string("сто"));







}

BOOST_AUTO_TEST_CASE( test_case4 )
{
	BOOST_TEST(objects_less_100_to_string(41,"рубль", "рубля", "рублей") == string("сорок один рубль"));
	BOOST_TEST(objects_less_100_to_string(22,"рубль", "рубля", "рублей") == string("двадцать два рубля"));
	BOOST_TEST(objects_less_100_to_string(30,"рубль", "рубля", "рублей") == string("тридцать рублей"));
	BOOST_TEST(objects_less_100_to_string(1,"стул", "стула", "стулей") == string("один стул"));
	BOOST_TEST(objects_less_100_to_string(11,"рубль", "рубля", "рублей") == string("одинадцать рублей"));
	BOOST_TEST(objects_less_100_to_string(400,"копейка", "копейки", "копеек") == string("четыреста копеек"));
	BOOST_TEST(objects_less_100_to_string(4,"копейка", "копейки", "копеек") == string("четыре копейки"));
	BOOST_TEST(objects_less_100_to_string(10,"стул", "стула", "стулей") == string("десять стулей"));
	BOOST_TEST(objects_less_100_to_string(13,"доллар", "доллара", "долларов") == string("тринадцать долларов"));


		}
BOOST_AUTO_TEST_CASE( test_case5 )
{
	BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 3, "копейка", "копейки", "копеек") == string("двадцать пять рублей, три копейки"));
	BOOST_TEST(currency_to_string(111, "доллар", "доллара", "долларов", 1, "цент", "цента", "центов") == string("сто одинадцать долларов, один цент"));
	BOOST_TEST(currency_to_string(111, "rubl", "rublya", "rublei", 1, "kopeika", "kopeiki", "kopeek") == string("сто одинадцать rublei, один kopeika"));

	}


BOOST_AUTO_TEST_SUITE_END()
#endif