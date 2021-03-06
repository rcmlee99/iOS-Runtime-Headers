/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BLAlert, BLAlertAction, BLAlertViewController, NSArray, NSString;

@interface BLAlert : NSObject <BLAlertViewControllerDelegate, UIAlertViewDelegate> {
    NSArray *_actions;
    BLAlertViewController *_alertView;
    BLAlertAction *_cancelAction;
    id _conditionBlock;
    id _context;
    id _executionBlock;
    int _options;
    BLAlert *_strongSelf;
    bool_showing;
}

@property(copy) id conditionBlock;
@property(retain) id context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) BLAlert * strongSelf;
@property(readonly) Class superclass;

+ (id)pendingAlerts;
+ (void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3;
+ (id)popPendingAlert;
+ (void)pushPendingAlert:(id)arg1;

- (void).cxx_destruct;
- (void)alertViewController:(id)arg1 didPressButtonAtIndex:(long long)arg2;
- (void)cancelDelayedHide;
- (id)conditionBlock;
- (id)context;
- (void)dealloc;
- (void)hide:(bool)arg1;
- (void)hide;
- (void)hideWithCompletionBlock:(id)arg1;
- (void)hideWithDelay:(double)arg1 completionBlock:(id)arg2;
- (void)hideWithDelay:(double)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5;
- (bool)isShowing;
- (void)setConditionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (void)showPendingAlertIfNeeded;
- (void)showWithExecutionBlock:(id)arg1;
- (id)strongSelf;
- (bool)wantSingular;

@end
