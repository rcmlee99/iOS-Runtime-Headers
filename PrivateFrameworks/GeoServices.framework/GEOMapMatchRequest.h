/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying> {
    NSMutableArray *_locations;
    NSMutableArray *_waypoints;
}

@property(retain) NSMutableArray * locations;
@property(retain) NSMutableArray * waypoints;

- (void)addLocation:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)clearLocations;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setLocations:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypointAtIndex:(unsigned long long)arg1;
- (id)waypoints;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end
