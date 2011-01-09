/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel;



@interface UIButton : UIControl <NSCoding>
{
    struct __CFDictionary { } *_contentLookup;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
    } _buttonFlags;
}

@property(retain) UIFont *font;
@property NSInteger lineBreakMode;
@property CGSize titleShadowOffset;
@property(retain) UIColor *tintColor;
@property BOOL showsTouchWhenHighlighted;
@property(readonly) NSInteger buttonType;
@property(retain,readonly) NSString *currentTitle;
@property(retain,readonly) UIColor *currentTitleColor;
@property(retain,readonly) UIColor *currentTitleShadowColor;
@property(retain,readonly) UIImage *currentImage;
@property(retain,readonly) UIImage *currentBackgroundImage;
@property(retain,readonly) UILabel *titleLabel;
@property(retain,readonly) UIImageView *imageView;
@property UIEdgeInsets imageEdgeInsets;
@property BOOL adjustsImageWhenDisabled;
@property BOOL adjustsImageWhenHighlighted;
@property BOOL reversesTitleShadowWhenHighlighted;
@property UIEdgeInsets titleEdgeInsets;
@property UIEdgeInsets contentEdgeInsets;

+ (id)_defaultContentForType:(NSInteger)arg1 andState:(NSUInteger)arg2;
+ (id)buttonWithType:(NSInteger)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (NSInteger)buttonType;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)reversesTitleShadowWhenHighlighted;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1;
- (BOOL)adjustsImageWhenHighlighted;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (BOOL)adjustsImageWhenDisabled;
- (void)setAdjustsImageWhenDisabled:(BOOL)arg1;
- (BOOL)showsTouchWhenHighlighted;
- (void)setShowsTouchWhenHighlighted:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)titleLabel;
- (id)imageView;
- (void)setContentHorizontalAlignment:(NSInteger)arg1;
- (void)setTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitleColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2;
- (id)titleForState:(NSUInteger)arg1;
- (id)titleColorForState:(NSUInteger)arg1;
- (id)titleShadowColorForState:(NSUInteger)arg1;
- (id)imageForState:(NSUInteger)arg1;
- (id)backgroundImageForState:(NSUInteger)arg1;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (id)currentImage;
- (id)currentBackgroundImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)_scriptingInfo;
- (void)_setContent:(id)arg1 forState:(NSUInteger)arg2;
- (void)_setImage:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setBackground:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setTitle:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setShadowColor:(id)arg1 forStates:(NSUInteger)arg2;
- (id)_contentForState:(NSUInteger)arg1;
- (id)_archivableContent:(id*)arg1;
- (void)_takeContentFromArchivableContent:(id)arg1 overrides:(id)arg2;
- (id)_imageForState:(NSUInteger)arg1 usesImageForNormalState:(BOOL*)arg2;
- (id)_backgroundForState:(NSUInteger)arg1 usesBackgroundForNormalState:(BOOL*)arg2;
- (id)_titleForState:(NSUInteger)arg1;
- (id)_titleColorForState:(NSUInteger)arg1;
- (id)_shadowColorForState:(NSUInteger)arg1;
- (id)tintColor;
- (void)setTintColor:(id)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)setAutosizesToFit:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })pressFeedbackPosition;
- (void)setTitle:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setTitleColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(NSUInteger)arg2;
- (id)_font;
- (void)_setFont:(id)arg1;
- (NSInteger)_lineBreakMode;
- (void)_setLineBreakMode:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })_titleShadowOffset;
- (void)_setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setupBackgroundView;
- (void)_setupImageView;
- (void)_setupTitleView;
- (void)_setButtonType:(NSInteger)arg1;
- (void)_titleAttributesChanged;
- (id)font;
- (void)setFont:(id)arg1;
- (NSInteger)lineBreakMode;
- (void)setLineBreakMode:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })titleShadowOffset;
- (void)setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
