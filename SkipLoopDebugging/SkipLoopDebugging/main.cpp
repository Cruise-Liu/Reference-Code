//
//  main.cpp
//  SkipLoopDebugging
//
//  Created by liuxin on 8/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    for (int i=0; i<100; i++) {
        cout << i <<"  "<<flush;
    }
    return 0;
}

/*******************************************************************
Conditional breakpoints
 When you select “Edit Breakpoint” you are presented with a context 
 menu showing additional options for that breakpoint. You can set 
 a condition that will cause your breakpoint to trigger only when
 that condition is met, you can cause it to ignore the breakpoint 
 until a certain number of times, and can even trigger complex 
 actions to be performed automatically when that breakpoint is hit.
 
 For example, you can log a line to the console, you can play a 
 sound, you can capture an OpenGL frame for later comparison, and 
 can even invoke a shell script or AppleScript.
********************************************************************/