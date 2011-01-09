/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UITableView, NSArray, UINavigationController;



@interface CKLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id _delegate;
    UINavigationController *_navigationController;
    NSArray *_linkProps;
    UITableView *_table;
}


- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLinkProperties:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
