
#include<Stdio.h>
int main()
{
//	//�������鴢������ 
//	int arr[]={3,5,4,2,1};
//	//�������鳤�� 
//	int len a sizeof(arr)/sizeof(int); 
//	//����ð�����򣬰������е����ݰ����������� 
//	//��һ�� 
//	for(int i=0;i<len;i++)
//	{
//		//���ڵ�Ԫ�������Ƚϣ�С���ں��棬�����ǰ��
//		if(arr[i],arr[i+1])
//		{
//			int tmp=arr[i];
//			arr[i]=arr[i+1];
//			arr[i+1]=tmp;
//			}	
//	 } 
//	//����
//	for(int i=0;i<len;i++)
//	{
//		printf("%d")
//		 }
//	char str[100];
//	printf("��������������\n");
//	scanf("%s",&str);
//	printf("�ҵ������ǣ�%s",str);
//	int a;
//	printf("��������������\n");
//	scanf("%d",&a);
//	printf("���������ǣ�%d��",a);
//	return 0;
//	int num1,num2;
//	printf("���������������ÿո������");
//	scanf("%d %d",&num1,&num2);
//	int num3;
//	num3=num1+num2;
//	printf("%d+%d=%d",num1,num2,num3);
//	double length,width;
//	printf("�����볤���εĳ���\n");
//	scanf("%lf %lf",&length,&width);
//	double A=length*width;
//	printf("A������Ϊ��%.2lf",A);
//	int a;
//	printf("������һ����λ��:\n");
//	scanf("%d",&a);
//	printf("��λ��Ϊ��%d",a%10);
//	printf("ʮλ��Ϊ��%d",a/10%10);
//	printf("��λ��Ϊ��%d",a/100);
//	int boold=100;
//	printf("�����ܵ�������Ѫ����%d\n",boold-80);
//	printf("����ͨ�������ܻظ�Ѫ����%d\n",boold-80+60);
//	int rouA,numberA,rouB,numberB;
//	printf("���������ŵ�ӰƱ�����\n"); 
//	scanf("%d %d %d %d",&rouA,&numberA,&rouB,&numberB);
//	if(rouA==rouB&&numberA-numberB==1||numberA-numberB==-1)
//	printf("�ɹ�\n");
//	else
//	printf("ʧ��\n");
//	int corse=88;
//	if(corse>=95&&corse<=100)
//	{
//		printf("�������г�һ��\n");
//	}
//	else if(corse>=90&&corse<=94)
//	{
//		printf("��������԰��һ��\n");
//	}
//	else if(corse>=80&&corse<=89)
//	{
//		printf("�������ν��һ��\n");
//	}
//	else
//	{
//		printf("��һ��");
//	}
//	int week;
//	scanf("%d",&week);
//	switch(week)
//	{
//		case 1:
//			printf("��һ");
//			break;
//		case 2:
//			printf("�ܶ�"); 
//			break;
//		case 3:
//			printf("����");
//			break;
//		case 4:
//			printf("����");
//			break;
//		case 5:
//			printf("����");
//			break;
//		case 6:
//			printf("����");
//			break;
//		case 7:
//			printf("����");
//			break;
//		default:
//			printf("û���������");
//			break;
//	int month;
//	scanf("%d",&month);
//	switch(month)
//	{
//		case 3:
//		case 4:
//		case 5: 
//		printf("����");
//		break; 
//		case 6:
//		printf("�ļ�");
//		case 7:
//		printf("�ļ�");
//		case 8:
//		printf("�ļ�");
//		break; 
//		case 9:
//		printf("�＾");
//		case 10:
//		printf("�＾");
//		case 11:
//		printf("�＾");
//		break;
//		case 12:
//		printf("����");
//		case 1:
//		printf("����");
//		case 2:
//		printf("����");
//		break;
//	}
//	int number;
//	scanf("%d",&number);
//	switch(number)
//	{
//		case 1:
//			printf("��Ʊ��ѯ\n");
//			break;
//		case 2:
//			printf("��ƱԤ��\n");
//			break;
//		case 3:
//			printf("��Ʊ��ǩ\n");
//			break;
//		case 4:
//			printf("�˳�����\n");
//			break;
//		case 5:
//		case 6:
//		case 7:
//			printf("�˳�����\n");
//			break; 
//		default:
//			printf("�˳�����\n");
//	int sum=0,i;
//	for(i=1;i<=10;i++)
//	{
//		sum=i+sum; 
//	 }
//	printf("�ܺ�Ϊ��%d",sum); 
//	if(1)
//	{
//		int a=10;
//		printf("%d",a);
//	}
//	int a=20;
//	printf("%d",a);
//	int i,sum=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2==0)
//		{
//			sum=sum+i;
//		}
//	}	
//	printf("%d",sum);
	int num1,num2,i;
	printf("��������������\n");
	scanf("%d %d",&num1,&num2);
	int min=num1<num2?num1:num2;
	int max=num1>num2?num1:num2;
	int count=0;
	for(i=min;i<=max;i++)
	{
		if(i%6==0&&i%8==0)
		count++;
	 } 
	 printf("�������Χ���ܱ�6��8ͬʱ������������%d��",count); 
	return 0;
}
	
