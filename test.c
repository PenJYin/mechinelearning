#include"ecs/io.cpp"

int main()
{
	int i=0;
	const unsigned int sepc=10;
	char *buf[sepc];
	read_file(buf,sepc,"data");
	for (i=0;i<sepc;i++)
		printf("%s",buf[i]);
	return 0;
}
