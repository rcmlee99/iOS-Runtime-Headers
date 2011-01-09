/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, UIView, CKContentEntryBridge, CKTextContentView;



@interface CKContentEntryView : UIScrollView <CKEntryField, UITextContentViewDelegate, CKContentEntryBridgeClient>
{
    NSMutableArray *_contentViews;
    CKTextContentView *_subjectView;
    CKTextContentView *_activeView;
    UIView *_subjectLine;
    CKContentEntryBridge *_bridge;
    unsigned int _showsSubject : 1;
    unsigned int _viewsLoaded : 1;
    id _entryFieldDelegate;
    BOOL _needsScrollToVisible;
}

@property BOOL showsSubject;
@property(readonly) NSArray *contentViews; /* unknown property attribute: V_contentViews */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_scrollViewAnimationEnded;
- (void)updateCandidateDisplay;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (BOOL)showsSubject;
- (void)setShowsSubject:(BOOL)arg1;
- (void)showSubjectLinesAndDefaultText:(BOOL)arg1;
- (void)tapGesture:(id)arg1;
- (void)resetKeyboardDelegate:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentViewShouldBeginEditing:(id)arg1;
- (void)textContentViewDidBeginEditing:(id)arg1;
- (BOOL)textContentViewShouldEndEditing:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (id)supportedPasteboardTypesInTextContentView:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (void)attachmentsDidChange;
- (void)reflowContent;
- (void)setContentHidden:(BOOL)arg1 subjectHidden:(BOOL)arg2;
- (void)setEntryFieldDelegate:(id)arg1;
- (id)entryFieldDelegate;
- (void)clearMessage;
- (BOOL)hasContent;
- (void)setMessageComposition:(id)arg1;
- (id)messageComposition;
- (void)setMessageParts:(id)arg1;
- (id)messageParts;
- (void)insertMessagePart:(id)arg1;
- (void)moveCursorToEnd;
- (void)setCursorPosition:(NSInteger)arg1;
- (NSInteger)cursorPosition;
- (NSInteger)lastCursorPosition;
- (void)saveCursorPosition;
- (void)restoreCursorPosition;
- (void)makeActive;
- (BOOL)isActive;
- (void)disableEditing;
- (void)setIgnoreAnimations:(BOOL)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)loadSubviews;
- (id)attachments;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_addContentView:(id)arg1;
- (void)_reloadEntryViewsIfLoaded;
- (void)_removeContentView:(id)arg1;
- (void)_loadEntryViews;
- (void)_adjustAllContent;
- (void)_setupGestureRecognizers;
- (BOOL)canPasteObject:(id)arg1;
- (id)contentViews;

@end
