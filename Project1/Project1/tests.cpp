#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"


BOOST_AUTO_TEST_SUITE( test_suite1 )


// BOOST_AUTO_TEST_CASE( test_case1 )
//{
//	
////BOOST_TEST(string_from_int(0)==string("����"));
////BOOST_TEST(string_from_int(1)==string("����"));
////BOOST_TEST(string_from_int(2)==string("���"));
////BOOST_TEST(string_from_int(3)==string("���"));
////BOOST_TEST(string_from_int(4)==string("������"));
////BOOST_TEST(string_from_int(5)==string("����"));
////BOOST_TEST(string_from_int(6)==string("�����"));
////BOOST_TEST(string_from_int(7)==string("����"));
////BOOST_TEST(string_from_int(8)==string("������"));
////BOOST_TEST(string_from_int(9)==string("������"));
////BOOST_TEST(string_from_int(10)==string("������"));
////BOOST_TEST(string_from_int(11)==string("����������"));
////BOOST_TEST(string_from_int(12)==string("����������"));
////BOOST_TEST(string_from_int(13)==string("����������"));
////BOOST_TEST(string_from_int(14)==string("������������"));
////BOOST_TEST(string_from_int(15)==string("�����������"));
////BOOST_TEST(string_from_int(16)==string("������������"));
////BOOST_TEST(string_from_int(17)==string("�����������"));
////BOOST_TEST(string_from_int(18)==string("�������������"));
////BOOST_TEST(string_from_int(19)==string("�������������"));
//

//}
//BOOST_AUTO_TEST_CASE( test_case2 )
//{
//	
//BOOST_TEST(number_less_100(20)==string("��������"));
//BOOST_TEST(number_less_100(35)==string("�������� ����"));
//BOOST_TEST(number_less_100(46)==string("����� �����"));
//BOOST_TEST(number_less_100(56)==string("���������� �����"));
//BOOST_TEST(number_less_100(62)==string("����������� ���"));
//BOOST_TEST(number_less_100(77)==string("���������� ����"));
//BOOST_TEST(number_less_100(87)==string("������������ ����"));
//BOOST_TEST(number_less_100(91)==string("��������� ����"));
//
//
//}
BOOST_AUTO_TEST_CASE( test_case3 )
{
	
BOOST_TEST(number_less_1000(100)==string("���"));
BOOST_TEST(number_less_1000(200)==string("������"));
BOOST_TEST(number_less_1000(300)==string("������"));
BOOST_TEST(number_less_1000(400)==string("���������"));
BOOST_TEST(number_less_1000(505)==string("������� ����"));
BOOST_TEST(number_less_1000(600)==string("��������"));
BOOST_TEST(number_less_1000(700)==string("�������"));
BOOST_TEST(number_less_1000(800)==string("���������"));
BOOST_TEST(number_less_1000(900)==string("���������"));
BOOST_TEST(number_less_1000(1000)==string("������"));


}


BOOST_AUTO_TEST_SUITE_END()
#endif