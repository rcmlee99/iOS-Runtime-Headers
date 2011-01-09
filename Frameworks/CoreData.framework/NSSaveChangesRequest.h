/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSSet;



@interface NSSaveChangesRequest : NSPersistentStoreRequest 
{
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    NSArray *_changedObjectIDs;
    BOOL _suppressNotification;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)insertedObjects;
- (void)setInsertedObjects:(id)arg1;
- (id)updatedObjects;
- (void)setUpdatedObjects:(id)arg1;
- (id)deletedObjects;
- (void)setDeletedObjects:(id)arg1;
- (id)lockedObjects;
- (void)setLockedObjects:(id)arg1;
- (BOOL)hasChanges;
- (id)_changedObjectIDs;
- (void)_setChangedObjectIDs:(id)arg1;
- (BOOL)_suppressNotification;
- (void)_setSuppressNotification:(BOOL)arg1;
- (NSUInteger)requestType;

@end
