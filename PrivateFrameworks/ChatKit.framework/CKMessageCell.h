/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKBalloonView, UIButton;



@interface CKMessageCell : UITableViewCell 
{
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

@property(retain) id replacementMessageBubbleData; /* unknown property attribute: V_replacementMessageBubbleData */
@property(readonly) CKBalloonView *balloonView; /* unknown property attribute: V_balloonView */

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;

- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_multiselectBackgroundColor;
- (void)addBalloonView:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;
- (void)_failPressed:(id)arg1;
- (void)didTapBalloon:(id)arg1;
- (void)_resetBalloonFrame;
- (void)prepareForReuse;
- (id)replacementMessageBubbleData;
- (void)setReplacementMessageBubbleData:(id)arg1;
- (id)balloonView;

@end
