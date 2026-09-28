#include<stdio.h>

int main()
{
  //switch语句的细节：
  /*
  表达式:计算结果只能为整数或字符！
  case:值也只能是字符或整数的整数常量表达式，非变量，且不能重复  比如可写成case 'A'，即为case 65
  break为中断，结束switch语句
  default:备胎
  */
  int num = 0;
  printf("请输入整数\n");
  scanf("%d",&num);
  switch(num)
  {
    case 1://很简单，这里不能写成case num
      printf("是1哦\n");
      break;
    case 2:
      printf("是2！\n");
      break;
    default:
      printf("よくわからないけど、まあいいが　\n");
      break;
    /*
      有时嘛，这个default可省略，意为如输入不符条件的内容，这个switch就直接不执行了
      switch这玩意有个短处，就是不能写入范围
    */





  }









  return 0;
}
