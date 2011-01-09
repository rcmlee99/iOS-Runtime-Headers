/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIColor;



@interface SUTableHeaderView : UIView 
{
    NSInteger _index;
    NSString *_subtitle;
    UIColor *_shadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _subtitleSize;
    UIColor *_textColor;
    NSString *_title;
}

@property(retain) NSString *title; /* unknown property attribute: V_title */
@property(retain) UIColor *textColor; /* unknown property attribute: V_textColor */
@property(retain) NSString *subtitle; /* unknown property attribute: V_subtitle */
@property(retain) UIColor *shadowColor; /* unknown property attribute: V_shadowColor */
@property NSInteger index; /* unknown property attribute: V_index */


- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)sizeToFit;
- (void)setIndex:(NSInteger)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })_subtitleSize;
- (id)title;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)subtitle;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (NSInteger)index;

@end
