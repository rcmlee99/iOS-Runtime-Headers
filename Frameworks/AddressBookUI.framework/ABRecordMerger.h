/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABRecordMerger : NSObject 
{
}


- (BOOL)mergeSingleValueProperty:(NSInteger)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
- (void)addValue:(void*)arg1 withProperty:(NSInteger)arg2 toExistingValues:(struct __CFSet { }*)arg3;
- (BOOL)addMultiValueEntry:(void*)arg1 atIndex:(NSUInteger)arg2 toMultiValue:(void*)arg3 withProperty:(NSInteger)arg4 existingValues:(struct __CFSet { }*)arg5;
- (BOOL)mergeMultiValueProperty:(NSInteger)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
- (void)mergeVCardRecord:(void*)arg1 withProperties:(struct __CFArray { }*)arg2 intoRecord:(void*)arg3;

@end
