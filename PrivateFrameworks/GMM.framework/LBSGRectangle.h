/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLatLng;



@interface LBSGRectangle : PBCodable 
{
    LBSGLatLng *_lowerLeft;
    LBSGLatLng *_upperRight;
}

@property(retain) LBSGLatLng *upperRight; /* unknown property attribute: V_upperRight */
@property(retain) LBSGLatLng *lowerLeft; /* unknown property attribute: V_lowerLeft */


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)upperRight;
- (void)setUpperRight:(id)arg1;
- (id)lowerLeft;
- (void)setLowerLeft:(id)arg1;

@end
