/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface PXLegacyText : NSObject 
{
}

+ (struct PptTxMasterStyleAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; short x7; struct ChVector<PptParaProperty*> { struct PptParaProperty {} **x_8_1_1; struct PptParaProperty {} **x_8_1_2; NSUInteger x_8_1_3; NSUInteger x_8_1_4; NSUInteger x_8_1_5; } x8; struct ChVector<PptCharProperty*> { struct PptCharProperty {} **x_9_1_1; struct PptCharProperty {} **x_9_1_2; NSUInteger x_9_1_3; NSUInteger x_9_1_4; NSUInteger x_9_1_5; } x9; void*x10; short x11; }*)textMasterStyleOfType:(NSInteger)arg1 state:(id)arg2;
     /* Encoded args for previous method: ^{PptTxMasterStyleAtom=^^?S{EshHeader=iIsSC}^^?iBs{ChVector<PptParaProperty*>=^^{PptParaProperty}^^{PptParaProperty}III}{ChVector<PptCharProperty*>=^^{PptCharProperty}^^{PptCharProperty}III}Bs}16@0:4i8@12 */

+ (void)readLegacyTextGlobalsFromData:(id)arg1 state:(id)arg2;
+ (void)readLegacyTextFromData:(id)arg1 toShape:(id)arg2 state:(id)arg3;


@end
