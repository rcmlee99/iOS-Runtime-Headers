/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSFastEnumeration, NSSecureCoding> {
    NSMutableDictionary *_localResources;
    NSMutableArray *_records;
}

@property(readonly) NSArray * records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (id)_initWithRecords:(id)arg1;
- (void)_setRecords:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)cplFullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)records;
- (void)sortBatch;
- (id)summaryDescription;

@end
