/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, UITouch, NSMutableIndexSet, UILongPressGestureRecognizer, NSIndexSet, <PLThumbnailTableCellDelegate>;



@interface PLThumbnailTableCell : UITableViewCell 
{
    NSMutableArray *_slideImages;
    struct CGImage { } *_cgImage;
    UITouch *_touchForTracking;
    NSIndexSet *_highlightedIndexesBeforeTracking;
    NSMutableIndexSet *_highlightedIndexes;
    NSMutableArray *_highlightedViews;
    NSInteger _thumbnailSelectionStyle;
    UILongPressGestureRecognizer *_recognizer;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _canShowCutCallout : 1;
    unsigned int _couldShowCopyCallout : 1;
    <PLThumbnailTableCellDelegate> *_delegate;
}

@property NSInteger thumbnailSelectionStyle;
@property(readonly) NSArray *photos;
@property(copy) NSIndexSet *selectedPhotoIndexes;
@property(readonly) MLPhoto *selectedPhoto;
@property(readonly) NSArray *selectedPhotos;
@property BOOL canShowCopyCallout;
@property BOOL canShowCutCallout;
@property <PLThumbnailTableCellDelegate> *delegate; /* unknown property attribute: V_delegate */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)photos;
- (void)setSelectedPhotoIndexes:(id)arg1;
- (id)selectedPhotoIndexes;
- (id)selectedPhoto;
- (id)selectedPhotos;
- (id)slideImageAtIndex:(NSUInteger)arg1;
- (void)setSlideImage:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (NSInteger)thumbnailSelectionStyle;
- (void)setThumbnailSelectionStyle:(NSInteger)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (BOOL)canShowCopyCallout;
- (void)setCanShowCutCallout:(BOOL)arg1;
- (BOOL)canShowCutCallout;
- (void)_notifySelectionStateChanged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_canDrawContent;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)addItemsToPasteboard;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_setSelected:(BOOL)arg1;
- (void)_updateSelectedColumnAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_isMultipleSelectionEnabled;
- (BOOL)canBecomeFirstResponder;
- (void)_longPressRecognized:(id)arg1;
- (void)_hideCopyCallout;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
