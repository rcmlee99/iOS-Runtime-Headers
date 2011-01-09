/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSArray, NSDictionary, ABModel;



@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    ABModel *_model;
    NSArray *_accountIdentifiers;
    NSArray *_accountDisplayNames;
    NSArray *_accountDisplayTypes;
    NSDictionary *_groupsByAccountIdentifier;
    NSMutableDictionary *_headerViewsBySection;
}

@property(retain) ABModel *model; /* unknown property attribute: V_model */


- (id)init;
- (void)dealloc;
- (id)defaultGroupWrapper;
- (void)reloadData;
- (NSInteger)preferredTableViewStyle;
- (id)groupWrapperForIndexPath:(id)arg1;
- (id)indexPathForGroupWrapper:(id)arg1;
- (id)accountGroupWrappers;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)model;
- (void)setModel:(id)arg1;

@end
