/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, <ABPersonTableHeaderViewDelegateProtocol>, ABPersonImageView, ABCardNameControl;



@interface ABPersonTableHeaderView : UIView 
{
    ABCardNameControl *_nameView;
    ABPersonImageView *_imageView;
    UIView *_extraHeaderView;
    void *_person;
    <ABPersonTableHeaderViewDelegateProtocol> *_delegate;
}

@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIView *extraHeaderView; /* unknown property attribute: V_extraHeaderView */
@property <ABPersonTableHeaderViewDelegateProtocol> *delegate; /* unknown property attribute: V_delegate */
@property(readonly) ABPersonImageView *imageView; /* unknown property attribute: V_imageView */
@property(readonly) ABCardNameControl *nameView; /* unknown property attribute: V_nameView */
@property void *person; /* unknown property attribute: V_person */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setPerson:(void*)arg1;
- (id)alternateName;
- (void)setAlternateName:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (id)messageFont;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (void)setExtraHeaderView:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)deselectAnimated:(BOOL)arg1;
- (id)createDateMessageStringFromDates:(id)arg1 withMessageFormat:(id)arg2;
- (struct CGPoint { float x1; float x2; })extraHeaderViewOrigin;
- (void)setDates:(id)arg1 withMessageFormat:(id)arg2;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)reloadImageData;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)imageViewSelected:(id)arg1;
- (void)nameControlSelected:(id)arg1;
- (id)extraHeaderView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageView;
- (id)nameView;
- (void*)person;

@end
