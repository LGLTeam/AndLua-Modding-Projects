#include "MemoryTools.h"
int main(int argc,char **argv)
{
killGG();
int gs;//用来存储数据个数
void *jg;
PACKAGENAME *bm="com.tencent.ig";//软件包名
//注意这里要用指针,就是那个*号,不可以去掉

BypassGameSafe();
SetSearchRange(C_DATA);
puts("开始内存搜索...");
MemorySearch(bm,"-1.3620439e28",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"-1.3978205e24",-12,&gs,FLOAT);
MemoryOffset(bm,"-3.6907931e20",-24,&gs,FLOAT);
MemoryOffset(bm,"-7.6092819e19",-36,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第一步...");
MemoryWrite(bm,"0",0,FLOAT);
puts("修改完成");
ClearResults();
}