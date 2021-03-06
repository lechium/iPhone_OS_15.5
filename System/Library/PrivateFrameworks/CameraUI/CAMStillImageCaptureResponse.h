//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMStillImageCaptureResponse <CAMTransientAssetConvertible>
{
    _Bool _expectingPairedVideo;	// 8 = 0x8
    NSString *_persistenceUUID;	// 16 = 0x10
    NSDate *_captureDate;	// 24 = 0x18
    NSDictionary *_metadata;	// 32 = 0x20
    NSString *_burstIdentifier;	// 40 = 0x28
    unsigned long long _burstRepresentedCount;	// 48 = 0x30
    UIImage *_imageWellImage;	// 56 = 0x38
    UIImage *_textAnalysisImage;	// 64 = 0x40
    long long _captureID;	// 72 = 0x48
    long long _semanticEnhanceScene;	// 80 = 0x50
    struct CGSize _finalExpectedPixelSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000005fcf7
@property(readonly, nonatomic) long long semanticEnhanceScene; // @synthesize semanticEnhanceScene=_semanticEnhanceScene;
@property(readonly, nonatomic) long long captureID; // @synthesize captureID=_captureID;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) UIImage *textAnalysisImage; // @synthesize textAnalysisImage=_textAnalysisImage;
@property(readonly, nonatomic) UIImage *imageWellImage; // @synthesize imageWellImage=_imageWellImage;
@property(readonly, nonatomic) unsigned long long burstRepresentedCount; // @synthesize burstRepresentedCount=_burstRepresentedCount;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property(readonly, nonatomic) _Bool flashFired;
@property(readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) _Bool transientAssetTemporaryPlaceholder;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) struct CGSize finalExpectedPixelSize; // @synthesize finalExpectedPixelSize=_finalExpectedPixelSize;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 textAnalysisImage:(id)arg8 coordinationInfo:(id)arg9 finalExpectedPixelSize:(struct CGSize)arg10 expectingPairedVideo:(_Bool)arg11 captureID:(long long)arg12 semanticEnhanceScene:(long long)arg13;	// IMP=0x0000000000173167

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly) Class superclass;

@end

