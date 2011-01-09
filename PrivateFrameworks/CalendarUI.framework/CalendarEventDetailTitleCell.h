/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;



@interface CalendarEventDetailTitleCell : CalendarEventDetailCell 
{
    UITextLabel *_titleView;
    UITextLabel *_locationView;
    UITextLabel *_dateView;
    UITextLabel *_timeView;
    UITextLabel *_recurrenceView;
    UITextLabel *_statusView;
    NSUInteger _visibleItems;
}


- (id)initWithEditModel:(id)arg1;
- (void)dealloc;
- (BOOL)setEditModel:(id)arg1;
- (id)_titleView;
- (id)_locationView;
- (id)_dateView;
- (id)_timeView;
- (id)_recurrenceView;
- (id)_statusView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;

@end
