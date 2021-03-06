/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDictionary, NSString;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    NSString *_deviceSerialNumber;
    NSString *_productType;
    NSString *_secureElementIdentifier;
    NSString *_signedAuthToken;
    NSDictionary *_stateInformation;
    bool_devSigned;
}

@property bool devSigned;
@property(copy) NSString * deviceSerialNumber;
@property(copy) NSString * productType;
@property(copy) NSString * secureElementIdentifier;
@property(copy) NSString * signedAuthToken;
@property(copy) NSDictionary * stateInformation;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)devSigned;
- (id)deviceSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productType;
- (id)secureElementIdentifier;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (void)setStateInformation:(id)arg1;
- (id)signedAuthToken;
- (id)stateInformation;

@end
