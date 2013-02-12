/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBPushDataProviderFactory>, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface BBServer : NSObject <XPCProxyTarget> {
    NSMutableSet *_bannerObservers;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_clearedSections;
    NSMutableDictionary *_dataProvidersBySection;
    int _demo_lockscreen_token;
    NSMutableArray *_expiringBulletinIDs;
    NSMutableArray *_interruptingBulletinIDs;
    NSMutableDictionary *_listBulletinIDsBySectionID;
    NSMutableSet *_listObservers;
    NSMutableSet *_lockscreenObservers;
    NSMutableSet *_modalAlertObservers;
    NSDate *_nextScheduledFireDate;
    NSMutableSet *_observers;
    <BBPushDataProviderFactory> *_pushDataProviderFactory;
    NSMutableSet *_pushDataProviders;
    NSMutableDictionary *_sectionInfoByID;
    unsigned int _sectionOrderRule;
    NSMutableDictionary *_sectionParametersByID;
    NSMutableDictionary *_sectionSortDescriptorsByID;
    NSMutableSet *_settingsGateways;
    NSMutableSet *_settingsObservers;
    NSMutableArray *_sortedSectionIDs;
    NSMutableSet *_soundObservers;
    struct dispatch_source_s { } *_timer;
    NSMutableDictionary *_transactionsByObserver;
}

+ (void)initialize;

- (void)_addBulletin:(id)arg1;
- (void)_addDataProvider:(id)arg1 sortSectionsNow:(BOOL)arg2;
- (void)_addInterruptingBulletin:(id)arg1;
- (void)_addObserverWithConnection:(struct _xpc_connection_s { }*)arg1;
- (void)_addPushDataProvider:(id)arg1 sortNowAndNotifyObservers:(BOOL)arg2;
- (void)_addSettingsGatewayWithConnection:(struct _xpc_connection_s { }*)arg1;
- (id)_allBulletinsForSectionID:(id)arg1;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (void)_clearSection:(id)arg1;
- (void)_clearTimer;
- (id)_clearedInfoForSectionID:(id)arg1;
- (id)_clearedSectionsPath;
- (id)_copyDefaultEnabledWeeAppIDs;
- (unsigned int)_countForSectionID:(id)arg1;
- (id)_currentTransactionForObserver:(id)arg1 bulletinID:(id)arg2;
- (id)_dataDirectoryPath;
- (id)_defaultSectionInfoForDataProvider:(id)arg1;
- (void)_ensureDataDirectoryExists;
- (void)_expireBulletins;
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;
- (void)_expireInterruptions;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(int)arg2;
- (unsigned int)_filtersForSectionID:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemSleep;
- (void)_handleSystemWake;
- (unsigned int)_incrementedTransactionIDForObserver:(id)arg1 bulletinID:(id)arg2;
- (unsigned int)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_interruptingBulletinIDsForFeeds:(unsigned int)arg1;
- (id)_listBulletinsForSectionID:(id)arg1;
- (void)_loadAllDataProviderPluginBundles;
- (void)_loadAllWeeAppSections;
- (void)_loadClearedSections;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)_loadDataProvidersAndSettings;
- (void)_loadSavedSectionInfo;
- (void)_modifyBulletin:(id)arg1;
- (id)_nextExpireBulletinsDate;
- (id)_nextExpireInterruptionsDate;
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)arg1;
- (id)_observersForFeeds:(unsigned int)arg1;
- (void)_publishBulletinRequest:(id)arg1 forDataProvider:(id)arg2 forDestinations:(int)arg3;
- (void)_publishBulletinsForAllDataProviders;
- (void)_readSavedSectionOrder:(id*)arg1 andRule:(unsigned int*)arg2;
- (id)_removalsForListSection:(id)arg1 addition:(id)arg2 keepAddition:(BOOL*)arg3;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2;
- (void)_removeBulletin:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_removePushDataProvider:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_removeSettingsGateway:(id)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)_sectionInfoArray:(BOOL)arg1;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_sendUpdateSectionInfo:(id)arg1;
- (void)_sendUpdateSectionOrder;
- (void)_sendUpdateSectionOrderRule;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_sortSectionIDsUsingDefaultOrder;
- (void)_sortSectionIDsUsingGuideArray:(id)arg1;
- (void)_updateBulletinsForDataProvider:(id)arg1;
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updatePushSettingsForPushDataProvider:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_writeClearedSections;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (void)dealloc;
- (void)deliverResponse:(id)arg1;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (id)init;
- (unsigned int)listBulletinCapForSectionID:(id)arg1;
- (id)listBulletinIDsForSectionID:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned int)arg3;
- (void)observer:(id)arg1 getRecentUnacknowledgedBulletinsForFeeds:(unsigned int)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 requestListBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)publishBulletin:(id)arg1 destinations:(int)arg2;
- (void)publishBulletinRequest:(id)arg1 destinations:(int)arg2;
- (void)removeBulletinID:(id)arg1 fromListSection:(id)arg2;
- (void)settingsGateway:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 setOrderedSectionIDs:(id)arg2;
- (void)settingsGateway:(id)arg1 setSectionInfo:(id)arg2 forSectionID:(id)arg3;
- (void)settingsGateway:(id)arg1 setSectionOrderRule:(unsigned int)arg2;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (void)updateListSection:(id)arg1 withBulletinRequests:(id)arg2;
- (void)withdrawBulletinID:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;

@end