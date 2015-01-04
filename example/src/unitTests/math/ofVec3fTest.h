//
//  ofVec3fTest.h
//  example
//
//  Created by dantheman on 10/27/14.
//
//
#pragma once
#include "ofBaseTest.h"

TEST(Vec3Tester, vec3_test)
{
    ASSERT_EQ(0, 0);
    ASSERT_NE(0, 1);
}

TEST(FailedTest, failed_test)
{
    ASSERT_EQ(0, 1);
}

struct Vec3Test : ofBaseTest
{
protected:
    
    ofVec3f v0, v1;
    
    Vec3Test()
    {
        cout << "!!! ofVec3f Test" << endl;
        v0.set(0, 0, 0);
        v1.set(10, 10, 10);
    }
    
    void SetUp()
    {
        cout << "!!! ofVec3f SetUp" << endl;
    }
    
    void TearDown()
    {
        cout << "!!! ofVec3f TearDown" << endl;
    }
    
    ~Vec3Test()
    {
        cout << "!!! ~ofVec3f" << endl;
    }
};

TEST_F(Vec3Test, eq_test)
{
    cout << "!!! test start" << endl;
    ASSERT_EQ(v0, ofVec3f(0, 0, 0));
    ASSERT_EQ(v1, ofVec3f(10, 10, 10));
    cout << "!!! test end" << endl;
}