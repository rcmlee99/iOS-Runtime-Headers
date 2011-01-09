/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUSymTabLoadCommand : VMULoadCommand 
{
    NSUInteger _symoff;
    NSUInteger _nsyms;
    NSUInteger _stroff;
    NSUInteger _strsize;
}


- (id)initWithMemory:(id)arg1;
- (BOOL)isSymTab;
- (NSUInteger)symoff;
- (NSUInteger)nsyms;
- (NSUInteger)stroff;
- (NSUInteger)strsize;

@end
