/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, NSString, UIViewController, <UITableViewDataSource>, UIView, UITableView, UISearchBar, <UISearchDisplayDelegate>, <UITableViewDelegate>;



@interface UISearchDisplayController : NSObject 
{
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    <UISearchDisplayDelegate> *_delegate;
    <UITableViewDataSource> *_tableViewDataSource;
    <UITableViewDelegate> *_tableViewDelegate;
    struct __CFArray { } *_containingScrollViews;
    float _lastKeyboardAdjustment;
    struct { 
        unsigned int visible : 1; 
        unsigned int animating : 1; 
        unsigned int hidIndexBar : 1; 
        unsigned int hidNavigationBar : 1; 
        unsigned int noResultsMessageVisible : 1; 
        unsigned int noResultsMessageAutoDisplay : 1; 
    } _searchDisplayControllerFlags;
}

@property(getter=isActive) BOOL active;
@property BOOL noResultsMessageVisible;
@property BOOL automaticallyShowsNoResultsMessage;
@property(copy) NSString *noResultsMessage;
@property(readonly) UITableView *searchResultsTableView; /* unknown property attribute: V_tableView */
@property <UITableViewDelegate> *searchResultsDelegate; /* unknown property attribute: V_tableViewDelegate */
@property <UITableViewDataSource> *searchResultsDataSource; /* unknown property attribute: V_tableViewDataSource */
@property(readonly) UISearchBar *searchBar; /* unknown property attribute: V_searchBar */
@property(readonly) UIViewController *searchContentsController; /* unknown property attribute: V_viewController */
@property <UISearchDisplayDelegate> *delegate; /* unknown property attribute: V_delegate */


- (id)init;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_configureNewSearchBar;
- (void)setSearchBar:(id)arg1;
- (void)setSearchContentsController:(id)arg1;
- (id)_containingViewOfClass:(Class)arg1;
- (id)_containingTableView;
- (void)_destroyManagedTableView;
- (void)_disableParentScrollViews;
- (void)_enableParentScrollViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tableViewFrame;
- (void)_setTableViewVisible:(BOOL)arg1 inView:(id)arg2;
- (void)_updateSearchBarForTableViewIndexBar:(id)arg1;
- (void)_indexBarFrameChanged:(id)arg1;
- (void)showHideAnimationDidFinish;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)windowWillAnimateRotation:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(NSInteger)arg2;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)_managedTableViewDidScroll;
- (id)searchResultsTableView;
- (void)setSearchResultsDataSource:(id)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setNoResultsMessageVisible:(BOOL)arg1;
- (BOOL)noResultsMessageVisible;
- (void)setAutomaticallyShowsNoResultsMessage:(BOOL)arg1;
- (BOOL)automaticallyShowsNoResultsMessage;
- (void)setNoResultsMessage:(id)arg1;
- (id)noResultsMessage;
- (void)_clearViewController;
- (id)searchResultsDelegate;
- (id)searchResultsDataSource;
- (id)searchBar;
- (id)searchContentsController;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
