/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADColor : NSObject <NSCopying>
{
    NSMutableArray *mTransforms;
}

+ (id)nsColorWithOADColor:(id)arg1;
+ (id)_applyTransforms:(id)arg1 toColor:(id)arg2;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3;
+ (NSInteger)mapSchemeColorID:(NSInteger)arg1 colorMap:(id)arg2;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addTransform:(id)arg1;
- (void)dealloc;
- (id)transforms;
- (void)setTransforms:(id)arg1;
- (void)addTransformOfType:(NSInteger)arg1;
- (void)addTransformOfType:(NSInteger)arg1 value:(float)arg2;
- (id)colorForStyleColor:(id)arg1;

@end
