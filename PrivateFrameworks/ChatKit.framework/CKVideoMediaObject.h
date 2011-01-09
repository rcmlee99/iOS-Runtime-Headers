/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, NSString;



@interface CKVideoMediaObject : CKAVMediaObject 
{
    NSDictionary *_transcodeOptions;
    struct CGImage { } *_videoPreviewCGImage;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;

- (void)dealloc;
- (BOOL)shouldTranscodeForMMS;
- (NSInteger)mediaType;
- (id)transcodedFilename;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (id)newPreview:(NSInteger)arg1 highlight:(BOOL)arg2;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (unsigned long long)sizeInBytes;
- (id)optionsForMedia;
- (id)transcodePath;
- (id)transcodeMimeType;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)effectiveExportedFilename;
- (id)transcodedPathExtension;
- (id)_transcodeOptions;
- (struct CGImage { }*)_newPreviewImageWithTailStyle:(NSInteger)arg1;
- (struct CGImage { }*)_newPreviewImageForIncomingVideoWithTailStyle:(NSInteger)arg1;
- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (struct CGImage { }*)_newVideoPreviewImageForImage:(struct CGImage { }*)arg1 withTailStyle:(NSInteger)arg2;
- (id)filenameForMedia;

@end
