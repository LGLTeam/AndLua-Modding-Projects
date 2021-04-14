#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.wildspike.wormszone";
BypassGameSafe();
SetSearchRange(B_DATA);
MemorySearch(bm,"1075838976",&gs,DWORD);
MemoryOffset(bm,"1065353216",12,&gs,DWORD);
MemoryWrite(bm,"1056964608",0,DWORD);
puts("@XP FUCEK"); 
ClearResults();
}
