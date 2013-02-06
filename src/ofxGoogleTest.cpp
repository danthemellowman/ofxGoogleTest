#include "ofxGoogleTest.h"

int ofxGoogleTest::run()
{
	int argc = 0;
	char **argv = NULL;
	
	::testing::InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}