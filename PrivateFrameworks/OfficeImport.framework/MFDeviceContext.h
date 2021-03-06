/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSObject<MFDeviceDriver>, OITSUColor;

@interface MFDeviceContext : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    boolm_textUpdateCP;
    int m_arcDirection;
    OITSUColor *m_bkColour;
    int m_bkMode;
    MFBrush *m_brush;
    } m_brushOrg;
    NSObject<MFDeviceDriver> *m_driver;
    MFFont *m_font;
    double m_miterLimit;
    MFPath *m_path;
    MFPen *m_pen;
    } m_penPos;
    int m_polyFillMode;
    int m_rop2;
    MFPalette *m_selectedPalette;
    int m_stretchMode;
    int m_textBreakCount;
    int m_textBreakExtra;
    int m_textCharExtra;
    OITSUColor *m_textColour;
    int m_textDirection;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    MFTransform *m_transform;
}

+ (id)deviceContextWithDriver:(id)arg1;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)getArcDirection;
- (id)getBkColour;
- (int)getBkMode;
- (id)getBrush;
- (struct CGPoint { double x1; double x2; })getBrushOrg;
- (id)getCurrentTransform;
- (id)getFont;
- (double)getMiterLimit;
- (id)getPath;
- (id)getPen;
- (struct CGPoint { double x1; double x2; })getPenPosition;
- (int)getPolyFillMode;
- (int)getRop2;
- (id)getSelectedPalette;
- (int)getStretchBltMode;
- (int)getTextBreakCount;
- (int)getTextBreakExtra;
- (int)getTextCharExtra;
- (id)getTextColour;
- (int)getTextDirection;
- (int)getTextHorizontalAlign;
- (bool)getTextUpdateCP;
- (int)getTextVerticalAlign;
- (id)initWithDriver:(id)arg1;
- (void)setArcDirection:(int)arg1;
- (void)setBkColour:(id)arg1;
- (void)setBkMode:(int)arg1;
- (void)setBrush:(id)arg1;
- (void)setBrushOrg:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentTransform:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(id)arg1;
- (void)setPen:(id)arg1;
- (void)setPenPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPolyFillMode:(int)arg1;
- (void)setRop2:(int)arg1;
- (void)setSelectedPalette:(id)arg1;
- (void)setStretchBltMode:(int)arg1;
- (void)setTextCharExtra:(int)arg1;
- (void)setTextColour:(id)arg1;
- (void)setTextDirection:(int)arg1;
- (void)setTextHorizontalAlign:(int)arg1;
- (void)setTextJustification:(int)arg1 :(int)arg2;
- (void)setTextUpdateCP:(bool)arg1;
- (void)setTextVerticalAlign:(int)arg1;

@end
