/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSData, NSDictionary, NSURL;

@interface CKMediaObject : NSObject <QLPreviewItem, CKGenericAttachment> {
    NSString *_transferGUID;
    NSData *_data;
    BOOL _dataIsPropertyListData;
    NSString *_filename;
    NSString *_mimeType;
    NSString *_exportedFilename;
    NSString *_hardLinkPath;
    double _duration;
    BOOL shouldRemoveTransfer;
}

@property(readonly) NSData * data;
@property(readonly) NSString * filename;
@property(copy) NSDictionary * SMSComposePropertyList;
@property(copy) NSString * transferGUID;
@property(copy) NSString * mimeType;
@property(copy) NSString * exportedFilename;
@property(readonly) NSString * displayFilename;
@property double duration;
@property BOOL shouldRemoveTransfer;
@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;

+ (struct CGSize { float x1; float x2; })transcodeMaxSize;
+ (BOOL)supportsMIMEType:(id)arg1;
+ (id)fileExtensionForMIMEType:(id)arg1;
+ (id)supportedMIMETypes;
+ (id)mimeTypesToFileExtensions;

- (id)dataRepresentation;
- (id)data;
- (id)description;
- (void)dealloc;
- (int)mediaType;
- (void)setExportedFilename:(id)arg1;
- (void)setMimeType:(id)arg1;
- (id)displayFilename;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (id)initWithTransferGUID:(id)arg1;
- (id)sizeInBytesString;
- (BOOL)shouldRemoveTransfer;
- (void)setSMSComposePropertyList:(id)arg1;
- (void)setupTransfer;
- (void)setShouldRemoveTransfer:(BOOL)arg1;
- (void)setTransferGUID:(id)arg1;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (double)transcodeStartTime;
- (id)filenameForMedia;
- (id)dataForMedia;
- (BOOL)shouldBeQuickLooked;
- (id)transferGUID;
- (void)copyToPasteboard:(id)arg1;
- (id)initWithFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 composeOptions:(id)arg4;
- (id)SMSComposePropertyList;
- (id)exportedFilename;
- (BOOL)shouldShowDisclosure;
- (id)previewItemURL;
- (id)mimeType;
- (id)subtitle;
- (id)title;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)icon;
- (id)filename;

@end