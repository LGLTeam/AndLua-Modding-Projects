#include "MemoryTools.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>
#include <thread>
#include <iostream>
long int *posAddr = (long int *)malloc(8 * 10);
long int *idAddr = (long int *)malloc(8 * 5);
long int *eAddr = (long int *)malloc(8 * 5);
long int *addrInit;
typedef int Camp;
int pid = 0;
float Matrix[50];
enum camp
{
	blue = 1, red = 2
};
int campInit;
char cs[1024];
OFFSET aNumber = 388;			// 英雄序号
OFFSET pdo = 284;				// 红蓝判断
OFFSET ido = 304;				// 英雄ID
OFFSET number = 208;			// 英雄序号偏移值
OFFSET exp1 = 4;				// 辅助确认序号是否准确偏移值
OFFSET blood = 4056;			// 血量偏移
OFFSET xo = 772;				// x坐标偏移
OFFSET yo = 776;				// y坐标偏移
PACKAGENAME *bm = NULL;			// 包名
int handle;						// 文件句柄
int check = 0;

int getValue(PACKAGENAME * bm, long int addr, OFFSET offset)
{
	void *buf[8];
	pread64(handle, buf, 8, addr + offset);
	return *(int *)buf;
}

int MemorySearchP(int v, int o, int o1, int ov, long int addr[])
{
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	PMAPS pHead = NULL;
	PMAPS pMap = NULL;
	switch (MemorySearchRange)
	{
	case ALL:
		pMap = readmaps(bm, ALL);
		break;
	case B_BAD:
		pMap = readmaps(bm, B_BAD);
		break;
	case C_ALLOC:
		pMap = readmaps(bm, C_ALLOC);
		break;
	case C_BSS:
		pMap = readmaps(bm, C_BSS);
		break;
	case C_DATA:
		pMap = readmaps(bm, C_DATA);
		break;
	case C_HEAP:
		pMap = readmaps(bm, C_HEAP);
		break;
	case JAVA_HEAP:
		pMap = readmaps(bm, JAVA_HEAP);
		break;
	case A_ANONMYOUS:
		pMap = readmaps(bm, A_ANONMYOUS);
		break;
	case CODE_SYSTEM:
		pMap = readmaps(bm, CODE_SYSTEM);
		break;
	case STACK:
		pMap = readmaps(bm, STACK);
		break;
	case ASHMEM:
		pMap = readmaps(bm, ASHMEM);
		break;
	default:
		printf("\033[32;1mYou Select A NULL Type!\n");
		break;
	}
	if (pMap == NULL)
	{
		puts("map error");
		return 0;
	}
	int gs;
	gs = 0;
	int value = v;				// 搜索的数值
	PMAPS pTemp = NULL;
	pTemp = pMap;
	PMAPS n, e;
	e = n = (PMAPS) malloc(LEN);
	PMAPS pBuff;
	pBuff = n;
	int iCount = 0;				// 链表长度
	int c;
	// long int addr[128];
	int buff[1024] = { 0 };		// 缓冲区

	long int offset = o;		// 代码1偏移，自己写偏移量
	long int offset1 = o1;		// 代码2偏移，自己写偏移量

	while (pTemp->next != NULL)
	{
		c = (pTemp->taddr - pTemp->addr) / 4096;
		for (int j = 0; j < c; j += 1)
		{
			pread64(handle, buff, 0x1000, pTemp->addr + (j * 4096));
			for (int i = 0; i < 1024; i += 1)
			{
				if (buff[i] == value)
				{
					pread64(handle, buff, 8, pTemp->addr + (j * 4096) + offset);
					if (buff[0] == ov)
					{
						pread64(handle, buff, 8, pTemp->addr + (j * 4096) + offset1);
						if (buff[0] >= 24 && buff[0] <= 33)
						{
							addr[gs] = (pTemp->addr) + (j * 4096) + (i * 4);
							// 保存地址
							gs += 1;
							// 个数+1
						}
					}
				}
				// printf("buff[%d]=%f\n",l,buff[l]);
				// usleep(1);
			}
			// memset(buff,0,4);
		}
		pTemp = pTemp->next;
	}
	free(n);
	printf("P共搜索数据：%d个\n", gs);
	return 0;
}

