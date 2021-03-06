/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAirTunesServicePickerViewControllerDelegate>, NSArray, NSDictionary, NSString, UITableView;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_availableRoutes;
    id _delegate;
    NSDictionary *_selectedRoute;
    UITableView *_table;
}

@property(retain) NSArray * availableRoutes;
@property(copy,readonly) NSString * debugDescription;
@property <PLAirTunesServicePickerViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (long long)_indexofRouteWithRouteID:(id)arg1;
- (void)_setCell:(id)arg1 checked:(bool)arg2;
- (id)availableRoutes;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2;
- (void)loadView;
- (void)setAvailableRoutes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;

@end
