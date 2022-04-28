/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test){
    ASSERT_TRUE(true);
}

TEST(PracticeTest, Des_ascendingorder){
	Practice testObject;
	int a = 1;
	int b = 2;
	int c = 3;
	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, Des_descendingorder){
	Practice testObject;
	int a = 3;
	int b = 2;
	int c = 1;
	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, Des_samenumber){
	Practice testObject;
	int a = 1;
	int b = 1;
	int c = 1;
	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 1);
	ASSERT_EQ(b, 1);
	ASSERT_EQ(c, 1);
}


TEST(PracticeTest, Pal_isPalindrome){
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome("123454321"));
}

TEST(PracticeTest, Pal_notPalindrome){
	Practice testObject;
	ASSERT_FALSE(testObject.isPalindrome("words"));
}

TEST(PracticeTest, Pal_emptyString) {
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome(""));
}

TEST(PracticeTest, Pal_oneLetter){
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome("c"));
}

TEST(PracticeTest, Rep_regular){
	Practice testObject;
	string word = "ddddddduel";
	ASSERT_EQ(testObject.count_starting_repeats(word), 7);
}

TEST(PracticeTest, Rep_caseChange){
	Practice testObject;
	string word = "UUUuWuOwO";
	ASSERT_EQ(testObject.count_starting_repeats(word), 3);
}

TEST(PracticeTest, Rep_largeWord){
	Practice testObject;
	string word = "sssssupercalifragalisticexpialadociousssss";
	ASSERT_EQ(testObject.count_starting_repeats(word), 5);
}
