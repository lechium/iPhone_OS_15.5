//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPTPConversionSupport-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport>
{
    PFMediaCapabilities *_legacyCapabilities;	// 8 = 0x8
    _Bool _initialized;	// 16 = 0x10
    PFMediaCapabilities *_peerMediaCapabilities;	// 24 = 0x18
    PHMediaFormatConversionManager *_mediaFormatConversionManager;	// 32 = 0x20
    NSURL *_temporaryDirectoryURL;	// 40 = 0x28
    NSMutableDictionary *_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003020d9
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers; // @synthesize convertedLivePhotoPairingIdentifiersByOriginalIdentifiers=_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property(retain) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(retain) PHMediaFormatConversionManager *mediaFormatConversionManager; // @synthesize mediaFormatConversionManager=_mediaFormatConversionManager;
@property(retain) PFMediaCapabilities *peerMediaCapabilities; // @synthesize peerMediaCapabilities=_peerMediaCapabilities;
- (id)effectivePeerMediaCapabilites;	// IMP=0x000000000030200a
- (id)conversionResultForAsset:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;	// IMP=0x0000000000301f59
@property(readonly, nonatomic) _Bool penultimateIsPublic;
@property(readonly, nonatomic) _Bool peerSupportsAdjustmentBaseResources;
@property(readonly, nonatomic) _Bool peerSupportsTranscodeChoice;
- (void)invalidate;	// IMP=0x0000000000301ee0
- (_Bool)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id *)arg2 maximumSize:(struct CGSize)arg3 error:(id *)arg4;	// IMP=0x0000000000301e36
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1;	// IMP=0x0000000000301c4c
- (id)sourceForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;	// IMP=0x0000000000301bb1
- (id)requestForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;	// IMP=0x0000000000301a36
- (id)requestForRenderVideoPath:(id)arg1 outputFilename:(id)arg2;	// IMP=0x000000000030198c
- (id)requestForRenderImagePath:(id)arg1 imageDimensions:(struct CGSize)arg2 outputFilename:(id)arg3;	// IMP=0x00000000003018de
- (id)requestForOriginalAtPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3 originalPairingIdentifier:(id)arg4;	// IMP=0x00000000003017fc
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;	// IMP=0x0000000000300f52
- (void)dealloc;	// IMP=0x0000000000300dd8
- (_Bool)setupTemporaryDirectory;	// IMP=0x0000000000300980
- (id)init;	// IMP=0x000000000030084d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
