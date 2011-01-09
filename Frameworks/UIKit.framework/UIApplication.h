/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, NSArray, <UIApplicationDelegate>, NSMutableSet, UIEvent;



@interface UIApplication : UIResponder <UIActionSheetDelegate>
{
    <UIApplicationDelegate> *_delegate;
    struct __CFDictionary { } *_touchMap;
    NSMutableSet *_exclusiveTouchWindows;
    UIEvent *_touchesEvent;
    UIEvent *_motionEvent;
    NSArray *_topLevelNibObjects;
    NSInteger _orientation;
    NSInteger _networkResourcesCurrentlyLoadingCount;
    NSTimer *_hideNetworkActivityIndicatorTimer;
    struct { 
        unsigned int isActive : 1; 
        unsigned int isSuspended : 1; 
        unsigned int isSuspendedEventsOnly : 1; 
        unsigned int isLaunchedSuspended : 1; 
        unsigned int isHandlingURL : 1; 
        unsigned int isHandlingRemoteNotification : 1; 
        unsigned int statusBarMode : 8; 
        unsigned int statusBarShowsProgress : 1; 
        unsigned int blockInteractionEvents : 4; 
        unsigned int forceExit : 1; 
        unsigned int receivesMemoryWarnings : 1; 
        unsigned int showingProgress : 1; 
        unsigned int receivesPowerMessages : 1; 
        unsigned int launchEventReceived : 1; 
        unsigned int isAnimatingSuspensionOrResumption : 1; 
        unsigned int isSuspendedUnderLock : 1; 
        unsigned int shouldExitAfterSendSuspend : 1; 
        unsigned int terminating : 1; 
        unsigned int isHandlingShortCutURL : 1; 
        unsigned int idleTimerDisabled : 1; 
        unsigned int statusBarStyle : 4; 
        unsigned int statusBarHidden : 1; 
        unsigned int statusBarOrientation : 3; 
        unsigned int deviceOrientation : 3; 
        unsigned int delegateShouldBeReleasedUponSet : 1; 
        unsigned int delegateHandleOpenURL : 1; 
        unsigned int delegateDidReceiveMemoryWarning : 1; 
        unsigned int delegateWillTerminate : 1; 
        unsigned int delegateSignificantTimeChange : 1; 
        unsigned int delegateWillChangeInterfaceOrientation : 1; 
        unsigned int delegateDidChangeInterfaceOrientation : 1; 
        unsigned int delegateWillChangeStatusBarFrame : 1; 
        unsigned int delegateDidChangeStatusBarFrame : 1; 
        unsigned int delegateDeviceAccelerated : 1; 
        unsigned int delegateDeviceChangedOrientation : 1; 
        unsigned int delegateDidBecomeActive : 1; 
        unsigned int delegateWillResignActive : 1; 
        unsigned int idleTimerDisableActive : 1; 
        unsigned int userDefaultsSyncDisabled : 1; 
        unsigned int doubleHeightMode : 4; 
        unsigned int headsetButtonClickCount : 4; 
        unsigned int disableViewGroupOpacity : 1; 
        unsigned int disableViewEdgeAntialiasing : 1; 
        unsigned int shakeToEdit : 1; 
        unsigned int editWindowIsVisible : 1; 
    } _applicationFlags;
}

