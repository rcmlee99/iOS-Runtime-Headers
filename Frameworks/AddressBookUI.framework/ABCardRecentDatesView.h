/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSMutableArray;



@interface ABCardRecentDatesView : UIView 
{
    NSMutableDictionary *_timeByDay;
    NSMutableArray *_orderedDays;
    BOOL _recomputeFrameToFit;
    float _dayRightOffset;
    float _timeLeftOffset;
    float _fontSize;
}

+ (id)fontWithSize:(float)arg1 asDayFont:(BOOL)arg2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)computeDayRightOffset:(float*)arg1 timeLeftOffset:(float*)arg2 fontSize:(float*)arg3;
- (float)timeBoxWidthForTimeLeftOffset:(float)arg1;
- (float)lineHeightForFontSize:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameToFit;
- (void)sizeToFit;
- (void)setDates:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
