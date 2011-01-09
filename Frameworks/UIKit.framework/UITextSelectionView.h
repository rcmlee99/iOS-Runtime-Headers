/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextRangeView, UIView<UITextSelectingContainer>, NSTimer;



@interface UITextSelectionView : UIView 
{
    UIView<UITextSelectingContainer> *m_view;
    NSInteger m_state;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretNeedsColorUpdate;
    BOOL m_caretShowingNow;
    BOOL m_selectionChanging;
    BOOL m_showRangedSelection;
    BOOL m_visible;
}

@property(readonly) BOOL selectionCommandsShowing;
@property(readonly) UITextRangeView *rangeView;
@property BOOL showRangedSelection; /* unknown property attribute: Vm_showRangedSelection */
@property BOOL visible; /* unknown property attribute: Vm_visible */
@property(readonly) UIView<UITextSelectingContainer> *view; /* unknown property attribute: Vm_view */
@property(readonly) NSInteger state; /* unknown property attribute: Vm_state */
@property(readonly) UIView *caretView; /* unknown property attribute: Vm_caretView */
@property BOOL caretBlinks; /* unknown property attribute: Vm_caretBlinks */


- (id)initWithView:(id)arg1;
- (void)dealloc;
- (void)detach;
- (void)activate;
- (void)deactivate;
- (void)selectionWillScroll:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (void)removeFromSuperview;
- (void)clearRange;
- (void)install;
- (id)convertedSelectionRects;
- (void)updateSelection;
- (void)updateSelectionDots;
- (void)setVisible:(BOOL)arg1;
- (BOOL)visible;
- (void)setCaretBlinks:(BOOL)arg1;
- (BOOL)caretBlinks;
- (void)cancelDelayedSelectionCommandRequests;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)showSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)hideSelectionCommands;
- (BOOL)selectionCommandsShowing;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)clearCaret;
- (void)hideCaret:(NSInteger)arg1;
- (void)showCaret:(NSInteger)arg1;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)clearCaretBlinkTimer;
- (void)touchCaretBlinkTimer;
- (void)startCaretBlinkIfNeeded;
- (id)caretView;
- (id)rangeView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (void)prepareForMagnification;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)doneMagnifying;
- (void)scaleWillChange;
- (void)scaleDidChange;
- (void)willRotate;
- (void)didRotate;
- (void)updateBaseIsStartWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)scrollView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showRangedSelection;
- (void)setShowRangedSelection:(BOOL)arg1;
- (id)view;
- (NSInteger)state;

@end
