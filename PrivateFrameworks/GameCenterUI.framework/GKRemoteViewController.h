/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKGame, GKHostedViewController, NSMutableDictionary, NSString, UIColor;

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {
    id _blockToPerformAfterViewDidAppear;
    NSMutableDictionary *_dirtyProperties;
    GKGame *_game;
    GKHostedViewController *_managingViewControllerWeak;
    UIColor *_previousStatusBarColor;
    bool_didSetRemoteGame;
    bool_viewDidAppear;
}

@property(copy) id blockToPerformAfterViewDidAppear;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool didSetRemoteGame;
@property(retain) NSMutableDictionary * dirtyProperties;
@property(retain) GKGame * game;
@property(readonly) unsigned long long hash;
@property GKHostedViewController * managingViewController;
@property(retain) UIColor * previousStatusBarColor;
@property(readonly) bool serviceNeedsCurrentGame;
@property(readonly) bool serviceNeedsLocalPlayer;
@property(readonly) Class superclass;
@property bool viewDidAppear;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (long long)_desiredStatusBarStyle;
- (bool)_dismissSelfAfterGettingShouldCancel;
- (bool)_dismissSelfAfterGettingShouldFinish;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (id)blockToPerformAfterViewDidAppear;
- (void)dealloc;
- (bool)didSetRemoteGame;
- (id)dirtyProperties;
- (id)game;
- (id)managingViewController;
- (void)nudge;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (id)previousStatusBarColor;
- (void)readyToPresentInController:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (bool)serviceNeedsCurrentGame;
- (bool)serviceNeedsLocalPlayer;
- (void)setBlockToPerformAfterViewDidAppear:(id)arg1;
- (void)setDidSetRemoteGame:(bool)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setManagingViewController:(id)arg1;
- (void)setPreviousStatusBarColor:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setViewDidAppear:(bool)arg1;
- (void)setupRemoteView;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (bool)viewDidAppear;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
