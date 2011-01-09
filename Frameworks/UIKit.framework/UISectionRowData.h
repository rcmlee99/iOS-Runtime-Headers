/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UISectionRowData : NSObject <NSCopying>
{
    BOOL _valid;
    float _headerHeight;
    float _footerHeight;
    float _headerOffset;
    float _footerOffset;
    NSInteger _numRows;
    NSInteger _arrayLength;
    float *_rowHeights;
    float *_rowOffsets;
    float _sectionHeight;
    BOOL _sectionOffsetValid;
    float _sectionOffset;
}


- (void)dealloc;
- (void)invalidate;
- (void)invalidateSectionOffset;
- (float)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 isHeader:(BOOL)arg3;
- (void)addOffset:(float)arg1 fromRow:(NSInteger)arg2;
- (void)setHeight:(float)arg1 forRow:(NSInteger)arg2;
- (float)_defaultSectionHeaderHeightForSection:(NSInteger)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_defaultSectionFooterHeightForSection:(NSInteger)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (void)refreshWithSection:(NSInteger)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (void)insertRowAtIndex:(NSInteger)arg1 inSection:(NSInteger)arg2 rowHeight:(float)arg3 tableViewRowData:(id)arg4;
- (void)deleteRowAtIndex:(NSInteger)arg1;
- (NSInteger)sectionLocationForRow:(NSInteger)arg1;
- (NSInteger)sectionLocationForReorderedRow:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
