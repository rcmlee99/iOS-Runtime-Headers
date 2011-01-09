/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;



@interface NSKeyValueAccessor : NSObject 
{
    id _containerClassID;
    NSString *_key;
    int (*_implementation)();
    SEL _selector;
    NSUInteger _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}


- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)())arg3 selector:(SEL)arg4 extraArguments:(void*[3])arg5 count:(NSUInteger)arg6;
- (void)dealloc;
- (void)finalize;
- (id)containerClassID;
- (SEL)selector;
- (id)key;
- (NSUInteger)extraArgumentCount;
- (void*)extraArgument1;
- (void*)extraArgument2;

@end
