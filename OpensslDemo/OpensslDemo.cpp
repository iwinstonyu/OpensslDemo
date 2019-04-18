// OpensslDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <openssl/md5.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	MD5_CTX ctx;
	unsigned char outmd[16];
	int i = 0;

	memset(outmd, 0, sizeof(outmd));
	MD5_Init(&ctx);
	MD5_Update(&ctx, "hel", 3);
	MD5_Update(&ctx, "lo\n", 3);
	MD5_Final(outmd, &ctx);
	for (int i = 0; i < 16; i++)
	{
		printf("%02X", outmd[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}