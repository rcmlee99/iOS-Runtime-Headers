/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData;



@interface CKImageData : NSObject 
{
    struct CGImageSource { } *_imageSource;
    NSData *_data;
}

@property(readonly) NSData *data; /* unknown property attribute: V_data */


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)imageWithMaxLength:(NSInteger)arg1;
- (id)jpegDataWithMaxLength:(NSInteger)arg1 compression:(float)arg2;
- (id)pngDataWithMaxLength:(NSInteger)arg1;
- (id)mimeType;
- (id)imageType;
- (NSInteger)imageCount;
- (struct CGSize { float x1; float x2; })size;
- (NSInteger)imageOrientation;
- (struct CGImageSource { }*)_imageSource;
- (id)_newImageWithMaxLength:(NSInteger)arg1 transformOrientation:(BOOL)arg2;
- (struct CGImage { }*)_newCGImageWithMaxLength:(NSInteger)arg1 transformOrientation:(BOOL)arg2;
- (id)data;

@end
