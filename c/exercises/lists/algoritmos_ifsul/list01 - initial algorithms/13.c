#include <stdio.h>

int main() {
	// Teste lógico com && (and) e || (or)
	bool t = true, f = false;
	
	printf("%1sX or Y", "");
	
	// OR (||)
	printf("\n F || F: %d", f || f);	
	printf("\n F || T: %d", f || t);
	printf("\n T || F: %d", t || f);	
	printf("\n T || T: %d", t || t);

	printf("\n\n%1sX and Y", "");

	// AND (&&)
	printf("\n F && F: %d", f && f);	
	printf("\n F && T: %d", f && t);
	printf("\n T && F: %d", t && f);	
	printf("\n T && T: %d", t && t);

	return 0;
}

