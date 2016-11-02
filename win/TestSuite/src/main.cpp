#include <stdio.h>
#include "TestBase.h"
#include "TestGeneric.h"
#include "TestString.h"
#include "TestList.h"
#include "TestSet.h"
#include "TestHash.h"
#include "TestZset.h"
#include "TestConcur.h"

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char **argv)
{
	//std::string strHost = "10.10.252.15";
	std::string strHost = "127.0.0.1";
	do 
	{
		/*CTestBase testBase;
		if (!testBase.StartTest(strHost))
		break;*/

		/*CTestGeneric testKeys;
		if (!testKeys.StartTest(strHost))
		break;*/

		/*CTestString testStr;
		if (!testStr.StartTest(strHost))
			break;*/

		/*CTestList testList;
		if (!testList.StartTest(strHost))
		break;*/

		/*CTestSet testSet;
		if (!testSet.StartTest(strHost))
		break;*/

		/*CTestHash testHash;
		if (!testHash.StartTest(strHost))
		break;*/

		/*CTestZset testZset;
		if (!testZset.StartTest(strHost))
		break;*/

		CTestConcur testConcur;
		if (!testConcur.StartTest(strHost))
			break;
	} while (false);

	char c = ' ';
	cin >> c;
	return 0;
}

