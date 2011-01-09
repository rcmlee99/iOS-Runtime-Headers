/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSString;



@interface ABVCardParameter : NSObject 
{
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}


- (id)initWithName:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)setValue:(id)arg1;
- (void)addType:(id)arg1;
- (void)addTypes:(id)arg1;
- (id)types;
- (id)name;
- (void)setGrouping:(id)arg1;
- (id)grouping;
- (id)value;
- (BOOL)isPrimary;
- (void)setIsPrimary:(BOOL)arg1;
- (id)description;

@end
