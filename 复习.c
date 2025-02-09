
#include<Stdio.h>
int main()
{
//	//定义数组储存数据 
//	int arr[]={3,5,4,2,1};
//	//计算数组长度 
//	int len a sizeof(arr)/sizeof(int); 
//	//利用冒泡排序，把数组中的数据按照升序排列 
//	//第一轮 
//	for(int i=0;i<len;i++)
//	{
//		//相邻的元素两两比较，小的在后面，大的在前面
//		if(arr[i],arr[i+1])
//		{
//			int tmp=arr[i];
//			arr[i]=arr[i+1];
//			arr[i+1]=tmp;
//			}	
//	 } 
//	//遍历
//	for(int i=0;i<len;i++)
//	{
//		printf("%d")
//		 }
//	char str[100];
//	printf("请输入您的名字\n");
//	scanf("%s",&str);
//	printf("我的名字是：%s",str);
//	int a;
//	printf("请输入您的年龄\n");
//	scanf("%d",&a);
//	printf("您的年龄是：%d岁",a);
//	return 0;
//	int num1,num2;
//	printf("请输入两个数（用空格隔开）");
//	scanf("%d %d",&num1,&num2);
//	int num3;
//	num3=num1+num2;
//	printf("%d+%d=%d",num1,num2,num3);
//	double length,width;
//	printf("请输入长方形的长宽\n");
//	scanf("%lf %lf",&length,&width);
//	double A=length*width;
//	printf("A面的面积为：%.2lf",A);
//	int a;
//	printf("请输入一个三位数:\n");
//	scanf("%d",&a);
//	printf("个位数为：%d",a%10);
//	printf("十位数为：%d",a/10%10);
//	printf("百位数为：%d",a/100);
//	int boold=100;
//	printf("人物受到攻击后血量：%d\n",boold-80);
//	printf("任务通过自身技能回复血量：%d\n",boold-80+60);
//	int rouA,numberA,rouB,numberB;
//	printf("请输入两张电影票的序号\n"); 
//	scanf("%d %d %d %d",&rouA,&numberA,&rouB,&numberB);
//	if(rouA==rouB&&numberA-numberB==1||numberA-numberB==-1)
//	printf("成功\n");
//	else
//	printf("失败\n");
//	int corse=88;
//	if(corse>=95&&corse<=100)
//	{
//		printf("奖励自行车一辆\n");
//	}
//	else if(corse>=90&&corse<=94)
//	{
//		printf("奖励游乐园玩一天\n");
//	}
//	else if(corse>=80&&corse<=89)
//	{
//		printf("奖励变形金刚一个\n");
//	}
//	else
//	{
//		printf("打一顿");
//	}
//	int week;
//	scanf("%d",&week);
//	switch(week)
//	{
//		case 1:
//			printf("周一");
//			break;
//		case 2:
//			printf("周二"); 
//			break;
//		case 3:
//			printf("周三");
//			break;
//		case 4:
//			printf("周四");
//			break;
//		case 5:
//			printf("周五");
//			break;
//		case 6:
//			printf("周六");
//			break;
//		case 7:
//			printf("周日");
//			break;
//		default:
//			printf("没有这个星期");
//			break;
//	int month;
//	scanf("%d",&month);
//	switch(month)
//	{
//		case 3:
//		case 4:
//		case 5: 
//		printf("春季");
//		break; 
//		case 6:
//		printf("夏季");
//		case 7:
//		printf("夏季");
//		case 8:
//		printf("夏季");
//		break; 
//		case 9:
//		printf("秋季");
//		case 10:
//		printf("秋季");
//		case 11:
//		printf("秋季");
//		break;
//		case 12:
//		printf("冬季");
//		case 1:
//		printf("冬季");
//		case 2:
//		printf("冬季");
//		break;
//	}
//	int number;
//	scanf("%d",&number);
//	switch(number)
//	{
//		case 1:
//			printf("机票查询\n");
//			break;
//		case 2:
//			printf("机票预定\n");
//			break;
//		case 3:
//			printf("机票改签\n");
//			break;
//		case 4:
//			printf("退出服务\n");
//			break;
//		case 5:
//		case 6:
//		case 7:
//			printf("退出服务\n");
//			break; 
//		default:
//			printf("退出服务\n");
//	int sum=0,i;
//	for(i=1;i<=10;i++)
//	{
//		sum=i+sum; 
//	 }
//	printf("总和为：%d",sum); 
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
	printf("请输入两个整数\n");
	scanf("%d %d",&num1,&num2);
	int min=num1<num2?num1:num2;
	int max=num1>num2?num1:num2;
	int count=0;
	for(i=min;i<=max;i++)
	{
		if(i%6==0&&i%8==0)
		count++;
	 } 
	 printf("在这个范围内能被6和8同时整除的数字有%d个",count); 
	return 0;
}
	
