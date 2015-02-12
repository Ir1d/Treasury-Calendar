#include <cstdio>
int main(){
	while (233){
		putchar('\\');// notice that here requires double '\' @BUG HUNTER233
		putchar('\b');
		putchar('|');
		putchar('\b');
		putchar('/');
		putchar('\b');
		putchar('-');
		putchar('\b');
	}
	return 0;
}