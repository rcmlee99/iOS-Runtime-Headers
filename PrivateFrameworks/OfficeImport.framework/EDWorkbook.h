/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ECMappingContext, NSString, OADTheme, OADDrawingGroup, OCDSummary, NSMutableArray, EDProcessors, EPTokenConverter, EDResources;



@interface EDWorkbook : NSObject 
{
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EPTokenConverter *mCachedTokenConverter;
    EPTokenConverter *mCachedUnsupportedTokenConverter;
    NSString *mFileName;
    NSMutableArray *mSheets;
    NSUInteger mDateBase;
    NSUInteger mRealSheetCount;
    OADDrawingGroup *mDrawingGroup;
    OADTheme *mTheme;
    OCDSummary *mSummary;
}


- (id)init;
- (id)initWithStringOptimization:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: @12@0:4B8 */

- (id)initWithFileName:(id)arg1;
- (void)dealloc;
- (id)resources;
- (void)addOtherResources:(id)arg1;
- (id)workbookName;
- (id)fileName;
- (NSUInteger)dateBase;
- (void)setDateBase:(NSUInteger)arg1;
- (NSUInteger)sheetCount;
- (id)sheetAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfSheet:(id)arg1;
- (NSUInteger)indexOfSheetWithName:(id)arg1;
- (void)addSheet:(id)arg1;
- (void)insertSheet:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setRealSheetCount:(NSUInteger)arg1;
- (NSUInteger)realSheetCount;
- (id)mappingContext;
- (void)setMappingContext:(id)arg1;
- (id)processors;
- (void)applyProcessors;
- (id)drawingGroup;
- (id)theme;
- (id)summary;
- (void)removeWorksheetAtIndex:(NSUInteger)arg1;
- (id)cachedTokenConverter;
- (void)setCachedTokenConverter:(id)arg1;
- (id)cachedUnsupportedTokenConverter;
- (void)setCachedUnsupportedTokenConverter:(id)arg1;

@end
