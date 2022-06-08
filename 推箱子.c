#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int map1[6][11][11] = {
		{
		    {0,0,1,1,1,0,0,0,0,0,0},
	        {0,0,1,4,1,0,0,0,0,0,0},
	        {0,0,1,0,1,1,1,1,0,0,0},
	        {1,1,1,3,0,3,4,1,0,0,0},
	        {1,4,0,3,2,1,1,1,0,0,0},
	        {1,1,1,1,3,1,0,0,0,0,0},
	        {0,0,0,1,4,1,0,0,0,0,0},
	        {0,0,0,1,1,1,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0}
		},
		{
			{0,1,1,1,1,1,0,0,0,0,0},
            {0,1,2,0,1,1,1,0,0,0,0},
	        {0,1,0,3,0,0,1,0,0,0,0},
	        {1,1,1,0,1,0,1,1,0,0,0},
	        {1,4,1,0,1,0,0,1,0,0,0},
	        {1,4,3,0,0,1,0,1,0,0,0},
	        {1,4,0,0,0,3,0,1,0,0,0},
	        {1,1,1,1,1,1,1,1,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0}
		},
		{
			{0,1,1,1,1,0,0,0,0,0,0},
            {1,1,0,0,1,0,0,0,0,0,0},
	        {1,2,3,0,1,0,0,0,0,0,0},
	        {1,1,3,0,1,1,0,0,0,0,0},
	        {1,1,0,3,0,1,0,0,0,0,0},
	        {1,4,3,0,0,1,0,0,0,0,0},
	        {1,4,4,7,4,1,0,0,0,0,0},
	        {1,1,1,1,1,1,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0}
		},
		{
			{1,1,1,1,1,0,0,0,0,0,0},
            {1,2,0,0,1,0,0,0,0,0,0},
	        {1,0,3,3,1,0,1,1,1,0,0},
	        {1,0,3,0,1,0,1,4,1,0,0},
	        {1,1,1,0,1,1,1,4,1,0,0},
	        {0,1,1,0,0,0,0,4,1,0,0},
	        {0,1,0,0,0,1,0,0,1,0,0},
	        {0,1,0,0,0,1,1,1,1,0,0},
	        {0,1,1,1,1,1,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0}
		},
		{
			{0,1,1,1,1,1,1,1,0,0,0},
            {0,1,0,0,0,0,0,1,1,1,0},
	        {1,1,3,1,1,1,0,0,0,1,0},
	        {1,0,2,0,3,0,0,3,0,1,0},
	        {1,0,4,4,1,0,3,0,1,1,0},
	        {1,1,4,4,1,0,0,0,1,0,0},
	        {0,1,1,1,1,1,1,1,1,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0}
		},
		{
			{0,0,0,1,1,1,1,1,1,1,0},
	        {0,0,1,1,0,0,1,0,2,1,0},
	        {0,0,1,0,0,0,1,0,0,1,0},
	        {0,0,1,3,0,3,0,3,0,1,0},
	        {0,0,1,0,3,1,1,0,0,1,0},
	        {1,1,1,0,3,0,1,0,1,1,0},
	        {1,4,4,4,4,4,0,0,1,0,0},
	        {1,1,1,1,1,1,1,1,1,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0},
	        {0,0,0,0,0,0,0,0,0,0,0}
		}
};
int map[11][11]={0};//原始的图表，五行六列，其中 0 代表着空白的地方； 1 代表着墙；2 代表着人；
	              //3 代表着箱子；4 代表着箱子的中点位置。

                      //图的变化要靠自己来编写数组，通过数字来进行图的构造。
