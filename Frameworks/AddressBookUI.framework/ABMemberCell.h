/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;



@interface ABMemberCell : UITableViewCell 
{
    void *_member;
    NSArray *_namePieces;
    NSInteger _highlightIndex;
    BOOL _isGroup;
}


- (void)dealloc;
- (void)setNamePieces:(id)arg1;
- (void)setHighlightIndex:(long)arg1;
- (void*)member;
- (void)setMember:(void*)arg1;
- (void)setGroup:(BOOL)arg1;
- (id)groupName;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)description;
- (id)_scriptingInfo;

@end
