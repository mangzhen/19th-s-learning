#include<stdio.h>

int main()
{
  //正向逆向排列
  for(int i = 1 ; i <= 5 ; i++)
  {
    printf("%d\n",i);
  }
  for(int a = 5 ; a >= 1 ; a--)
  {
    printf("%d\n",a);
  }
  //求和 需要一个变量来执行加的循环！
  int num = 0;//严谨点就得赋个0！否则，由于它内存是0，所以你只算是碰巧碰对的
  for(int b = 1 ; b <= 5 ; b++)
  {
    num = num + b;//别在这儿定义！否则由于变量的生命周期，在外面的printf就无法引用num了
    
    //printf("总和为%d\n",num); 这个留在这会输出5次num,1,3,6,10,15
  }
  printf("总值 = %d\n",num);//反正嘛，打印放外面

  return 0;
}
