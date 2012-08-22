>>fwrite.m
The result after running with ‘fwrite.m’ is below. 

 200*1024= 204800= 0x32000
fwrite(&monthTmp, sizeof(char), 1, fp); --
fwrite(&startAddressInIndexContent, sizeof(long), 1, fp);-- 
Because of Big Edition and Small Edition, ’00 20 03 00 00 00 00 00’ means ’00 00 00 00 00 03 20 00’ which is ’03 20 00’.
   Mac OS X Lion 10.7.4 Terminal    Language:Objective-C


>>SkipLoopDebugging:
   When debugging a program, how could we skip loop without clicking step by step or trigger a event after specified steps? The project SkipLoopDebugging will tell you in commenting.
   IDE: Xcode 4.3.3   OS: Mac OS X Lion 10.7.4  Language: C++
