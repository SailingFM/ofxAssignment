#pragma once

#include "ofMain.h"

vector<ofVec2f> makeGrid(int xSteps, int ySteps);
vector<ofVec3f> makeGrid(int xSteps, int ySteps, int zSteps);

class ofxAssignment {
protected:
    vector<int> assignment;
public:
    
    // note that match() will modify a and b if normalize is true!
    // this scales the cost matrix for you
    template <class T>
    vector<T> match(vector<T>& a, vector<T>& b, bool normalize = true);
    
    // solve is useful for solving a square cost matrix directly
    // it does not handle scaling for you
    const vector<int>& solve(vector<vector<double>>& cost);
};