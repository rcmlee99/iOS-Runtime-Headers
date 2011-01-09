/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;



@interface GMMDataProperties : PBCodable 
{
    BOOL _disabled;
    BOOL _hasDisabled;
    NSInteger _infoLevel;
    BOOL _hasInfoLevel;
    NSInteger _infoValue;
    BOOL _hasInfoValue;
    NSInteger _imageWidth;
    NSInteger _imageHeight;
    NSInteger _tileWidth;
    BOOL _hasTileWidth;
    NSInteger _tileHeight;
    BOOL _hasTileHeight;
    NSString *_panoId;
    NSInteger _numZoomLevels;
    BOOL _hasNumZoomLevels;
    GMMMapPoint *_latLon;
    NSString *_copyright;
    NSString *_text;
    NSString *_streetRange;
    NSInteger _maxZoomLevel;
    NSInteger _radius;
    NSInteger _imageSource;
    BOOL _hasImageSource;
}

@property(readonly) BOOL hasCopyright;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasStreetRange;
@property(readonly) BOOL hasImageSource; /* unknown property attribute: V_hasImageSource */
@property NSInteger imageSource; /* unknown property attribute: V_imageSource */
@property NSInteger radius; /* unknown property attribute: V_radius */
@property NSInteger maxZoomLevel; /* unknown property attribute: V_maxZoomLevel */
@property(retain) NSString *streetRange; /* unknown property attribute: V_streetRange */
@property(retain) NSString *text; /* unknown property attribute: V_text */
@property(retain) NSString *copyright; /* unknown property attribute: V_copyright */
@property(retain) GMMMapPoint *latLon; /* unknown property attribute: V_latLon */
@property(readonly) BOOL hasNumZoomLevels; /* unknown property attribute: V_hasNumZoomLevels */
@property NSInteger numZoomLevels; /* unknown property attribute: V_numZoomLevels */
@property(retain) NSString *panoId; /* unknown property attribute: V_panoId */
@property(readonly) BOOL hasTileHeight; /* unknown property attribute: V_hasTileHeight */
@property NSInteger tileHeight; /* unknown property attribute: V_tileHeight */
@property(readonly) BOOL hasTileWidth; /* unknown property attribute: V_hasTileWidth */
@property NSInteger tileWidth; /* unknown property attribute: V_tileWidth */
@property NSInteger imageHeight; /* unknown property attribute: V_imageHeight */
@property NSInteger imageWidth; /* unknown property attribute: V_imageWidth */
@property(readonly) BOOL hasInfoValue; /* unknown property attribute: V_hasInfoValue */
@property NSInteger infoValue; /* unknown property attribute: V_infoValue */
@property(readonly) BOOL hasInfoLevel; /* unknown property attribute: V_hasInfoLevel */
@property NSInteger infoLevel; /* unknown property attribute: V_infoLevel */
@property(readonly) BOOL hasDisabled; /* unknown property attribute: V_hasDisabled */
@property BOOL disabled; /* unknown property attribute: V_disabled */


- (id)init;
- (void)dealloc;
- (void)setDisabled:(BOOL)arg1;
- (void)setInfoLevel:(NSInteger)arg1;
- (void)setInfoValue:(NSInteger)arg1;
- (void)setTileWidth:(NSInteger)arg1;
- (void)setTileHeight:(NSInteger)arg1;
- (void)setNumZoomLevels:(NSInteger)arg1;
- (BOOL)hasCopyright;
- (BOOL)hasText;
- (BOOL)hasStreetRange;
- (void)setImageSource:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (BOOL)hasImageSource;
- (NSInteger)imageSource;
- (NSInteger)radius;
- (void)setRadius:(NSInteger)arg1;
- (NSInteger)maxZoomLevel;
- (void)setMaxZoomLevel:(NSInteger)arg1;
- (id)streetRange;
- (void)setStreetRange:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)copyright;
- (void)setCopyright:(id)arg1;
- (id)latLon;
- (void)setLatLon:(id)arg1;
- (BOOL)hasNumZoomLevels;
- (NSInteger)numZoomLevels;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (BOOL)hasTileHeight;
- (NSInteger)tileHeight;
- (BOOL)hasTileWidth;
- (NSInteger)tileWidth;
- (NSInteger)imageHeight;
- (void)setImageHeight:(NSInteger)arg1;
- (NSInteger)imageWidth;
- (void)setImageWidth:(NSInteger)arg1;
- (BOOL)hasInfoValue;
- (NSInteger)infoValue;
- (BOOL)hasInfoLevel;
- (NSInteger)infoLevel;
- (BOOL)hasDisabled;
- (BOOL)disabled;

@end
