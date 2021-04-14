#include "MemoryTools.h"
int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(C_DATA);
MemorySearch(bm,"0",&gs,DWORD);
MemoryOffset(bm,"-308339980",-16,&gs,DWORD);
MemoryOffset(bm,"-310113741",16,&gs,DWORD);
MemoryWrite(bm,"-298841599",0,DWORD);
puts("SANDI MODS LESS RECOIL OFF");
ClearResults();
}