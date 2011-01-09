/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class NSMutableArray, CalendarModel, UIScroller, UITextLabel;



@interface CalendarDayAllDayView : UIView 
{
    NSMutableArray *_occurrenceViews;
    UITextLabel *_allDay;
    UIScroller *_scroller;
    CalendarModel *_model;
    float _occurrenceInset;
    float _occurrenceWidth;
    id _delegate;
    NSUInteger _allowSelection;
    NSUInteger _showSelection;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
- (void)setModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOccurrenceWidth:(float)arg1;
- (void)setOccurrences:(id)arg1;
- (void)didMoveToWindow;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setShowSelection:(BOOL)arg1;
- (void)calendarDayOccurrenceViewClicked:(id)arg1;

@end
