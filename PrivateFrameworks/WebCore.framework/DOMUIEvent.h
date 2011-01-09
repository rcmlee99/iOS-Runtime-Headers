/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMUIEvent : DOMEvent 
{
}

@property(retain,readonly) DOMAbstractView *view;
@property(readonly) NSInteger detail;


- (id)view;
- (NSInteger)detail;
- (NSInteger)keyCode;
- (NSInteger)charCode;
- (NSInteger)layerX;
- (NSInteger)layerY;
- (NSInteger)pageX;
- (NSInteger)pageY;
- (NSInteger)which;
- (void)initUIEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(NSInteger)arg5;
- (void)initUIEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(NSInteger)arg5;

@end
