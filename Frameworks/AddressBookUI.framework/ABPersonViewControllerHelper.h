/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource, NSString, ABModel, UIViewController, <ABPersonNameDisplayChangeDelegate>;



@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPropertyPickerViewControllerDelegate, ABPropertyEditorViewControllerDelegate, UIActionSheetDelegate>
{
    UIViewController *_viewController;
    NSInteger _lastKnownOrientation;
    <ABPersonNameDisplayChangeDelegate> *_nameDisplayChangeDelegate;
    id _imagePicker;
    id _deletionDelegate;
    id _actionSheetDelegate;
    BOOL _animatedRight;
    BOOL _automaticallySetEditing;
    BOOL _allowsAddingToAddressBook;
    BOOL _showsCancelButton;
    BOOL _shouldAddToAddressBookWhenPropertyIsSaved;
    void *_addressBook;
    void *_displayedPerson;
    struct __CFDictionary { } *_valueByProperty;
    ABModel *_model;
    ABPersonTableViewDataSource *_personTableViewDataSource;
    BOOL _isLocation;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageBody;
    NSString *_shareMessageSubject;
}

@property(readonly) UIViewController *viewController;
@property void *addressBook;
@property void *displayedPerson;
@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property BOOL allowsCardEditing;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsSharing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsRingtone;
@property(readonly) UIView *viewForActionSheet;
@property(getter=isPartiallyFilled,readonly) BOOL partiallyFilled;
@property(readonly) ABPersonTableViewDataSource *personTableViewDataSource;
@property(retain) UIView *personHeaderView;
@property(readonly) NSString *attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(copy) NSString *shareMessageSubject; /* unknown property attribute: V_shareMessageSubject */
@property(copy) NSString *shareMessageBody; /* unknown property attribute: V_shareMessageBody */
@property BOOL shareMessageBodyIsHTML; /* unknown property attribute: V_shareMessageBodyIsHTML */
@property <ABPersonNameDisplayChangeDelegate> *nameDisplayChangeDelegate; /* unknown property attribute: V_nameDisplayChangeDelegate */
@property(retain) ABModel *model; /* unknown property attribute: V_model */
@property BOOL isLocation; /* unknown property attribute: V_isLocation */
@property BOOL shouldAddToAddressBookWhenPropertyIsSaved; /* unknown property attribute: V_shouldAddToAddressBookWhenPropertyIsSaved */
@property BOOL showsCancelButton; /* unknown property attribute: V_showsCancelButton */
@property BOOL allowsAddingToAddressBook; /* unknown property attribute: V_allowsAddingToAddressBook */
@property BOOL automaticallySetEditing; /* unknown property attribute: V_automaticallySetEditing */


- (id)initWithViewController:(id)arg1;
- (void)dealloc;
- (id)viewController;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (id)personTableViewDataSource;
- (BOOL)isPartiallyFilled;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (id)alternateName;
- (void)setAlternateName:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (id)messageFont;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (void)setDates:(id)arg1 withMessageFormat:(id)arg2;
- (void)setAllowsActions:(BOOL)arg1;
- (BOOL)allowsActions;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (BOOL)allowsCardEditing;
- (BOOL)allowsRingtone;
- (void)setAllowsRingtone:(BOOL)arg1;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)reloadData;
- (void)reloadImageData;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (id)attribution;
- (BOOL)isAttributionEnabled;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (id)unknownPersonViewDelegate;
- (id)personViewDelegate;
- (void)getVCardData:(id*)arg1 fileName:(id*)arg2;
- (BOOL)loadFrameworkAtPath:(id)arg1 andStoreHandle:(void**)arg2 bundle:(id*)arg3;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)presentShareContactViewController:(id)arg1;
- (void)dismissModalViewControllerForMail:(id)arg1;
- (id)vCardFileName;
- (void)shareContactByEmail:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (void)shareContactByTextMessage:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)shareContact:(id)arg1;
- (id)viewForActionSheet;
- (void)pushViewController:(id)arg1;
- (void)viewDidUnload;
- (id)prepareViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowActions:(BOOL)arg3;
- (void)loadUnknownViewWithPerson:(void*)arg1 allowActions:(BOOL)arg2;
- (void)loadViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowDeletion:(BOOL)arg3 allowActions:(BOOL)arg4;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)cancel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)addPersonToAddressBookIfNeeded;
- (void)propertyEditorViewController:(id)arg1 confirmedAfterEditingName:(BOOL)arg2;
- (void)propertyEditorViewController:(id)arg1 confirmed:(BOOL)arg2 afterEditingProperty:(NSInteger)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showRingtonePicker;
- (void)ringtonePicker:(id)arg1 selectedRingtoneWithIdentifier:(id)arg2;
- (void)remove;
- (void)removeRecord:(void*)arg1;
- (void)deleteSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void*)selectedPerson;
- (id)cardController;
- (id)personImageView;
- (void)imagePickerWillBeShown:(id)arg1;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)tearDownImagePickerController;
- (void)showImageMenu;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowCardForPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (BOOL)shouldShowAddToExistingContact;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)perfomActionAtIndex:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 property:(NSInteger)arg4;
- (void)perfomActionAtIndex:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedNameForEditing:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (void)pushPropertyEditorForProperty:(NSInteger)arg1 identifier:(NSInteger)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedAddValueInPropertyGroup:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedSetRingtoneForEditing:(BOOL)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddOptionalProperties:(struct __CFArray { }*)arg2;
- (void)propertyPicker:(id)arg1 selectedProperty:(NSInteger)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedDeletePerson:(void*)arg2;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (id)shareMessageSubject;
- (void)setShareMessageSubject:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBody:(id)arg1;
- (BOOL)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (id)nameDisplayChangeDelegate;
- (void)setNameDisplayChangeDelegate:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (BOOL)isLocation;
- (void)setIsLocation:(BOOL)arg1;
- (BOOL)shouldAddToAddressBookWhenPropertyIsSaved;
- (void)setShouldAddToAddressBookWhenPropertyIsSaved:(BOOL)arg1;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1;
- (BOOL)allowsAddingToAddressBook;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (BOOL)automaticallySetEditing;
- (void)setAutomaticallySetEditing:(BOOL)arg1;

@end
