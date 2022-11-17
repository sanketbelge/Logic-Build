#include<iostream>

using namespace std;

void Display()
{

	for(int AsciiV = 0; AsciiV <= 255; AsciiV++)
	{
		printf("%d  %x  %o  %c\n",AsciiV,AsciiV,AsciiV,AsciiV);
	}
}

int main()
{

	Display();

	return 0;
}