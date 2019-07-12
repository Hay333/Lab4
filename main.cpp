#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	return 0;
}

class String
{
	char * value;
	int len;
public:
	String():value(new char[1] {}), len(0) {};//конструктор по умолчанию
	String(const String& s) {// конструктор копирования
	delete[] value;
		len = s.len;
		value = new char[len + 1];
		for (int i = 0; i <= len; i++)
			value[i] = s.value[i];
	}
	//перегрузка operator<<
	friend ostream& operator<<(ostream& outputStream, const String & s) {
		return outputStream << s.value;
	}
	//освобождене памяти
	~String() {
		delete[] value;
	}
};
