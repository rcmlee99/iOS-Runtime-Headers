/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UILabel, UIColor, NSString, UIFont;

@interface ABUILabelWithPlaceholder : UIView  {
    UILabel *_label;
    BOOL _isPlaceholderActive;
    NSString *_placeholder;
    NSString *_actualText;
    UIColor *_actualTextColor;
}

@property(copy) NSString * text;
@property(copy) NSString * placeholder;
@property(retain) UIColor * textColor;
@property UIColor * highlightedTextColor;
@property UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property UIFont * font;


- (void)dealloc;
- (id)label;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)setPlaceholder:(id)arg1;
- (id)shadowColor;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (id)placeholder;
- (id)text;
- (void)sizeToFit;
- (id)font;
- (void)setFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)labelLeftEdgeInset;
- (void)_setActualText:(id)arg1;
- (void)_setActualTextColor:(id)arg1;

@end