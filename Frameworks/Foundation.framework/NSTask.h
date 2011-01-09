/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSTask : NSObject 
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;

- (NSInteger)terminationStatus;
- (BOOL)isRunning;
- (void)launch;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)interrupt;
- (void)terminate;
- (BOOL)suspend;
- (BOOL)resume;
- (NSInteger)suspendCount;
- (NSInteger)processIdentifier;
- (id)launchPath;
- (id)environment;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardError:(id)arg1;
- (id)standardInput;
- (id)standardOutput;
- (id)standardError;
- (id)init;

@end
