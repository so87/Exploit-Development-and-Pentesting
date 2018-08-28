void main(int argc, char **argv)
{
	char buf1[64];
	char buf2[64];
	char buf3[64];
	
	//I'm safe because I use strncpy!!!
	strncpy(buf2,argv[1],sizeof(buf2));
	strncpy(buf3,argv[2],sizeof(buf3));
	
	//I'm safe because sizeof(buf1) == sizeof(buf3)!!!
	strcpy(buf1,buf3);	
}
