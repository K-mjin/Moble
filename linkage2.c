
extern int all_files;
extern int this_file;

void sub(void) {
	all_files = 10;
	printd("%d\n", this_file);
}