@property(getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;
@property <UIApplicationDelegate> *delegate;
@property(getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property(readonly) UIWindow *keyWindow;
@property(readonly) NSArray *windows;
@property(getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property NSInteger statusBarStyle;
@property(getter=isStatusBarHidden) BOOL statusBarHidden;
@property NSInteger statusBarOrientation;
@property(readonly) double statusBarOrientationAnimationDuration;
@property(readonly) CGRect statusBarFrame;
@property NSInteger applicationIconBadgeNumber;
@property BOOL applicationSupportsShakeToEdit;

+ (id)sharedApplication;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)shouldMakeUIForDefaultPNG;
+ (void)_startWindowServerIfNecessary;
+ (BOOL)isRunningEventPump;
+ (BOOL)registerForSystemEvents;
+ (BOOL)rendersLocally;
+ (id)stringForStatusBarStyle:(NSInteger)arg1;
+ (NSInteger)statusBarStyleForString:(id)arg1;
+ (NSInteger)interfaceOrientationForString:(id)arg1;
+ (id)stringForInterfaceOrientation:(NSInteger)arg1;
+ (id)pickerBundle;
+ (void)setPickerBundle:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)shouldLaunchSafe;
- (BOOL)firstLaunchAfterBoot;
- (void)_setDelegate:(id)arg1 assumeOwnership:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (BOOL)isIgnoringInteractionEvents;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (BOOL)isIdleTimerDisabled;
- (BOOL)_isActivated;
- (void)_setActivated:(BOOL)arg1;
- (void)_performInitializationWithURL:(id)arg1 sourceBundleID:(id)arg2;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString { }*)arg1;
- (void)_run;
- (void)_reportAppLaunchFinished;
- (void)_runWithURL:(id)arg1 sourceBundleID:(id)arg2;
- (void)_registerForDoubleHeightModeChangeNotification;
- (void)_registerForAlertItemStateChangeNotification;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_registerForLanguageChangedNotification;
- (void)_registerForLocaleChangedNotification;
- (void)_registerForTimeChangedNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_unregisterForLanguageChangedNotification;
- (void)_unregisterForLocaleChangedNotification;
- (void)_unregisterForTimeChangedNotification;
- (void)_loadMainNibFile;
- (void)pushRunLoopMode:(id)arg1;
- (void)popRunLoopMode:(id)arg1;
- (void)sendAction:(SEL)arg1 fromSender:(id)arg2 toTarget:(id)arg3 forEvent:(struct __GSEvent { }*)arg4;
- (BOOL)sendAction:(SEL)arg1 toTarget:(id)arg2 fromSender:(id)arg3 forEvent:(id)arg4;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
- (BOOL)isNetworkActivityIndicatorVisible;
- (void)_setStatusBarStyle:(NSInteger)arg1 orientation:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)setStatusBarStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (NSInteger)statusBarStyle;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)isStatusBarHidden;
- (void)setStatusBarOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1;
- (NSInteger)statusBarOrientation;
- (double)statusBarOrientationAnimationDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_statusBarFrameForMode:(NSInteger)arg1 orientation:(NSInteger)arg2;
- (void)_setDoubleHeightMode:(NSInteger)arg1;
- (void)setDoubleHeightMode:(NSInteger)arg1 glowAnimationEnabled:(BOOL)arg2;
- (void)setDoubleHeightMode:(NSInteger)arg1;
- (NSInteger)doubleHeightMode;
- (void)setDoubleHeightPrefixText:(id)arg1;
- (void)setDoubleHeightStatusText:(id)arg1;
- (void)applicationWillSuspend;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillSuspendUnderLock;
- (void)applicationDidBeginSuspendAnimation;
- (void)applicationDidEndResumeAnimation;
- (void)applicationDidResumeFromUnderLock;
- (void)applicationDidResume;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillTerminate;
- (void)_setSuspended:(BOOL)arg1;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (void)_setSuspendedEventsOnly:(BOOL)arg1;
- (void)_setSuspendedUnderLock:(BOOL)arg1;
- (BOOL)isAnimatingSuspensionOrResumption;
- (BOOL)_isLaunchedSuspended;
- (void)suspend;
- (void)suspendReturningToLastApp:(BOOL)arg1;
- (NSUInteger)_portForEvent:(struct __GSEvent { }*)arg1;
- (void)applicationSuspended:(struct __GSEvent { }*)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent { }*)arg1;
- (void)applicationExited:(struct __GSEvent { }*)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent { }*)arg1;
- (void)lockButtonDown:(struct __GSEvent { }*)arg1;
- (void)lockButtonUp:(struct __GSEvent { }*)arg1;
- (void)headsetButtonDown:(struct __GSEvent { }*)arg1;
- (void)headsetButtonUp:(struct __GSEvent { }*)arg1;
- (void)menuButtonDown:(struct __GSEvent { }*)arg1;
- (void)menuButtonUp:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseDown:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseDragged:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseUp:(struct __GSEvent { }*)arg1;
- (void)ringerChanged:(NSInteger)arg1;
- (void)volumeChanged:(struct __GSEvent { }*)arg1;
- (void)acceleratedInX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)deviceOrientationChanged:(struct __GSEvent { }*)arg1;
- (void)proximityStateChanged:(BOOL)arg1;
- (void)accessoryAvailabilityChanged:(struct __GSEvent { }*)arg1;
- (void)_handleAccessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (void)accessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (void)accessoryEvent:(struct __GSEvent { }*)arg1;
- (void)handleOutOfLineDataResponse:(id)arg1 requestID:(NSUInteger)arg2;
- (void)handleOutOfLineDataRequest:(struct __GSEvent { }*)arg1;
- (void)lockDevice:(struct __GSEvent { }*)arg1;
- (void)quitTopApplication:(struct __GSEvent { }*)arg1;
- (void)resetIdleDuration:(double)arg1;
- (void)resetIdleTimer;
- (NSUInteger)simpleRemoteRoutingPriority;
- (void)setSimpleRemoteRoutingPriority:(NSUInteger)arg1;
- (void)_postSimpleRemoteNotificationForAction:(NSInteger)arg1;
- (void)_handleHeadsetButtonUp:(struct __GSEvent { }*)arg1;
- (void)_handleHeadsetButtonClick;
- (void)_handleHeadsetButtonDoubleClick;
- (void)_handleHeadsetButtonTripleClick;
- (void)_terminateWithStatus:(NSInteger)arg1;
- (void)terminateWithSuccess;
- (void)applicationSuspend:(struct __GSEvent { }*)arg1;
- (void)_sendApplicationSuspend:(struct __GSEvent { }*)arg1;
- (void)updateSuspendedSettings:(id)arg1;
- (void)applicationResume:(struct __GSEvent { }*)arg1;
- (id)roleID;
- (id)displayIdentifier;
- (BOOL)_canOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
- (void)applicationOpenToShortCut:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent { }*)arg2;
- (BOOL)isHandlingOpenShortCut;
- (void)_setHandlingURL:(BOOL)arg1 url:(id)arg2;
- (BOOL)isHandlingURL;
- (BOOL)isHandlingRemoteNotification;
- (void)showTTYPromptForNumber:(id)arg1 withID:(NSInteger)arg2;
- (void)showNetworkPromptsIfNecessary:(BOOL)arg1;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (BOOL)usesBackgroundNetwork;
- (id)userHomeDirectory;
- (id)userLibraryDirectory;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationSnapshotRectForOrientation:(NSInteger)arg1;
- (struct CGImage { }*)_createDefaultImageSnapshot;
- (void)_writeApplicationDefaultPNGSnapshot;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)pathToDefaultImageNamed:(id)arg1;
- (void)_updateDefaultImage;
- (void)prepareForDefaultImageSnapshot;
- (void)removeDefaultImage:(id)arg1;
- (BOOL)_isInteractionEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isTouchEvent:(struct __GSEvent { }*)arg1;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (void)_runSpringboardCommand:(id)arg1;
- (void)addStatusBarImageNamed:(id)arg1 removeOnExit:(BOOL)arg2;
- (void)addStatusBarImageNamed:(id)arg1;
- (void)removeStatusBarImageNamed:(id)arg1;
- (void)setApplicationBadgeString:(id)arg1;
- (NSInteger)applicationIconBadgeNumber;
- (void)setApplicationIconBadgeNumber:(NSInteger)arg1;
- (BOOL)applicationSupportsShakeToEdit;
- (void)setApplicationSupportsShakeToEdit:(BOOL)arg1;
- (void)addWebClipToHomeScreen:(id)arg1;
- (BOOL)homeScreenCanAddIcons;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarRect;
- (void)_fetchInfoPlistFlags;
- (NSInteger)orientation;
- (NSInteger)statusBarMode;
- (void)_setStatusBarMode:(NSInteger)arg1;
- (NSInteger)_frontMostAppOrientation;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_touchMap;
- (id)_touchesEvent;
- (id)_motionEvent;
- (void)_sendMotionBegan:(NSInteger)arg1;
- (void)_sendMotionEnded:(NSInteger)arg1;
- (void)_sendMotionCancelled:(NSInteger)arg1;
- (void)_showEditAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)motionEnded:(NSInteger)arg1 withEvent:(id)arg2;
- (id)_exclusiveTouchWindows;
- (BOOL)_isTrackingAnyTouch;
- (void)_setUserDefaultsSyncEnabled:(BOOL)arg1;
- (void)_prepareToSetStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3;
- (void)_finishedSettingStatusBarMode:(NSInteger)arg1 oldMode:(NSInteger)arg2 newOrientation:(NSInteger)arg3 oldOrientation:(NSInteger)arg4;
- (BOOL)_useDoubleHeightStatusBarForMode:(NSInteger)arg1 orientation:(NSInteger)arg2;
- (float)currentStatusBarHeightForMode:(NSInteger)arg1 orientation:(NSInteger)arg2;
- (NSInteger)_getCurrentStatusBarOrientationFromSB;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5 startTime:(double)arg6;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3;
- (void)setStatusBarMode:(NSInteger)arg1 duration:(float)arg2;
- (void)setStatusBarCustomText:(id)arg1;
- (void)removeStatusBarCustomText;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (void)setStatusBarShowsProgress:(BOOL)arg1;
- (BOOL)_usesEmoji;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)ignoresInteractionEvents;
- (NSUInteger)blockInteractionEventsCount;
- (void)significantTimeChange;
- (void)batteryStatusDidChange:(id)arg1;
- (void)_handleUserDefaultsDidChange:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_clearTouchesForView:(id)arg1;
- (void)_cancelCurrentTouchEvent;
- (void)_registerForUserDefaultsChanges;
- (void)_unregisterForUserDefaultsChanges;
- (void)vibrateForDuration:(NSInteger)arg1;
- (void)setBacklightFactor:(NSInteger)arg1;
- (void)setBacklightLevel:(float)arg1;
- (void)setProximitySensorEnabled:(BOOL)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)_dumpUIHierarchy:(struct __GSEvent { }*)arg1;
- (void)_dumpScreenContents:(struct __GSEvent { }*)arg1;
- (void)_processScriptEvent:(struct __GSEvent { }*)arg1;
- (void)_performMemoryWarning;
- (void)didReceiveMemoryWarning;
- (void)didReceiveUrgentMemoryWarningSuspendedAndWillTerminate;
- (void)_receivedMemoryNotification;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;
- (void)_registerForDisplayOnOff;
- (void)_unregisterForDisplayOnOff;
- (void)didTurnOnDisplay;
- (void)didTurnOffDisplay;
- (void)_noteStatusBarHeightChanged:(float)arg1 fence:(NSInteger)arg2;
- (void)statusBarWillAnimateToHeight:(float)arg1 duration:(double)arg2 fence:(NSInteger)arg3;
- (void)_purgeSharedInstances;
- (void)_playbackTimerCallback:(id)arg1;
- (void)_startPlaybackTimer;
- (void)_addRecorder:(id)arg1;
- (void)_removeRecorder:(id)arg1;
- (void)_playbackEvents:(id)arg1 atPlaybackRate:(float)arg2 messageWhenDone:(id)arg3 withSelector:(SEL)arg4;
- (NSInteger)lastEventType;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_cancelGestureRecognizersForView:(id)arg1;
- (void)_cancelTouches:(id)arg1 withEvent:(id)arg2 sendingTouchesCancelled:(BOOL)arg3 includingGestures:(BOOL)arg4;
- (void)_cancelAllTouches;
- (void)_cancelEvent:(id)arg1 forWindow:(id)arg2;
- (void)_cancelEvent:(id)arg1;
- (BOOL)_shouldHandleTestURL:(id)arg1;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 withNewEvent:(id)arg2;
- (void)sendEvent:(id)arg1;
- (id)keyWindow;
- (id)windows;
- (void)setUIOrientation:(NSInteger)arg1;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)setRelaunchesAfterAbnormalExit:(BOOL)arg1;
- (void)applicationWillOrderInContext:(NSUInteger)arg1 windowLevel:(float)arg2 windowOutput:(NSInteger)arg3;
- (void)applicationDidOrderOutContext:(NSUInteger)arg1;
- (void)_sendOrderedOutContexts;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(NSInteger*)arg1;
- (void)willDismissMiniAlert:(NSInteger*)arg1 andShowAnother:(BOOL)arg2;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (BOOL)isLocked;
- (BOOL)isPasscodeRequiredToUnlock;
- (void)requestDeviceUnlock;
- (BOOL)canShowAlerts;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (NSInteger)alertOrientation;
- (void)runModal:(id)arg1;
- (void)stopModal;
- (BOOL)_supportsShakesWhenNotActive;
- (NSInteger)enabledRemoteNotificationTypes;
- (void)registerForRemoteNotificationTypes:(NSInteger)arg1;
- (void)unregisterForRemoteNotifications;
- (BOOL)_isViewGroupOpacityDisabled;
- (BOOL)_isViewEdgeAntialiasingDisabled;
- (void)_hideNetworkActivityIndicator;
- (void)_beginShowingNetworkActivityIndicator;
- (void)_endShowingNetworkActivityIndicator;
- (void)setProximitySensingEnabled:(BOOL)arg1;
- (BOOL)isProximitySensingEnabled;
- (BOOL)launchedToTest;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (BOOL)reportApplicationSuspended;
- (id)_pathForFrameworkName:(id)arg1 inPrivate:(BOOL)arg2;
- (void*)_getSymbol:(id)arg1 forFramework:(id)arg2;
- (BOOL)isRunningTest;
- (void)startedTest:(id)arg1;
- (void)_reportResults:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)finishedTest:(id)arg1;
- (void)failedTest:(id)arg1;
- (BOOL)handleTestURL:(id)arg1;
- (void)startCHUDRecording:(id)arg1;
- (void)stopCHUDRecording;
- (void)enableFramebufferStatisticsGathering;
- (void)_leak;
- (void)startLeaking;
- (void)stopLeaking;
- (void)_alertSheetStackChanged;
- (BOOL)_accessibilityCaptureSimulatorEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_accessibilitySettingsLoaderPresent;
- (id)_accessibilitySettingsBundle;
- (void)_updateAccessibilityItunesSettings;
- (void)_updateAccessibilitySettingsLoader;
- (BOOL)_accessibilityApplicationIsSystemWideServer;
- (Class)_accessibilityBundlePrincipalClass;
- (void)_updateApplicationAccessibility;
- (void)_accessibilityInit;
- (void)_accessibilityStatusChanged:(id)arg1;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)endRemoteSheet:(id)arg1;
- (void)endRemoteSheet:(id)arg1 returnCode:(NSInteger)arg2;
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)arg1;
- (BOOL)isSuspendedForAnyReason;
- (void)setDelaySuspend:(BOOL)arg1;
- (BOOL)_accessibilityIsSystemWideServer;
- (BOOL)composeReviewWithURL:(id)arg1 itemIdentifier:(unsigned long long)arg2 assetType:(NSInteger)arg3;
- (BOOL)enterAccountFlowWithURL:(id)arg1 style:(NSInteger)arg2 continuationData:(id)arg3;
- (BOOL)gotoStoreURL:(id)arg1 withAuthentication:(BOOL)arg2;
- (BOOL)matchesClientApplication:(id)arg1;
- (BOOL)openExternalURL:(id)arg1;
- (BOOL)popTopViewController;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (BOOL)sendActionForDialog:(id)arg1 button:(id)arg2;
- (BOOL)showCodeEntryWithCode:(id)arg1 url:(id)arg2;
- (BOOL)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;

@end
