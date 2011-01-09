/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol>
{
    NSUInteger m_currentPathFlags;
    struct { 
        unsigned char pathIndex; 
        unsigned char pathIdentity; 
        unsigned char pathProximity; 
        float pathPressure; 
        float pathMajorRadius; 
        struct CGPoint { 
            float x; 
            float y; 
        } pathLocation; 
        void *pathWindow; 
    } m_activePathInfo;
    NSInteger m_shiftKeyPathIndex;
    NSInteger m_swipePathIndex;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showKeyboardType:(NSInteger)arg1 withAppearance:(NSInteger)arg2;
- (void)deactivateActiveKeys;
- (void)updateReturnKey;
- (void)updateLocalizedKeys;
- (BOOL)usesAutoShift;
- (void)setShift:(BOOL)arg1;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)shiftKeyRequiresImmediateUpdate;
- (void)longPressAction;
- (BOOL)canHandleHandEvent:(struct __GSEvent { }*)arg1;
- (BOOL)handleHandEvent:(struct __GSEvent { }*)arg1;
- (void)didClearInput;
- (id)candidateList;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)restoreDefaultsForAllKeys;
- (id)activationIndicatorView;
- (BOOL)shouldShowIndicator;
- (void)handleHardwareKeyDownFromSimulator:(struct __GSEvent { }*)arg1;
- (void)touchDown:(struct __GSEvent { }*)arg1 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; void *x7; }*)arg2;
- (void)touchDragged:(struct __GSEvent { }*)arg1 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; void *x7; }*)arg2;
- (void)touchUp:(struct __GSEvent { }*)arg1 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; void *x7; }*)arg2;
- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)phraseBoundaryDidChange;

@end
