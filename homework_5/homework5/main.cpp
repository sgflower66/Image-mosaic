#include <stdio.h>
#include <string.h>
#include <iostream>

void main() {
	char line[100];
	int alphabetic(char), i;
	int longest(char[]);
	printf("input a line:\n");
	gets_s(line);
	for (i = longest(line); alphabetic(line[i]); i++)
		printf("%c", line[i]);
	printf("\n");
	system("pause");
	
	
}

int alphabetic(char x) {
	if ('a' <= x && x <= 'z' || 'A' <= x && x >= 'Z') return 1;
	return 0;
}

int longest(char str[]) {
	int i = 0, len = 0, maxlen = 0, index, start;
	while (str[i]) {
		while (str[i] && !alphabetic(str[i])) ++i; // 过滤掉非英文字符
		len = 0;
		index = i;
		while (str[i] && alphabetic(str[i])) { // 统计单词的字符个数
			++len;
			++i;
		}
		if (len > maxlen) {
			maxlen = len;
			start = index;
		}
	}
	return start;
}