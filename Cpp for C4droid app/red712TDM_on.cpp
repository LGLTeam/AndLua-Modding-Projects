#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(B_BAD);
MemorySearch(bm,"8200",&gs,DWORD);
MemoryOffset(bm,"538968100",-4,&gs,DWORD);
MemoryOffset(bm,"1194380069",4,&gs,DWORD);
MemoryWrite(bm,"7",0,DWORD);
puts("HZ MODS");
ClearResults();
}