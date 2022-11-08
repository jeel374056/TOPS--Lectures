#include <stdio.h>
int num2;
int wow()
{
    int num2 = 58;
    int num3 = 98;
    int add = num2 + num3;
    int mul = num2 * num3;
    return add;
}
// function definition with declaration
int main()
{
    int answer;
    answer = wow();
    printf("Addition is %d\n", answer);
    printf("num2=%d", num2);
    return 0;
} // function declaration
  /*
  types of functions
  1)inbuilt function or predefined functions
  2)user defined function
  
  types of udf
  function having no parameters no return value
  function having paramters but not return any value
  function without parametrs but having return value
  function having parameters and also have return value
  
  
  */