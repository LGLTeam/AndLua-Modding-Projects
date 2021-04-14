#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
//killGG();
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(B_BAD);//设置搜索内存范围
SetTextColor(COLOR_PINK);//设置文字颜色
puts("开始内存搜索...");
MemorySearch(bm,"7.49931335449",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"6.596534729",12,&gs,FLOAT);
MemoryOffset(bm,"6.44602203369",24,&gs,FLOAT);
MemoryOffset(bm,"11.9269657135",40,&gs,FLOAT);
MemoryOffset(bm,"8.00137329102",48,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第一步...");
MemoryWrite(bm,"9999",0,FLOAT);
puts("修改完成");
ClearResults();

puts("开始内存搜索...");
MemorySearch(bm,"7.16895294189",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"6.44614267349",12,&gs,FLOAT);
MemoryOffset(bm,"6.0982670784",24,&gs,FLOAT);
MemoryOffset(bm,"11.48914051056",36,&gs,FLOAT);
MemoryOffset(bm,"12.63958740234",48,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第二步...");
MemoryWrite(bm,"9999",0,FLOAT);
puts("修改完成");
ClearResults();


puts("开始内存搜索...");
MemorySearch(bm,"7.16895294189",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"12.61437892914",12,&gs,FLOAT);
MemoryOffset(bm,"10.18970394135",24,&gs,FLOAT);
MemoryOffset(bm,"11.48914051056",36,&gs,FLOAT);
MemoryOffset(bm,"6.0982670784",48,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第三步...");
MemoryWrite(bm,"9999",0,FLOAT);
puts("修改完成");
ClearResults();

puts("开始内存搜索...");
MemorySearch(bm,"3.10485887527",&gs,FLOAT);//搜索内存
printf("共搜索%d个数据\n",gs);
MemoryOffset(bm,"1.91498470306",12,&gs,FLOAT);
MemoryOffset(bm,"2.49117946625",24,&gs,FLOAT);
MemoryOffset(bm,"1.80180358887",36,&gs,FLOAT);
MemoryOffset(bm,"2.11419868469",48,&gs,FLOAT);
printf("共偏移%d个数据\n",gs);
Print();
puts("第四步...");
MemoryWrite(bm,"9999",0,FLOAT);
puts("修改完成");
ClearResults();
}