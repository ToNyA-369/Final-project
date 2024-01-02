#include <stdio.h>
#include <time.h>

bool Timer(int ms, int id);

int main()
{

}

bool Timer(int ms, int id)
{
	static clock_t t[10];
	if (clock() - t[id] > ms) {
		t[id] = clock();
		return true;
	}
	return false;
}

