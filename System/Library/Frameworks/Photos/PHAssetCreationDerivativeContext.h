//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSURL, PLManagedAsset, PLThumbnailManager;

@interface PHAssetCreationDerivativeContext : NSObject
{
    _Bool _thumbnailWriteSucceeded;	// 8 = 0x8
    short _assetKind;	// 10 = 0xa
    long long _nextAvailableThumbnailIndex;	// 16 = 0x10
    PLThumbnailManager *_thumbnailManager;	// 24 = 0x18
    NSString *_thumbnailIdentifier;	// 32 = 0x20
    NSURL *_fileURLForThumbnailFile;	// 40 = 0x28
    NSData *_originalHash;	// 48 = 0x30
    PLManagedAsset *_asset;	// 56 = 0x38
    NSString *_assetUUID;	// 64 = 0x40
    NSString *_originalUTI;	// 72 = 0x48
    long long _assetOrientation;	// 80 = 0x50
    long long _maxPixelSize;	// 88 = 0x58
    NSString *_assetExtension;	// 96 = 0x60
    NSData *_imageData;	// 104 = 0x68
    NSString *_fullsizeRenderImagePath;	// 112 = 0x70
    NSString *_pathForOriginalFile;	// 120 = 0x78
    NSString *_pathForVideoPreviewFile;	// 128 = 0x80
    NSString *_fullsizeRenderVideoPath;	// 136 = 0x88
    NSArray *_auxiliaryImageRecords;	// 144 = 0x90
    struct CGSize _assetOrientedImageSize;	// 152 = 0x98
    struct CGSize _embeddedThumbnailSize;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000af6ea
@property(retain, nonatomic) NSArray *auxiliaryImageRecords; // @synthesize auxiliaryImageRecords=_auxiliaryImageRecords;
@property(copy, nonatomic) NSString *fullsizeRenderVideoPath; // @synthesize fullsizeRenderVideoPath=_fullsizeRenderVideoPath;
@property(copy, nonatomic) NSString *pathForVideoPreviewFile; // @synthesize pathForVideoPreviewFile=_pathForVideoPreviewFile;
@property(copy, nonatomic) NSString *pathForOriginalFile; // @synthesize pathForOriginalFile=_pathForOriginalFile;
@property(copy, nonatomic) NSString *fullsizeRenderImagePath; // @synthesize fullsizeRenderImagePath=_fullsizeRenderImagePath;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *assetExtension; // @synthesize assetExtension=_assetExtension;
@property(nonatomic) long long maxPixelSize; // @synthesize maxPixelSize=_maxPixelSize;
@property(nonatomic) struct CGSize embeddedThumbnailSize; // @synthesize embeddedThumbnailSize=_embeddedThumbnailSize;
@property(nonatomic) struct CGSize assetOrientedImageSize; // @synthesize assetOrientedImageSize=_assetOrientedImageSize;
@property(nonatomic) long long assetOrientation; // @synthesize assetOrientation=_assetOrientation;
@property(copy, nonatomic) NSString *originalUTI; // @synthesize originalUTI=_originalUTI;
@property(nonatomic) short assetKind; // @synthesize assetKind=_assetKind;
@property(copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSData *originalHash; // @synthesize originalHash=_originalHash;
@property(retain, nonatomic) NSURL *fileURLForThumbnailFile; // @synthesize fileURLForThumbnailFile=_fileURLForThumbnailFile;
@property(copy, nonatomic) NSString *thumbnailIdentifier; // @synthesize thumbnailIdentifier=_thumbnailIdentifier;
@property(nonatomic) _Bool thumbnailWriteSucceeded; // @synthesize thumbnailWriteSucceeded=_thumbnailWriteSucceeded;
@property(retain, nonatomic) PLThumbnailManager *thumbnailManager; // @synthesize thumbnailManager=_thumbnailManager;
@property(nonatomic) long long nextAvailableThumbnailIndex; // @synthesize nextAvailableThumbnailIndex=_nextAvailableThumbnailIndex;

@end

