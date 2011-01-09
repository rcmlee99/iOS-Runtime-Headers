/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSEntityMapping, NSError;



@interface _NSMappingModelBuilder : NSObject 
{
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}

+ (NSInteger)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(NSInteger)arg1;

- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (void)dealloc;
- (void)_resetCaches;
- (id)newInferredMappingModel:(id*)arg1;
- (BOOL)inferPropertyMappingsForEntityMapping:(id)arg1;
- (id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2;
- (BOOL)_canTransformSourceAttributeType:(NSUInteger)arg1 toDestinationAttributeType:(NSUInteger)arg2;
- (id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2;
- (id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2;

@end
