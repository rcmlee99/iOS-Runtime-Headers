/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMTableStyle, WMTableColumnInfo, WMBordersProperty, WDTable;



@interface WMTableMapper : CMMapper 
{
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}


- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (void)dealloc;
- (id)insideBorders;
- (id)columnInfo;
- (void)setInsideBorders:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)createColumnInfo;
- (id)createStopArrayForRow:(NSUInteger)arg1;

@end
