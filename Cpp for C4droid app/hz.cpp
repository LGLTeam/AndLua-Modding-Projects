#include "MemoryTools.h"
 int main(int argc,char **argv)
{
int gs;
PACKAGENAME *bm="com.tencent.ig";
BypassGameSafe();
SetSearchRange(C_ALLOC);
MemorySearch(bm,"16384",&gs,DWORD);
MemoryOffset(bm,"16384",4,&gs,DWORD);
MemoryOffset(bm,"16384",8,&gs,DWORD);
MemoryOffset(bm,"16384",12,&gs,DWORD);
MemoryOffset(bm,"16384",16,&gs,DWORD);
MemoryOffset(bm,"16384",20,&gs,DWORD);
MemoryOffset(bm,"4448",100,&gs,DWORD);
MemoryWrite(bm,"0",0,DWORD);
MemoryWrite(bm,"0",4,DWORD);
MemoryWrite(bm,"0",8,DWORD);
MemoryWrite(bm,"0",12,DWORD);
MemoryWrite(bm,"0",16,DWORD);
MemoryWrite(bm,"0",20,DWORD);
MemoryWrite(bm,"1337",100,DWORD);
PMAPS GetResults();
AddFreezeItem_All(bm,"0",DWORD,0);
AddFreezeItem_All(bm,"0",DWORD,4);
AddFreezeItem_All(bm,"0",DWORD,8);
AddFreezeItem_All(bm,"0",DWORD,12);
AddFreezeItem_All(bm,"0",DWORD,16);
AddFreezeItem_All(bm,"0",DWORD,20);
AddFreezeItem_All(bm,"1337",DWORD,100);
StartFreeze(bm);
SetFreezeDelay(0);
PrintFreezeItems();
ClearResults();
BypassGameSafe();
MemorySearch(bm,"108",&gs,DWORD);
MemoryOffset(bm,"4448",52,&gs,DWORD);
MemoryWrite(bm,"1337",52,DWORD);
PMAPS GetResults();
AddFreezeItem_All(bm,"1337",DWORD,52);
StartFreeze(bm);
SetFreezeDelay(0);
PrintFreezeItems();
ClearResults();
BypassGameSafe();
MemorySearch(bm,"16384",&gs,DWORD);
MemoryOffset(bm,"4448",-408,&gs,DWORD);
MemoryWrite(bm,"1337",-408,DWORD);
PMAPS GetResults();
AddFreezeItem_All(bm,"1337",DWORD,-408);
StartFreeze(bm);
SetFreezeDelay(0);
PrintFreezeItems();
puts(" HZ MODS PRO : BYPASS BAN ");
ClearResults();
}