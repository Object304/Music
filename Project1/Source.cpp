#include "MyForm.h"
using namespace Project1;
[STAThreadAttribute]
int main(array<String^>^ args) {
	setlocale(LC_ALL, "rus");
	Application::Run(gcnew MyForm());
	return 0;
}