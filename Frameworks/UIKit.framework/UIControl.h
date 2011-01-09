/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UIControl : UIView 
{
    NSMutableArray *_targetActions;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousPoint;
    double _downTime;
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int delayActions : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 2; 
        unsigned int horizontalAlignment : 2; 
    } _controlFlags;
}

@property(getter=isTouchInside,readonly) BOOL touchInside;
@property(getter=isTracking,readonly) BOOL tracking;
@property(readonly) NSUInteger state;
@property NSInteger contentHorizontalAlignment;
@property NSInteger contentVerticalAlignment;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property(getter=isEnabled) BOOL enabled;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)isTracking;
- (NSUInteger)state;
- (BOOL)isTouchInside;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setContentVerticalAlignment:(NSInteger)arg1;
- (NSInteger)contentVerticalAlignment;
- (void)setContentHorizontalAlignment:(NSInteger)arg1;
- (NSInteger)contentHorizontalAlignment;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (id)allTargets;
- (NSUInteger)allControlEvents;
- (id)actionsForTarget:(id)arg1 forControlEvent:(NSUInteger)arg2;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(NSUInteger)arg1;
- (void)_unhighlight;
- (void)_sendDelayedActions:(BOOL)arg1;
- (BOOL)mouseInside;
- (void)sendAction:(SEL)arg1 toTarget:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (BOOL)shouldTrack;
- (BOOL)touchDragged;
- (void)setRequiresDisplayOnTracking:(BOOL)arg1;
- (BOOL)requiresDisplayOnTracking;
- (BOOL)hasOneOrMoreTargets;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(NSInteger)arg3;
- (void)removeTarget:(id)arg1 forEvents:(NSInteger)arg2;
- (void)setTracking:(BOOL)arg1;
- (BOOL)_hasActionForEventMask:(NSInteger)arg1;
- (void)_sendActionsForEventMask:(NSInteger)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_sendActionsForEvents:(NSInteger)arg1 withEvent:(id)arg2;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_delayActions;
- (void)_sendDelayedActions;
- (void)_cancelDelayedActions;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
