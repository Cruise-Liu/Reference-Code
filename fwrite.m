#import <Foundation/Foundation.h>
int main()
{
     FILE *fp;
     char *ch = "hello";
     if((fp=fopen(ch,"wb")) == NULL){
         NSLog(@"cannot open this file");
     }
     else{
        char monthTmp = 0;// 初始的月份个数。此变量在读月份的索引时使用
        long startAddressInIndexContent =200*1024;//新备忘录标题部分在索引文件的起始地址。
        fwrite(&monthTmp, sizeof(char), 1, fp);
         fwrite(&startAddressInIndexContent, sizeof(long), 1, fp);
    }
     fclose(fp);
     return 0;
}
