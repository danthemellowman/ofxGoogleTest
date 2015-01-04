//
//  ofMeshTest.h
//  example
//
//  Created by dantheman on 10/27/14.
//
//
#pragma once
#include "ofBaseTest.h"

TEST(MESH, mesh_test)
{
    ASSERT_EQ(0, 0);
    ASSERT_NE(0, 1);
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
}

bool operator ==( const ofMesh& one, const ofMesh& other)
{
   
    
    if ( one.getVertices().size() != other.getVertices().size() ) {
        return false;
    }else{
        vector<ofVec3f> vertz = one.getVertices();
        vector<ofVec3f> overts = other.getVertices();
        for(int i = 0; i < vertz.size(); i++){
            if(vertz[i].x != overts[i].x){
                return false;
            }else{
                if(vertz[i].y != overts[i].y){
                    return false;
                }else if(vertz[i].z != overts[i].z){
                    return false;
                }
            }
        }
        return true;
    }

    return false;
}

struct MeshTest : ofBaseTest
{
protected:
    
    ofMesh v0, v1;
    
    MeshTest()
    {
        cout << "!!! MeshTest" << endl;
        
        for(int i = 0; i < 10; i++){
            v1.addVertex(ofVec3f(1, 1, i));
        }
        
        for(int i = 0; i < 10; i++){
            v0.addVertex(ofVec3f(0, 1, i));
        }
    }
    
    void SetUp()
    {
        cout << "!!! SetUp MeshTest" << endl;
    }
    
    void TearDown()
    {
        cout << "!!! TearDown MeshTest" << endl;
    }
    
    ~MeshTest()
    {
        cout << "!!! ~MeshTest" << endl;
    }
};

TEST_F(MeshTest, eq_test)
{
    
    ofMesh v2, v3;
    for(int i = 0; i < 10; i++){
        v2.addVertex(ofVec3f(0, 1, i));
    }
    
    for(int i = 0; i < 10; i++){
        v3.addVertex(ofVec3f(1, 1, i));
    }
    
    cout << "!!! v0 == v2" << endl;
    ASSERT_EQ(v0, v2);
    ASSERT_EQ(v1, v3);
    cout << "!!! v1 == v3" << endl;
}