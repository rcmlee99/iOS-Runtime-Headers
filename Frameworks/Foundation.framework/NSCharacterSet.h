/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)controlCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)illegalCharacterSet;
+ (id)symbolCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)CJKCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)wordBreakCharacterSet;

- (unsigned long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)init;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)invertedSet;
- (BOOL)isEmpty;
- (NSUInteger)count;
- (BOOL)isMutable;
- (void)makeImmutable;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)bitmapRepresentation;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_retainedBitmapRepresentation;

@end
