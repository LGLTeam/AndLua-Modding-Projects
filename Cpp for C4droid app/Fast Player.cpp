#include "MemoryTools.h"
int main(int argc,char **argv)
{
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
}