/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UINavigationController, UIViewController, UIView, UITabBar, NSMutableArray, <UITabBarControllerDelegate>;



@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    NSMutableArray *_viewControllers;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UINavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    <UITabBarControllerDelegate> *_delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
    } _tabBarControllerFlags;
}

@property(copy) NSArray *viewControllers;
@property UIViewController *selectedViewController;
@property NSUInteger selectedIndex;
@property(readonly) UINavigationController *moreNavigationController;
@property(readonly) UITabBar *tabBar;
@property <UITabBarControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(copy) NSArray *customizableViewControllers; /* unknown property attribute: V_customizableViewControllers */


- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)_prepareTabBar;
- (void)setTabBar:(id)arg1;
- (void)loadView;
- (void)_ensureSelectedViewControllerIsDisplayed;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)updateTabBarItemForViewController:(id)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (id)viewControllers;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)_selectedViewControllerInTabBar;
- (id)selectedViewController;
- (NSUInteger)selectedIndex;
- (BOOL)_allowSelectionWithinMoreList;
- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (BOOL)_allowsCustomizing;
- (id)_existingMoreNavigationController;
- (id)moreNavigationController;
- (id)customizableViewControllers;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)beginCustomizingTabBar:(id)arg1;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (BOOL)_isBarHidden;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)hideBarWithTransition:(NSInteger)arg1;
- (void)showBarWithTransition:(NSInteger)arg1;
- (id)allViewControllers;
- (id)_viewControllersInTabBar;
- (id)tabBar;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_tabBarItemClicked:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_transitionView;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(NSInteger)arg3 shouldSetSelected:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (id)transientViewController;
- (void)setTransientViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)concealTabBarSelection;
- (void)revealTabBarSelection;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (BOOL)showsEditButtonOnLeft;
- (BOOL)_allowsAutorotation;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(NSInteger)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterView;
- (BOOL)_shouldUseOnePartRotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedNavigationController;

@end
