#include"Functions.h"

//Breaks the cost into copper, silver, gold, and platimun. Then displays these values separated by '.'
void FormatDisplayCost(int cost) {
	unsigned short copper = cost % 100;
	cost /= 100;
	unsigned short silver = cost % 100;
	cost /= 100;
	unsigned short gold = cost % 100;
	cost /= 100;
	unsigned short platinum = cost % 100;
	cost /= 100;
	
	cout << platinum << '.' << gold << '.' << silver << '.' << copper;
}

void StringCopy(char* dest, const char* src) {
	while (*dest++ = *src++);
}

//Takes two cStrings and copies the source array to THE END of the destination array without overflowing 
//the bounds of the destination array. The source array will be truncated if it exceeds the size of the destination array.
void StringConcat(char* dest, const char* source) {
	int destLength = StringLength(dest);
	int count = destLength;
	bool done = false;
	while (!done) {
		if (count == destLength - 1) {    //If count has reached the destination array's size limit, add the null character as the last element.
			dest[count] = '\0';
			done = true;
		}
		else {
			dest[count] = source[count - destLength];
			if (source[count - destLength] == '\0') {   //If count has reached the null character in the source array, stop copying.
				done = true;
			}
		}
		count++;
	}
}

int StringLength(const char* str) {
	bool done = false;
	int count = 0;
	while (!done) {
		if (str[count] == '\0') {
			done = true;
		}
		else {
			count++;
		}
	}
	return count;
}