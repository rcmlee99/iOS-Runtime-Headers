/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod> {
}

@property int endSecondsSinceMidnight;
@property int startSecondsSinceMidnight;

+ (id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rangePeriod;

- (void)setStartSecondsSinceMidnight:(int)arg1;
- (int)startSecondsSinceMidnight;
- (void)setEndSecondsSinceMidnight:(int)arg1;
- (int)endSecondsSinceMidnight;
- (id)encodedClassName;
- (id)groupIdentifier;

@end