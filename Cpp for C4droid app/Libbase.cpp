// Made By Upluk Aka @maapnangis
// Recoded By Krojza Aka @Krojzanovic
// . Enjoy Use this

#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <thread>



int handle;
typedef char PACKAGENAME;
long int get_module_base(int pid, const char *module_name)
{
	FILE *fp;
	long addr = 0;
	char *pch;
	char filename[32];
	char line[1024];
	snprintf(filename, sizeof(filename), "/proc/%d/maps", pid);
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		while (fgets(line, sizeof(line), fp))
		{
			if (strstr(line, module_name))
			{
				pch = strtok(line, "-");
				addr = strtoul(pch, NULL, 16);
				break;
			}
		}
		fclose(fp);
	}
	return addr;
}

int WriteBaseAddress_FLOAT(long int addr, float value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int WriteBaseAddress_DWORD(long int addr, int value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int getPID(PACKAGENAME * PackageName)
{
	DIR *dir = NULL;
	struct dirent *ptr = NULL;
	FILE *fp = NULL;
	char filepath[256];
	char filetext[128];
	dir = opendir("/proc");
	if (NULL != dir)
	{
		while ((ptr = readdir(dir)) != NULL)
		{

			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/proc/%s/cmdline", ptr->d_name);
			fp = fopen(filepath, "r");
			if (NULL != fp)
			{
				fgets(filetext, sizeof(filetext), fp);
				if (strcmp(filetext, PackageName) == 0)
				{

					break;
				}
				fclose(fp);
			}
		}
	}
	if (readdir(dir) == NULL)
	{
		return 0;
	}
	closedir(dir);
	return atoi(ptr->d_name);
}

int rebootsystem() {
	return system("su -c 'reboot'");
}


int main(int argc, char **argv)
{
	int gs;
    void *jg;
	FILE *fp;
	char ch, wjm[51];
	if (!(fp = fopen("/storage/emulated/0/CPP/", "r"))) //Verify that the folder exists

	{
		rebootsystem(); //Restart the system(mobile phone)
	}
	int ipid = getPID("com.riotgames.league.wildrift");
	if (ipid == 0)
	{
					puts("Aplikasi tidak berjalan!");
					exit(1);
	}


	char lj[64];
	sprintf(lj, "/proc/%d/mem", ipid);
	handle = open(lj, O_RDWR);
	if (handle == -1)
	{
		puts("Gagal mendapatkan memory!\n");
		exit(1);
	}
	puts("Krojzanovic | LEECHER WILL CRY");
	char mname[] = "libil2cpp.so";
	long int libbase = get_module_base(ipid, mname);
	WriteBaseAddress_FLOAT(libbase + 0xaddress, 50); //64 bit
	WriteBaseAddress_FLOAT(libbase + 0xaddress, 50); //64 bit
	WriteBaseAddress_FLOAT(libbase + 0xaddress, 50); //32 bit
	WriteBaseAddress_FLOAT(libbase + 0xaddress, 50); //32 bit
	close(handle);
	return 0;
}