int drawmain();
int tuidong();
int winshu();
int winshu1();
int nextgame();
int choise();
int main()//主函数
{
    MessageBox(NULL,"欢迎进入推箱子","推箱子",0);
    system("color Be");//dos窗口输入命令：color Be；B是背景色：浅亮绿色；e是文字色：淡黄色
    system("title 推箱子");//修改dos窗口名
    int next;
    int count=0;
    int shu;
    int win;
    int score;
    FILE *fp;
        fp=fopen("C:\\推箱子.txt","a+");
        fclose(fp);
        fp=fopen("C:\\推箱子.txt","r+");//读写，文件开头开始写，保留文件中没有覆盖的部分
        fread(&win,sizeof(int),sizeof(int),fp);//fp到win
    next=choise();
	while(1)
    {
    	system("cls");//对其进行清屏
        count=winshu();
        if(count==1)
        {
            next++;
            nextgame(next);

            if(next>win&&next!=6)
              {
                  score=next;
                   FILE *fp;
                  fp=fopen("C:\\推箱子.txt","r+");
                  fwrite(&score,sizeof(int),sizeof(int),fp);
                  fclose(fp);
                  if(next<=6)
                  printf("现在记录是%d\n",next);

              }

            if(next<=win&&next<=6)
               printf("最高记录%d\n",win);
            if(next==6)
            {
            score=next;
            FILE *fp;
            fp=fopen("C:\\推箱子.txt","r+");
            fwrite(&score,sizeof(int),sizeof(int),fp);
            fclose(fp);
            printf("你通关了！！\n");
                return 0;
            }
            if(next>=7)
          {
                return 0;
            }
        }
         if(next>=7)
          {
                return 0;
            }
         drawmain();
         tuidong();
    }
	return 0;
 }
//把图形刻画出来

int drawmain()
{
    int count;
    int i,j;
	for(i=0;i<11;i++)
	{
	   for(j=0;j<11;j++)
	   	   {
	   	   	   switch(map[i][j])
	   	   	   {
	   	   	   	    case 0:
	   	   	   	    	printf("  "); //空白的地方
	   	   	   	    	break;
	   	   	   	    case 1:
	   	   	   	    	printf("■"); //墙
	   	   	   	    	break;
	   	   	   	    case 2:
	   	   	   	    	printf("♀"); //人
					    break;
					case 3:
						printf("☆"); //箱子
					    break;
				    case 4:
				    	printf("◎"); //终点地方
					     break;
					case 6:
						printf("♂");//人到终点位置
						break;
				    case 7:
					    printf("★") ;//箱子到终点位置
						break;
					 }
			  }
	   printf("\n");
	}
}

 //进行小人的移动，整个移动的过程就是数组变化的过程
