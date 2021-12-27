#include<stdio.h>
//#include<string.h>
//#include<Windows.h>//Sleep的预处理指令
//#include<stdlib.h>//system的预处理指令

int main()
{
	printf("%d\n",sizeof(char));

	//char arr1[] =  "My name is Lu" ;
	//char arr2[] =  "*************" ;//定义两个数组
	//int left = 0;
	//int right = strlen(arr1) - 1;//利用数组长度给right赋值
	//while (left <= right)//建立循环
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];//分别将arr1两边的内容赋值给arr2两边的内容
	//	printf("%s\n", arr2);//打印arr2渐变的内容
	//	Sleep(1000);//内容停止1s
	//	system("cls");//清空屏幕内容
	//	left++;
	//	right--;//意思表示arr2分别两边往中间输入arr1的内容
	//}
	//printf("My name is Lu\n");//最后再打印“My name is Lu”的内容

	//int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//建立数组
	//int k = 15;
	//int left = 0;
	//int right = (sizeof(arr1) / sizeof(arr1[0])) - 1;//计算数组的元素个数
	//int mid = 0;//定义需要使用的变量
	//while (left <= right)//建立循环寻找下标值
	//{
	//	mid=(left + right) / 2;
	//	if (k < arr1[mid])//第一种可能
	//	{
	//		right--;//若成立，右下表减1
	//	}
	//	else if (k>arr1[mid])//第二种可能
	//	{
	//		left++;//若成立，左下标减1
	//	}
	//	else if (k == arr1[mid])//第三种可能
	//	{
	//		printf("找到了，下标是；%d\n", mid);//找到后打印出下标
	//		break;//找到后跳出循环
	//	}
	//}
	//printf("没找到\n");//若所有假设都不存在，则打印出“没找到”
		

	//int sum = 0;
	//int i = 0;
	//int ret = 1;//定义三个值
	//for (i = 1; i <= 10; i++)
	//{
	//	ret = ret*i;//进行阶乘
	//	sum = sum + ret;//阶乘相加
	//}
	//printf("sum=%d\n", sum);//打印阶乘相加的结果

	//int i = 0;
	//int ret = 1;
	//int n = 0;//定义三个变量
	//printf("请输入n的值： ");
	//scanf_s("%d", &n);//存放一个值给n
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;//分别循环求出n的阶乘
	//}
	//printf("ret=%d\n", ret);打印所有阶乘后的结果
	return 0;
}