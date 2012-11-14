fwrite.m
The result after running with ‘fwrite.m’ is below. 

 200*1024= 204800= 0x32000
fwrite(&monthTmp, sizeof(char), 1, fp); --
fwrite(&startAddressInIndexContent, sizeof(long), 1, fp);-- 
Because of Big Edition and Small Edition, ’00 20 03 00 00 00 00 00’ means ’00 00 00 00 00 03 20 00’ which is ’03 20 00’.
   Mac OS X Lion 10.7.4 Terminal    Language:Objective-C


SkipLoopDebugging:
   When debugging a program, how could we skip loop without clicking step by step or trigger a event after specified steps? The project SkipLoopDebugging will tell you in commenting.
   IDE: Xcode 4.3.3   OS: Mac OS X Lion 10.7.4  Language: C++

rename.cpp
  Showing how to use the function "rename" in stdio.h
  Languange:C++

文本查询程序
如果某单词在同一行中多次出现，程序将只显示该行一次。行号按升序显示，即第 7 行应该在第 9 行之前输出，依此类推。
例如，以本章的内容作为文件输入，然后查找单词“element”。输出的前几行应为：
element occurs 125 times
    (line 62) element with a given key.
    (line 64) second element with the same key.
    (line 153) element |==| operator.
    (line 250) the element type.
    (line 398) corresponding element.

文本查询程序.cpp   纯C++，使用的C++标准库 