/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAWindowServer : NSObject 
{
    struct CAWindowServerImpl { struct __CFArray {} *x1; NSUInteger x2; } *_impl;
}

@property(readonly) NSArray *displays;
@property NSUInteger rendererFlags;

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)server;
+ (id)serverIfRunning;

- (id)init;
- (id)_init;
- (void)addDisplay:(id)arg1;
- (void)removeDisplay:(id)arg1;
- (void)removeAllDisplays;
- (id)displayWithName:(id)arg1;
- (void)_detectDisplays;
- (void)dealloc;
- (id)displays;
- (void)setRendererFlags:(NSUInteger)arg1;
- (NSUInteger)rendererFlags;
- (id)description;

@end
