/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;



@interface UIEventObservableWindow : UIWindow 
{
    NSMutableArray *_eventObservers;
    NSInteger _pendingMouseUpCount;
    unsigned int _deallocating : 1;
    unsigned int _forceAutoRotateDisabled : 1;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)addEventMonitor:(id)arg1;
- (void)removeEventActivityMonitor:(id)arg1;
- (NSInteger)pendingMouseUpCount;
- (void)_postWillSendEvent:(struct __GSEvent { }*)arg1;
- (void)sendEvent:(id)arg1;
- (void)forciblyDisableAutorotate;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;

@end
