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
TEST(EchoTest, gabriellejohnyahoo) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "gabriellejohn!yahoo";
	EXPECT_EQ("gabriellejohn!yahoo", echo(2,test_val));
}
TEST(EchoTest,916Area) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "916"; test_val[2] = "Area";
	EXPECT_EQ("916 Area",echo(3,test_val));
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
