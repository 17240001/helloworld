#include <stdio.h>
#include <stdlib.h>
int main()
{
system("color F0");      //调整颜色  
	int i,j,temp,a[6]={7,1,2,5,9,3};
	printf("\n");
	system("pause") ;
	for(i=0;i<6;i++)   //第二次循环，把上述循环再重复n遍 
	{
	   for(j=0;j<5;j++)    //第一次循环，把数组中的数字作以下操作（就是说把数组中的每个数字交换一遍） 
	   {
	   	if(a[j]>a[j+1])   //比较两数字并交换顺序 
	   	 {
	   		temp=a[j];
	   		a[j]=a[j+1];
	   		a[j+1]=temp;
	   	 }
	   }
	}
	for (i = 0; i < 6; i++)  //设定：依次打印第1到第6个数字 ，因为for后面只有一行语句，所以不用加花括号 
	   {
	       printf("%d\n",a[i]);     //打印a1~a6 
	       system("pause");
	   }
	   getchar();
	return 0;
}
