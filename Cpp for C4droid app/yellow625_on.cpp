#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(B_BAD);
MemorySearch(bm,"8200",&gs,DWORD);
MemoryOffset(bm,"539246595",-12,&gs,DWORD);
MemoryOffset(bm,"200906",16,&gs,DWORD);
MemoryWrite(bm,"8198",0,DWORD);
BypassGameSafe();
SetSearchRange(B_BAD);
MemorySearch(bm,"8200",&gs,DWORD);
MemoryOffset(bm,"1661403151",-12,&gs,DWORD);
MemoryOffset(bm,"1194380048",4,&gs,DWORD);
MemoryWrite(bm,"8198",0,DWORD);
puts("Inst 4X");
ClearResults();
}