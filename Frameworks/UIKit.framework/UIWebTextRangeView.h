/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray, UIWebDragDotView, UIView<UITextSelectingContainer>, <UIWebTextRangeViewController>;



@interface UIWebTextRangeView : UIView 
{
    UIView<UITextSelectingContainer> *m_container;
    NSArray *_rects;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_topDot;
    UIWebDragDotView *_bottomDot;
    BOOL _magnifying;
    <UIWebTextRangeViewController> *_controller;
}

@property(readonly) UIView<UITextSelectingContainer> *container;
@property <UIWebTextRangeViewController> *controller; /* unknown property attribute: V_controller */
@property(copy) NSArray *rects; /* unknown property attribute: V_rects */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)dealloc;
- (id)container;
- (void)removeFromSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(NSInteger)arg1;
- (id)rectViewAtIndex:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (void)updateDragDots;
- (void)updateRectViews;
- (void)setRects:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (struct CGPoint { float x1; float x2; })startCorner;
- (struct CGPoint { float x1; float x2; })endCorner;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (void)geometryChanged;
- (id)controller;
- (void)setController:(id)arg1;
- (id)rects;

@end
