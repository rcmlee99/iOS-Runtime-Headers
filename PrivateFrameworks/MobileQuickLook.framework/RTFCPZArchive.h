/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSMutableDictionary, <RTFCPZArchiveInputStream>, NSString;



@interface RTFCPZArchive : NSObject 
{
    NSMutableDictionary *mEntries;
    <RTFCPZArchiveInputStream> *mInput;
    NSString *mRootName;
}


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)entryWithName:(id)arg1;
- (id)rootName;
- (void)readEntries;
- (struct RTFCPZEndOfCentralDirectory { unsigned long long x1; unsigned long long x2; unsigned long long x3; })readEndOfCentralDirectory;
- (const char *)searchForEndOfCentralDirectory;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