void getDate(PACKAGENAME * bm, long int *idAddr, long int *numAddr)
{
	int a = 1;
	check = 1;
	void *buf[8];
	int fd = -1;
	
	float ym=0.0;
	
	float px=2340.0/2.0;
	
	float py=1080.0/2.0;
	while (a == 1)
	{
		int i = 0;
		char b[512];
		char aaa[1024] = "";
		
		for (i=0; i<16 ; i++)
		{
		pread64(handle, buf, 8, addrInit[0] - 952+i*4);
	    float hp = *(float *)buf;
	    Matrix[i]=hp;
	    
		}
		
	    
		for (i=0; i < 5; i++)
		{
			pread64(handle, buf, 8, idAddr[i] - aNumber);
			int idNum = *(int *)buf;
			pread64(handle, buf, 8, idAddr[i] - ido);
			int idt = *(int *)buf;
			pread64(handle, buf, 8, numAddr[i] + blood);
			int bloodt = *(int *)buf / 8192;
			pread64(handle, buf, 8, numAddr[i] + xo);
			int xt = *(int *)buf;
			pread64(handle, buf, 8, numAddr[i] + yo);
			int yt = *(int *)buf;
			
			if (idt<105 || idt>600)
			{
				printf("退出");
				exit(1);
				}
			
			if (campInit == 1)
			{
				yt *= -1;
			}
			else if (campInit == 2)
			{
				xt *= -1;
			}
			if (idNum == 0 || idt == 0)
			{
				a = 0;
				idt = 0;
				bloodt = 0;
				xt = 0;
				yt = 0;
			}
			
			double xm=xt*0.001;
			double zm=-yt*0.001;
			double X=0.0;
			double Y=0.0;
			double W=0.0;
			double h=0.0;
			double Raito = xm * Matrix[3] + ym * Matrix[7] + zm * Matrix[11] + Matrix[15];
			
			if (Raito>0.01)
			{
			    X = px + (xm * Matrix[0] + ym * Matrix[4] + zm * Matrix[8] + Matrix[12]) / Raito * px ;

                Y = py - (xm * Matrix[1] +( ym) * Matrix[5] + zm * Matrix[9] + Matrix[13]) / Raito * py;
                
                W = py - (xm * Matrix[1] +( ym+4.0) * Matrix[5] + zm * Matrix[9] + Matrix[13]) / Raito * py;
                
                h=(Y-W)/2;
                



      
				
				}
			
			//printf("坐标:%f",X,Y);
			
			sprintf(b, "%d,%lf,%lf,%lf,%d,%d,%d;\n", idt,X,Y,h,xt,yt,bloodt);
			strcat(aaa, b);
			if (i == 4)
			{
				fd = open("/sdcard/c.log", O_WRONLY);
				if (a == 1)
				{
					write(fd, aaa, sizeof(aaa));
				}
				else
				{
					
				}
				close(fd);
			}
		}
		
	
		sleep(0.03);
	}
	close(fd);
	
}

