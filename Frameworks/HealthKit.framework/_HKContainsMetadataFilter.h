/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter {
    NSSet *_allowedValues;
}

@property(readonly) NSSet * allowedValues;

+ (bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 values:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned long long)arg3;
- (bool)acceptsDataObject:(id)arg1;
- (id)allowedValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
