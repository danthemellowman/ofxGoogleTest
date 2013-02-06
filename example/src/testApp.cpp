#include "testApp.h"

#include "ofxGoogleTest.h"

TEST(MyFirstTest, my_first_test)
{
	ASSERT_EQ(0, 0);
	ASSERT_NE(0, 1);
	ASSERT_TRUE(true);
	ASSERT_FALSE(false);
}

TEST(MyFailedTest, my_failed_test)
{
	ASSERT_TRUE(false);
}

struct Vec3Test : testing::Test
{
protected:
	
	ofVec3f v0, v1;
	
	Vec3Test()
	{
		cout << "!!! 0" << endl;
		v0.set(0, 0, 0);
		v1.set(10, 10, 10);
	}
	
	void SetUp()
	{
		cout << "!!! 1" << endl;
	}
	
	void TearDown()
	{
		cout << "!!! 2" << endl;
	}
	
	~Vec3Test()
	{
		cout << "!!! 3" << endl;
	}
};

TEST_F(Vec3Test, eq_test)
{
	cout << "!!! test start" << endl;
	ASSERT_EQ(v0, ofVec3f(0, 0, 0));
	ASSERT_EQ(v1, ofVec3f(10, 10, 10));
	cout << "!!! test end" << endl;
}

//--------------------------------------------------------------
void testApp::setup()
{
	ofExit(ofxGoogleTest::run());
}

//--------------------------------------------------------------
void testApp::update()
{

}

//--------------------------------------------------------------
void testApp::draw()
{

}

//--------------------------------------------------------------
void testApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{

}