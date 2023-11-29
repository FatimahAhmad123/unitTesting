#include <gtest/gtest.h>
#include "../include/student.h"
#include "../include/whitelist.hpp"

TEST(StudentTest, TestRollNo)
{
	student s;
	s.set_roll_no("A002");
	EXPECT_EQ("A003", s.get_roll_no()); // intentionally failing
}

TEST(StudentTest, TestAge)
{
	student s;
	s.set_age(22);
	EXPECT_EQ(25, s.get_age()); // intentionally failing
}

TEST(WhitelistTest, TestAddToWhitelist)
{
	whitelist w;
	student s;
	s.set_roll_no("A002");
	s.set_age(22);

	w.addToWhitelist("Bob", s);

	EXPECT_TRUE(w.isStudentPresent("Alice")); // intentionally failing
}

TEST(WhitelistTest, TestGetStudentData)
{
	whitelist w;
	student s;
	s.set_roll_no("A002");
	s.set_age(22);

	w.addToWhitelist("Bob", s);

	student *ptr = w.getStudentData("Bob");

	EXPECT_EQ("A012", ptr->get_roll_no()); // intentionally failing
	EXPECT_EQ(27, ptr->get_age());		   // intentionally failing
}
