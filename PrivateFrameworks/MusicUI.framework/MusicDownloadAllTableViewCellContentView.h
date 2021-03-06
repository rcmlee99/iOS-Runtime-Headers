/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, SKUIItemOfferButton, UILabel;

@interface MusicDownloadAllTableViewCellContentView : MusicTableViewCellContentView <SKUIItemOfferButtonDelegate> {
    long long _downloadableSongCount;
    SKUIItemOfferButton *_itemOfferButton;
    UILabel *_titleLabel;
    bool_downloadAllCellForArtist;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isDownloadAllCellForArtist) bool downloadAllCellForArtist;
@property long long downloadableSongCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1 withEvent:(id)arg2;
- (void)_updateDownloadStateViews;
- (void)dealloc;
- (long long)downloadableSongCount;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDownloadAllCellForArtist;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)setDownloadAllCellForArtist:(bool)arg1;
- (void)setDownloadableSongCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
