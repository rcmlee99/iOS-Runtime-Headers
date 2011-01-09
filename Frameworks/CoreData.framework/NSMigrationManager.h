/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSMappingModel, NSDictionary, NSMigrationContext, NSError, NSManagedObjectContext;



@interface NSMigrationManager : NSObject 
{
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags { 
        unsigned int _migrationWasCancelled : 1; 
        unsigned int _reservedMigrationManager : 31; 
    } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

+ (NSInteger)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(NSInteger)arg1;
+ (BOOL)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3;

- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (void)dealloc;
- (BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (void)reset;
- (id)mappingModel;
- (id)sourceModel;
- (id)destinationModel;
- (id)sourceContext;
- (id)destinationContext;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)currentEntityMapping;
- (id)currentPropertyMapping;
- (float)migrationProgress;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)cancelMigrationWithError:(id)arg1;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(BOOL)arg3;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (id)_migrationContext;
- (id)_mappingNamed:(id)arg1;
- (id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2;
- (BOOL)_doFirstPassForMapping:(id)arg1 error:(id*)arg2;
- (BOOL)_doSecondPassForMapping:(id)arg1 error:(id*)arg2;
- (BOOL)_doThirdPassForMapping:(id)arg1 error:(id*)arg2;
- (void)_doCleanupOnFailure:(id)arg1;
- (BOOL)_validateAllObjectsAfterMigration:(id*)arg1;

@end
