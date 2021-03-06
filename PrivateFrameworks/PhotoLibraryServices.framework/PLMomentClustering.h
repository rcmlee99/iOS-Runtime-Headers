/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLGeocoder, NSArray, NSMutableDictionary, NSSet, PLMomentNodeCache;

@interface PLMomentClustering : NSObject {
    NSMutableDictionary *__clustersByNodeObjectID;
    NSMutableDictionary *__clustersByObjectID;
    CLGeocoder *__geocoder;
    NSMutableDictionary *__markedNodesByObjectID;
    unsigned long long __minimumNumberOfNodes;
    PLMomentNodeCache *__nodeCache;
    unsigned long long __numberOfVisitedNodes;
    unsigned long long __totalNumberOfNodes;
    double _accumulationJoinThreshold;
    double _accumulationRejectionThreshold;
    double _accumulationRejectionTimeInterval;
    unsigned long long _accumulationSize;
    double _accumulationTimeInterval;
    NSArray *_clusters;
    NSSet *_deletedClusters;
    NSSet *_insertedClusters;
    id _progressBlock;
    double _sigma;
    double _spatialJoinThreshold;
    double _spatialJoinTimeInterval;
    double _theta;
    NSSet *_updatedClusters;
    bool_accumulatesSmallClusters;
    bool_dirty;
    bool_shouldApplyUserInfluenceBeforeClustering;
    bool_spatialJoinsAdjacentClusters;
}

@property(readonly) NSMutableDictionary * _clustersByNodeObjectID;
@property(readonly) NSMutableDictionary * _clustersByObjectID;
@property(readonly) CLGeocoder * _geocoder;
@property(readonly) NSMutableDictionary * _markedNodesByObjectID;
@property(setter=_setMinimumNumberOfNodes:) unsigned long long _minimumNumberOfNodes;
@property(readonly) PLMomentNodeCache * _nodeCache;
@property(setter=_setNumberOfVisitedNodes:) unsigned long long _numberOfVisitedNodes;
@property(setter=_setTotalNumberOfNodes:) unsigned long long _totalNumberOfNodes;
@property bool accumulatesSmallClusters;
@property double accumulationJoinThreshold;
@property double accumulationRejectionThreshold;
@property double accumulationRejectionTimeInterval;
@property unsigned long long accumulationSize;
@property double accumulationTimeInterval;
@property(copy) NSArray * clusters;
@property(copy) NSSet * deletedClusters;
@property(getter=isDirty,setter=_setDirty:) bool dirty;
@property(readonly) bool hasMarkedNodes;
@property(copy) NSSet * insertedClusters;
@property(copy) id progressBlock;
@property bool shouldApplyUserInfluenceBeforeClustering;
@property double sigma;
@property double spatialJoinThreshold;
@property double spatialJoinTimeInterval;
@property bool spatialJoinsAdjacentClusters;
@property double theta;
@property(copy) NSSet * updatedClusters;

+ (double)maximumClusterTime;

- (id)_clustersByMergingUserInfluencedClusters:(id)arg1;
- (id)_clustersByNodeObjectID;
- (id)_clustersByObjectID;
- (id)_clustersBySplittingUserInfluencedClusters:(id)arg1;
- (void)_commonPLMomentClusteringManagerInitialization;
- (id)_geocoder;
- (id)_markedNodesByObjectID;
- (unsigned long long)_minimumNumberOfNodes;
- (id)_nodeCache;
- (unsigned long long)_numberOfVisitedNodes;
- (void)_setClusters:(id)arg1;
- (void)_setDeletedClusters:(id)arg1;
- (void)_setDirty:(bool)arg1;
- (void)_setInsertedClusters:(id)arg1;
- (void)_setMinimumNumberOfNodes:(unsigned long long)arg1;
- (void)_setNumberOfVisitedNodes:(unsigned long long)arg1;
- (void)_setTotalNumberOfNodes:(unsigned long long)arg1;
- (void)_setUpdatedClusters:(id)arg1;
- (unsigned long long)_totalNumberOfNodes;
- (id)accumulateSmallClustersFromClusters:(id)arg1;
- (bool)accumulatesSmallClusters;
- (double)accumulationJoinThreshold;
- (double)accumulationRejectionThreshold;
- (double)accumulationRejectionTimeInterval;
- (unsigned long long)accumulationSize;
- (double)accumulationTimeInterval;
- (id)clusters;
- (id)clustersByApplyingUserInfluenceToClusters:(id)arg1;
- (id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3;
- (void)dealloc;
- (id)deletedClusters;
- (void)generateClustersForAssets:(id)arg1 withCompletionBlock:(id)arg2;
- (id)generateClustersForAssets:(id)arg1;
- (bool)hasMarkedNodes;
- (id)init;
- (id)initWithManagedMoments:(id)arg1;
- (id)insertedClusters;
- (bool)isDirty;
- (void)markNodeForDiagnosis:(id)arg1;
- (id)neighborsOfNode:(id)arg1;
- (id)neighborsOfTaggedNode:(id)arg1;
- (id)progressBlock;
- (void)setAccumulatesSmallClusters:(bool)arg1;
- (void)setAccumulationJoinThreshold:(double)arg1;
- (void)setAccumulationRejectionThreshold:(double)arg1;
- (void)setAccumulationRejectionTimeInterval:(double)arg1;
- (void)setAccumulationSize:(unsigned long long)arg1;
- (void)setAccumulationTimeInterval:(double)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setShouldApplyUserInfluenceBeforeClustering:(bool)arg1;
- (void)setSigma:(double)arg1;
- (void)setSpatialJoinThreshold:(double)arg1;
- (void)setSpatialJoinTimeInterval:(double)arg1;
- (void)setSpatialJoinsAdjacentClusters:(bool)arg1;
- (void)setTheta:(double)arg1;
- (bool)shouldApplyUserInfluenceBeforeClustering;
- (double)sigma;
- (id)spatialJoinClustersFromClusters:(id)arg1;
- (double)spatialJoinThreshold;
- (double)spatialJoinTimeInterval;
- (bool)spatialJoinsAdjacentClusters;
- (id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2;
- (double)theta;
- (id)updatedClusters;

@end
