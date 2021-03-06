/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIKeyboardCandidate, UIKBKeyView, UIMorphingLabel, UIView;

@interface UIKeyboardPredictionCell : UIView {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _activeFrame;
    } _baseFrame;
    } _collapsedFrame;
    TIKeyboardCandidate *_prediction;
    int _state;
    bool_isAutocorrection;
    bool_isCenter;
    bool_isLongCandidate;
    bool_isTypedString;
    boolm_lightKeyboard;
    UIKBKeyView *m_activeKeyView;
    UIKBKeyView *m_enabledKeyView;
    } m_keyViewSize;
    UIMorphingLabel *m_label;
    UIView *m_maskView;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } baseFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property bool isAutocorrection;
@property bool isCenter;
@property bool isLongCandidate;
@property bool isTypedString;
@property(retain,readonly) TIKeyboardCandidate * prediction;
@property int state;

+ (id)initKeyViewWithSize:(struct CGSize { double x1; double x2; })arg1 state:(int)arg2 needsBackground:(bool)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })baseFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAutocorrection;
- (bool)isCenter;
- (bool)isLongCandidate;
- (bool)isTypedString;
- (id)label;
- (id)prediction;
- (void)scrollLabelWithText:(id)arg1 force:(bool)arg2;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCellAttributes;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsAutocorrection:(bool)arg1;
- (void)setIsCenter:(bool)arg1;
- (void)setIsLongCandidate:(bool)arg1;
- (void)setIsTypedString:(bool)arg1;
- (void)setState:(int)arg1 withText:(id)arg2;
- (void)setState:(int)arg1;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(bool)arg3;
- (void)setVisibleRect;
- (int)state;
- (id)textColor;
- (void)touchMoved:(double)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
