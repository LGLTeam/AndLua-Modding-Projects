#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.mobile.legends";
BypassGameSafe();
SetSearchRange(A_ANONYMOUS);
MemorySearch(bm,"109",&gs,DWORD);
MemoryOffset(bm,"1156",84,&gs,DWORD);
MemoryWrite(bm,"0",0,DWORD);
puts("@XP FUCEK"); 
ClearResults();
}