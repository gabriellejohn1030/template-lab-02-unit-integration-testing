#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}
TEST(EchoTest, MyNameIsGabby) {
	char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "my"; test_val[2] = "name"; test_val[3] = "is"; test_val[4] = "gabby";
	EXPECT_EQ("my name is gabby", echo(5,test_val));
}
TEST(EchoTest, Angelene) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "angelene";
	EXPECT_EQ("angelene", echo(2,test_val));
}
TEST(EchoTest,PeriodT) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "period"; test_val[2] = "t";
	EXPECT_EQ("period t",echo(3,test_val));
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
