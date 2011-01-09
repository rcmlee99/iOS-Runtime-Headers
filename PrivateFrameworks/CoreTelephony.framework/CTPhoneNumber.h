/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;



@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_digits;
    NSString *_countryCode;
}

@property(readonly) NSString *countryCode; /* unknown property attribute: V_countryCode */
@property(readonly) NSString *digits; /* unknown property attribute: V_digits */

+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;

- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)formatForCallingCountry:(id)arg1;
- (id)canonicalFormat;
- (id)encodedString;
- (id)countryCode;
- (id)digits;

@end
