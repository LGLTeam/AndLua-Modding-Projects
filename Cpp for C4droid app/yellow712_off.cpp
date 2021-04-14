#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(B_BAD);
MemorySearch(bm,"7",&gs,DWORD);
MemoryOffset(bm,"1661239325",-4,&gs,DWORD);
MemoryOffset(bm,"1194344481",4,&gs,DWORD);
MemoryWrite(bm,"8201",0,DWORD);
BypassGameSafe();
SetSearchRange(B_BAD);
MemorySearch(bm,"7",&gs,DWORD);
MemoryOffset(bm,"1194344481",-4,&gs,DWORD);
MemoryOffset(bm,"1194379812",4,&gs,DWORD);
MemoryWrite(bm,"8200",0,DWORD);
puts("HZ MODS PRO");
ClearResults();
}