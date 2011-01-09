/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;



@interface ABModelRecord : NSObject 
{
    void *_record;
    NSInteger _highlightIndex;
    BOOL _isGroup;
    NSArray *_namePieces;
}


- (id)initWithRecord:(void*)arg1 highlightIndex:(long)arg2 group:(BOOL)arg3 namePieces:(id)arg4;
- (void)dealloc;
- (void*)record;
- (long)highlightIndex;
- (BOOL)isGroup;
- (id)namePieces;

@end
