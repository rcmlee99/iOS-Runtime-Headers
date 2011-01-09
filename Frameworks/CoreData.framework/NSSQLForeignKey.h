/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLToOne;



@interface NSSQLForeignKey : NSSQLColumn 
{
    NSSQLToOne *_toOne;
}


- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)toOneRelationship;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:(id)arg1;

@end