int tuidong()
{
	int count,caw;//行和列
        for(int i=0;i<11;i++)//确定人的位置
	{
		for (int j=0;j<11;j++)
		{
			if(map[i][j]==2||map[i][j]==6)
			{
				count=i;
				caw=j;
			}
		}
	 }
	int tui=getch();//与getchar()有区别的是：getchar()输入一个字符后需要回车来进行下一个字符的输入，
	                //比较麻烦 ，getch()则不需要回车就能连续输入多个字符。
    switch(tui)
	{//上
	    case 'W':
		case 'w':
		case 72:
			// 1.人的前面是空地；
		    // 2.人的前面是终点位置；
			// 3.人的前面是箱子
		    //3.1.箱子的前面是空地；
			//3.2.箱子的前面是终点位置。
		 if(map[count-1][caw]==0||map[count-1][caw]==4)//如果人的上边是空地，或者是终点
			{
				map[count][caw]-=2;//人所在的位置变成空地
				map[count-1][caw]+=2;//人的上边变成人
			}
		 else if(map[count-1][caw]==3||map[count-1][caw]==7)//否则首先如果人的上一行是箱子或是有箱子存在的终点
			{
				if(map[count-2][caw]==0||map[count-2][caw]==4)//如果人的上两行是空地或者是箱子
				{
			      map[count][caw]-=2;//人的位置变成空地
				  map[count-1][caw]-=1;//人的上边变成人或人到终点的样子
				  map[count-2][caw]+=3;//人的上两行变成箱子或箱子到终点的样子
				}
			}
		break;

   	/* 移动的情况：
	位置：
	   人   map[count][caw]
	   人的前面是空地   map[count-1][caw]
	   人的前面是终点位置   map[count-1][caw]
	   箱子的前面是空地或终点位置  map[count-2][caw]*/

//下
        case 'S':
	    case 's':
	    case 80://键值
	    	 if(map[count+1][caw]==0||map[count+1][caw]==4)//如果人的下边是空地，或者是终点
			{
				map[count][caw]-=2;//人所在的位置变成空地
				map[count+1][caw]+=2;//人的下面变成人
			}

			 else if(map[count+2][caw]==0||map[count+2][caw]==4)//否则首先如果人的下两行是空地或终点
			{
			   	if(map[count+1][caw]==3||map[count+1][caw]==7)//如果人的下边是箱子或者是有箱子存在的终点
				{
			      map[count][caw]-=2;//人的位置变成空地
				  map[count+1][caw]-=1;//人的下面变成人或人到终点的样子
				  map[count+2][caw]+=3;//人的下两行变成箱子或箱子到终点的样子
				}
			}
			break;
//左
        case 'A':
	    case 'a':
	    case 75:
	    		 if(map[count][caw-1]==0||map[count][caw-1]==4)//如果人的左边是空地，或者是终点
			{
				map[count][caw]-=2;//人所在的位置变成空地
				map[count][caw-1]+=2;//人的左边变成人
			}

			  else if(map[count][caw-2]==0||map[count][caw-2]==4)//否则首先如果人的左两行是空地或终点
			{
			   	if(map[count][caw-1]==3||map[count][caw-1]==7)//如果人的左边是箱子或者是有箱子存在的终点
				{
			      map[count][caw]-=2;//人的位置变成空地
				  map[count][caw-1]-=1;//人的左面变成人或人到终点的样子
				  map[count][caw-2]+=3;//人的左两行变成箱子或箱子到终点的样子
				}
			}
        	break;
//右
        case 'D':
	    case 'd':
		case 77:
		    	 if(map[count][caw+1]==0||map[count][caw+1]==4)//如果人的右边是空地，或者是终点
			{
				map[count][caw]-=2;//人所在的位置变成空地
				map[count][caw+1]+=2;//人的右边变成人
			}

			  else if(map[count][caw+2]==0||map[count][caw+2]==4)//否则首先如果人的右两行是空地或终点
			{
			     if(map[count][caw+1]==3||map[count][caw+1]==7)//如果人的右边是箱子或者是有箱子存在的终点
				{
			      map[count][caw]-=2;//人的位置变成空地
				  map[count][caw+1]-=1;//人的右边变成人或人到终点的样子
				  map[count][caw+2]+=3;//人的右两行变成箱子或箱子到终点的样子
				}
			}
		    break;

}
	/*进行小人的上下左右的移动
    移动的情况：
	     1.人的前面是空地；
		 2.人的前面是终点位置；
		 3.人的前面是箱子
		      3.1.箱子的前面是空地；
			  3.2.箱子的前面是终点位置。
    不移动的情况：
	     1.人的前面是墙；
		 2.人的前面是箱子；
		      2.1.箱子的前面是墙 ；
		      2.2.箱子的前面是箱子；
	*/
	//分析后，要进行确定人的位置以及胜利的条件。
 }

 //游戏的输赢
int winshu()
{
	 int k=0;
	for(int i=0;i<11;i++)
	{
		for (int j=0;j<11;j++)
		{
			 if(map[i][j]==3)
			     k++;
		}
	}
	if(k==0)
    {
         printf("恭喜你，你赢了！\n");
         return 1;
    }
    else return 0;
}
int nextgame(int next)
{
    int a=next+1;
      memcpy(map,map1[next],sizeof(map1[next]));
      FILE *fp;
      fp=fopen("C:\\推箱子.txt","r+");
      fwrite(&a,sizeof(int),sizeof(int),fp);
      fclose(fp);
}

int choise()
{
    int shu;
    printf("是否选择关卡？（y/n)\n");
    int choise1=getch();
    switch(choise1)
    {
        case 'y':
        case 'Y':
        printf("输入关卡号（1~6）\n");
        scanf("%d",&shu);
        if(shu<=6&&shu>=1)
        {
            memcpy(map,map1[shu-1],sizeof(map1[shu-1]));
             return shu-1;
        }

        else
        {
            system("cls");
            printf("\t\t*****输入错误，即将从第一关开始！！*****\t\t\n");
            Sleep(1000);
            memcpy(map,map1[0],sizeof(map1[0]));
            return 0;
        }
        break;
        case 'n':
        case 'N':
        system("cls");
        printf("\t\t*****即将从第一关开始*****\t\t\n");
         memcpy(map,map1[0],sizeof(map1[0]));
        Sleep(1000);
        return 0;
        break;
    }
}
