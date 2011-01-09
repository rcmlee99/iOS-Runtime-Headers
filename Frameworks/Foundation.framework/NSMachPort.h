/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSMachPort : NSPort 
{
    id _delegate;
    NSUInteger _flags;
    NSUInteger _machPort;
    NSUInteger _reserved;
}

+ (void)resetAllPorts;
+ (id)port;
+ (id)portWithMachPort:(NSUInteger)arg1;
+ (id)portWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
+ (void)_fixNSMachPortLeak;

- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (NSUInteger)machPort;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)initWithMachPort:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;

@end
