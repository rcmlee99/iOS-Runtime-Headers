/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPDetailSlider, UIView, MPVideoViewController, MPItem, MPFullScreenTransportControls, UINavigationButton, UINavigationItem;



@interface MPFullScreenVideoOverlay : MPSwipableView 
{
    MPVideoViewController *_videoController;
    id _target;
    MPItem *_item;
    NSInteger _orientation;
    UIView *_loadingMovieIndicatorView;
    MPDetailSlider *_scrubControl;
    MPFullScreenTransportControls *_transportControls;
    UINavigationButton *_backButton;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    UINavigationButton *_scaleModeButton;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    NSUInteger _visibleParts;
    unsigned int _tvOutEnabled : 1;
    unsigned int _wantsTick : 1;
    unsigned int _allowsDetailScrubbing : 1;
}

@property BOOL TVOutEnabled;
@property BOOL allowsDetailScrubbing;
@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property MPVideoViewController *videoController; /* unknown property attribute: V_videoController */
@property(retain,readonly) MPFullScreenTransportControls *transportControls; /* unknown property attribute: V_transportControls */
@property id target; /* unknown property attribute: V_target */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property(retain,readonly) UINavigationBar *navigationBar; /* unknown property attribute: V_navigationBar */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property NSUInteger disabledParts; /* unknown property attribute: V_disabledParts */
@property NSUInteger desiredParts; /* unknown property attribute: V_desiredParts */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(NSInteger)arg2;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)reloadNavigationBarWithAnimation:(BOOL)arg1;
- (void)restoreSanity;
- (void)startTicking;
- (void)stopTicking;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setTarget:(id)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVideoController:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (BOOL)TVOutEnabled;
- (BOOL)allowsDetailScrubbing;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)_backButtonAction:(id)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_bufferingStateDidChange:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (id)_loadingMovieIndicatorView;
- (void)_initNavigationBar;
- (void)_reloadTransportControls:(BOOL)arg1;
- (id)_scrubControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateScrubControlWithAnimation:(BOOL)arg1;
- (void)_updateTimeBasedValues;
- (NSUInteger)visibleParts;
- (id)videoController;
- (id)transportControls;
- (id)target;
- (NSInteger)orientation;
- (id)navigationBar;
- (id)item;
- (NSUInteger)disabledParts;
- (NSUInteger)desiredParts;

@end
