#include<stdio.h>
//#include<string.h>
//#include<Windows.h>//Sleep��Ԥ����ָ��
//#include<stdlib.h>//system��Ԥ����ָ��

int main()
{
	printf("%d\n",sizeof(char));

	//char arr1[] =  "My name is Lu" ;
	//char arr2[] =  "*************" ;//������������
	//int left = 0;
	//int right = strlen(arr1) - 1;//�������鳤�ȸ�right��ֵ
	//while (left <= right)//����ѭ��
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];//�ֱ�arr1���ߵ����ݸ�ֵ��arr2���ߵ�����
	//	printf("%s\n", arr2);//��ӡarr2���������
	//	Sleep(1000);//����ֹͣ1s
	//	system("cls");//�����Ļ����
	//	left++;
	//	right--;//��˼��ʾarr2�ֱ��������м�����arr1������
	//}
	//printf("My name is Lu\n");//����ٴ�ӡ��My name is Lu��������

	//int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//��������
	//int k = 15;
	//int left = 0;
	//int right = (sizeof(arr1) / sizeof(arr1[0])) - 1;//���������Ԫ�ظ���
	//int mid = 0;//������Ҫʹ�õı���
	//while (left <= right)//����ѭ��Ѱ���±�ֵ
	//{
	//	mid=(left + right) / 2;
	//	if (k < arr1[mid])//��һ�ֿ���
	//	{
	//		right--;//�����������±��1
	//	}
	//	else if (k>arr1[mid])//�ڶ��ֿ���
	//	{
	//		left++;//�����������±��1
	//	}
	//	else if (k == arr1[mid])//�����ֿ���
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);//�ҵ����ӡ���±�
	//		break;//�ҵ�������ѭ��
	//	}
	//}
	//printf("û�ҵ�\n");//�����м��趼�����ڣ����ӡ����û�ҵ���
		

	//int sum = 0;
	//int i = 0;
	//int ret = 1;//��������ֵ
	//for (i = 1; i <= 10; i++)
	//{
	//	ret = ret*i;//���н׳�
	//	sum = sum + ret;//�׳����
	//}
	//printf("sum=%d\n", sum);//��ӡ�׳���ӵĽ��

	//int i = 0;
	//int ret = 1;
	//int n = 0;//������������
	//printf("������n��ֵ�� ");
	//scanf_s("%d", &n);//���һ��ֵ��n
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;//�ֱ�ѭ�����n�Ľ׳�
	//}
	//printf("ret=%d\n", ret);��ӡ���н׳˺�Ľ��
	return 0;
}