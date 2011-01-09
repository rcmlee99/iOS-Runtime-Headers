/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMLocation : NSObject 
{
    NSInteger _responseCode;
    struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; } *_point;
    NSInteger _accuracy;
    NSInteger _confidence;
    NSString *_geo_string;
}

@property NSInteger responseCode;
@property MapPoint *point;
@property NSInteger accuracy;
@property NSInteger confidence;
@property(retain) NSString *geo_string;


- (NSInteger)responseCode;
- (void)setResponseCode:(NSInteger)arg1;
- (struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)point;
- (void)setPoint:(struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;
- (NSInteger)accuracy;
- (void)setAccuracy:(NSInteger)arg1;
- (NSInteger)confidence;
- (void)setConfidence:(NSInteger)arg1;
- (id)geo_string;
- (void)setGeo_string:(id)arg1;
- (void)dealloc;

@end
