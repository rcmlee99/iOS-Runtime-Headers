/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, UITableView;



@interface ABCardPropertyPicker : UIView <UITableViewDataSource, UITableViewDelegate>
{
    struct __CFArray { } *_properties;
    UITableView *_tableView;
    NSArray *_allProperties;
    id _delegate;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