void getAddr(Camp camp)
{
	int co = 0;
	int gs;						// 用来存储数据个数
	// 注意这里要用指针,就是那个*号,不可以去掉
	if (isapkrunning("com.tencent.ig"))
	{
		BypassGameSafe();		// 绕过游戏保护,调用就行了
		// 注意,第一次调用,必须要重启游戏才生效
		// 调用一次后,只要你手机没有重启,那就一直有效
		SetTextColor(COLOR_SKY_BLUE);	// 设置文字颜色
		// SetTextColor(颜色类型);
		SetSearchRange(C_ALLOC);	// 设置搜索内存范围
		puts("开始搜索所有人ca内存信息");
		// MemorySearchP(999999,4,208,720,posAddr);
		MemorySearch(bm, "999999", &gs, DWORD);
		printf("共搜索数据：%d个\n", ResCount);
		// MemorySearch(包名,数值,个数存放的地方,数据类型)
		long int *addrInit = (long int *)malloc(8 * ResCount);;
		PMAPS res = Res;
		int i;
		for (i = 0; i < ResCount; i++)
		{
			addrInit[i] = res->addr;
			res = res->next;	// 指向下一个节点
		}
		// 以上为保存搜索结果地址
		int count = 0;
		for (i = 0; i < ResCount; i++)
		{
			int num = getValue(bm, addrInit[i], number);
			int e = getValue(bm, addrInit[i], exp1);
			int bloodt = getValue(bm, addrInit[i], blood) / 8192;
			int xt = getValue(bm, addrInit[i], xo);
			int yt = getValue(bm, addrInit[i], yo);
			if (e == 720 && num >= 24 && num <= 33)
			{
				posAddr[count] = addrInit[i];
				count++;
				if (count == 10)
				{
					break;
				}
			}
		}
		// ********************获取所有人坐标数据完毕
		/* 
		   SetSearchRange(A_ANONMYOUS); puts("开始搜索自己英雄ID");
		   MemorySearch(bm, "1060", &gs, DWORD); // 搜索内存
		   printf("共搜索数据：%d个\n", ResCount); addrInit[ResCount];
		   res = Res; for (i = 0; i < ResCount; i++) { addrInit[i] =
		   res->addr; res = res->next; // 指向下一个节点
		   printf("开始第%d个，一共%d个！\n",i,ResCount); }
		   printf("数据初始化完成！\n"); OFFSET helppd =
		   80;//辅助确认值偏移 OFFSET myIdo = 192;//自己id偏移值
		   void *helppdf = NULL; void *myIdf = NULL; for (i = 0; i < ResCount; 
		   i++) { long int helppdd = addrInit[i] + helppd; helppdf =
		   SearchAddress(bm, helppdd); int helppdt = *(int *)helppdf; if
		   (helppdt == 3328){ long int myIdd = addrInit[i] + myIdo; myIdf =
		   SearchAddress(bm, myIdd); int myIdt = *(int *)myIdf;
		   printf("地址：%d，%d",myIdd,myIdt); break; } } */

		// ************************

		SetSearchRange(A_ANONMYOUS);	// 设置搜索内存范围
		puts("开始搜索a内存信息");
		MemorySearch(bm, "12500", &gs, DWORD);	// 搜索内存
		printf("共搜索数据：%d个\n", ResCount);
		// MemorySearch(包名,数值,个数存放的地方,数据类型)
		addrInit = (long int *)malloc(8 * ResCount);
		res = Res;
		for (i = 0; i < ResCount; i++)
		{
			addrInit[i] = res->addr;
			res = res->next;	// 指向下一个节点
		}
		count = 0;
		for (i = 0; i < ResCount; i++)
		{
			int numt = getValue(bm, addrInit[i], aNumber * -1);
			int pdt = getValue(bm, addrInit[i], pdo * -1);
			int idt = getValue(bm, addrInit[i], ido * -1);
			switch (camp)
			{
			case blue:			// 蓝方
				if (numt >= 24 && numt <= 33 && pdt == 2)
				{
					idAddr[count] = addrInit[i];	// 保存地址到全局变量
					int j;
					for (j = 0; j < 10; j++)
					{
						int posNum = getValue(bm, posAddr[j], number);
						if (numt == posNum)
						{
							eAddr[count] = posAddr[j];
						}
					}
					// printf("地址\e[32;1m0x%lx \e[36,%d,%d,%d,%d\n",
					// addrInit[i], numt, idt, pdt,count);
					count++;
					if (count == 5)
					{
						break;
					}
				}
				break;
			case red:			// 红方
				if (numt > 23 && numt < 34 && pdt == 1)
				{
					idAddr[count] = addrInit[i];
					int j;
					for (j = 0; j < 10; j++)
					{
						int posNum = getValue(bm, posAddr[j], number);
						if (numt == posNum)
						{
							eAddr[count] = posAddr[j];
						}
					}
					// printf("地址\e[32;1m0x%lx \e[36,%d,%d,%d,%d\n",
					// addrInit[i], numt, idt, pdt,count);
					count++;
					if (count == 5)
					{
						break;
					}
				}
				break;
			}
		}
		free(addrInit);			// 释放内存
		if (posAddr[9] == NULL || idAddr[4] == NULL)
		{
			co++;
			if (co > 5)
			{
				getAddr(campInit);
			}
		}
	}
	else
	{
		puts("程序未运行");
	}
	puts("地址搜索完成！");
	if (check == 0)
	{
		getDate(bm, idAddr, eAddr);
	}
}

