/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;



@interface OADSolidFill : OADFill 
{
    OADColor *mColor;
    BOOL mIsColorOverridden;
    float mAlpha;
    BOOL mIsAlphaOverridden;
}

+ (id)defaultProperties;
+ (id)whiteFill;
+ (id)blackFill;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)isColorOverridden;
- (float)alpha;
- (void)setAlpha:(float)arg1;
- (void)setStyleColor:(id)arg1;

@end
