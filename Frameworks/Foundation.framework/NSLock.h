/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (void)load;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)lock;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;
- (id)description;
- (void)setName:(id)arg1;
- (id)name;
- (void)mf_waitForLock;

@end