void getMatrix()
{
	int gs;
	    bm = "com.tencent.ig";
	    BypassGameSafe();
	    SetSearchRange(C_ALLOC);	// 设置搜索内存范围
		puts("开始搜索a内存信息");
		MemorySearch(bm, "16777216", &gs, DWORD);	// 搜索内存
		//printf("共搜索数据：%d个\n", ResCount);
	    MemoryOffset(bm,"65793",8,&gs, DWORD);
	    MemoryOffset(bm,"1", 12,&gs, DWORD);
	    printf("共偏移数据：%d个\n", gs);
	    addrInit = (long int *)malloc(8 * ResCount);;


		PMAPS res = Res;

		int i;
		for (i = 0; i < ResCount; i++)
		{
			addrInit[i] = res->addr;
			res = res->next;	// 指向下一个节点
		}
		void *buf[8];
		
	    
}


int main(int argc, char **argv)
{
	getRoot(argv);				// 获取root
	bm = "com.tencent.ig";	// 软件包名
	pid = getPID(bm);
	char lj[128];
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	getMatrix();
	FILE *fp = fopen("/storage/emulated/0/a.log", "w+");
	fscanf(fp, "%d", &campInit);
	if (campInit == 0)
	{
		FILE *p = fopen("/storage/emulated/0/a.log", "w+");
		fprintf(p, "%d", 1);
		fclose(p);
	}
	fscanf(fp, "%d", &campInit);
	fclose(fp);
	if (campInit == 1 || campInit == 2)
	{
		puts("开始搜索地址…");
		FILE *fpp = fopen("/storage/emulated/0/b.log", "w+");
		fprintf(fpp, "%s", "0,0,0,0,0");
		fclose(fpp);
		getAddr(campInit);
	}
	close(handle);
	SetTextColor(COLOR_YELLOW);
	puts("完成");
	
int gs;
//killGG();
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(C_DATA);//设置搜索内存范围
SetTextColor(COLOR_PINK);//设置文字颜色
puts("开始内存搜索...");
MemorySearch(bm,"-1.2382424e28",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"-3.8369228e21",-48,&gs,FLOAT);
MemoryOffset(bm,"-7.1611644e24",-36,&gs,FLOAT);
MemoryOffset(bm,"-5.8430543e27",-24,&gs,FLOAT);
MemoryOffset(bm,"-1.0012947e28",-12,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第一步...");
MemoryWrite(bm,"-2.4764848e28",0,FLOAT);
puts("修改完成");
ClearResults();

puts("开始内存搜索...");
MemorySearch(bm,"-6.1526231e27",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"-9.4914375e20",-48,&gs,FLOAT);
MemoryOffset(bm,"-3.6754777e21",-36,&gs,FLOAT);
MemoryOffset(bm,"2.532984e-29",-24,&gs,FLOAT);
MemoryOffset(bm,"-3.7307833e19",-12,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第二步...");
MemoryWrite(bm,"0",0,FLOAT);
puts("修改完成");
ClearResults();

BypassGameSafe();
SetSearchRange(C_DATA);
puts("开始内存搜索...");
MemorySearch(bm,"0.0001",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"-2.0291021e20",-16,&gs,FLOAT);
MemoryOffset(bm,"-8.6220154e22",-32,&gs,FLOAT);
MemoryOffset(bm,"-4.9653618e27",-48,&gs,FLOAT);
MemoryOffset(bm,"-4.9605249e27",-68,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第一步...");
MemoryWrite(bm,"9999",0,FLOAT);
puts("修改完成");
ClearResults();

}