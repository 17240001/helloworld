#include <stdio.h>
#include <stdlib.h>
int main()
{
system("color F0");      //������ɫ  
	int i,j,temp,a[6]={7,1,2,5,9,3};
	printf("ð�ݿ�ʼ!\n");
	system("pause") ;
	for(i=0;i<6;i++)   //�ڶ���ѭ����������ѭ�����ظ�n�� 
	{
	   for(j=0;j<5;j++)    //��һ��ѭ�����������е����������²���������˵�������е�ÿ�����ֽ���һ�飩 
	   {
	   	if(a[j]>a[j+1])   //�Ƚ������ֲ�����˳�� 
	   	 {
	   		temp=a[j];
	   		a[j]=a[j+1];
	   		a[j+1]=temp;
	   	 }
	   }
	}
	for (i = 0; i < 6; i++)  //�趨�����δ�ӡ��1����6������ ����Ϊfor����ֻ��һ����䣬���Բ��üӻ����� 
	   {
	       printf("%d\n",a[i]);     //��ӡa1~a6 
	       system("pause");
	   }
	   getchar();
	return 0;
}
