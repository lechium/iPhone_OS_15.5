//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCreationRequest, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject
{
    NSArray *_assetResourceContexts;	// 8 = 0x8
    _Bool _didValidateForInsertion;	// 16 = 0x10
    _Bool _valid;	// 17 = 0x11
    _Bool _hasCurrentAdjustment;	// 18 = 0x12
    _Bool _hasOriginalAdjustment;	// 19 = 0x13
    _Bool _hasRAW;	// 20 = 0x14
    _Bool _hasSpatialOverCapture;	// 21 = 0x15
    PHAssetCreationRequest *_assetCreationRequest;	// 24 = 0x18
    NSArray *_assetResources;	// 32 = 0x20
    long long _mediaType;	// 40 = 0x28
    unsigned long long _mediaSubtype;	// 48 = 0x30
    PHExternalAssetResource *_primaryResource;	// 56 = 0x38
}

+ (id)_primaryAssetResource:(id)arg1;	// IMP=0x00000000001f59e8
+ (_Bool)supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2 importedBy:(short)arg3;	// IMP=0x00000000001f59d0
+ (_Bool)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2 mediaSubtype:(unsigned long long *)arg3 importedBy:(short)arg4;	// IMP=0x00000000001f5317
- (void).cxx_destruct;	// IMP=0x00000000001f5274
@property(readonly, nonatomic) PHExternalAssetResource *primaryResource; // @synthesize primaryResource=_primaryResource;
@property(readonly, nonatomic) unsigned long long mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) _Bool hasSpatialOverCapture; // @synthesize hasSpatialOverCapture=_hasSpatialOverCapture;
@property(readonly, nonatomic) _Bool hasRAW; // @synthesize hasRAW=_hasRAW;
@property(readonly, nonatomic) _Bool hasOriginalAdjustment; // @synthesize hasOriginalAdjustment=_hasOriginalAdjustment;
@property(readonly, nonatomic) _Bool hasCurrentAdjustment; // @synthesize hasCurrentAdjustment=_hasCurrentAdjustment;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) _Bool didValidateForInsertion; // @synthesize didValidateForInsertion=_didValidateForInsertion;
@property(readonly, nonatomic) NSArray *assetResources; // @synthesize assetResources=_assetResources;
@property(readonly, nonatomic) __weak PHAssetCreationRequest *assetCreationRequest; // @synthesize assetCreationRequest=_assetCreationRequest;
- (id)validatedDataForAssetResource:(id)arg1;	// IMP=0x00000000001f51b0
- (id)validatedURLForAssetResource:(id)arg1;	// IMP=0x00000000001f5160
- (id)_validatedContextForResource:(id)arg1;	// IMP=0x00000000001f5093
- (_Bool)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f4f76
@property(readonly, nonatomic) _Bool hasAdjustments;
- (_Bool)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f496c
- (id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f4434
- (_Bool)_extractValidatedAdjustmentsURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001f42b3
- (_Bool)_extractValidatedAudioURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001f40cb
- (_Bool)_extractValidatedVideoURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001f3e52
- (_Bool)_extractValidatedImageURL:(id *)arg1 imageData:(id *)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001f3b5a
- (id)assetResourceWithType:(long long)arg1;	// IMP=0x00000000001f3acb
- (id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2;	// IMP=0x00000000001f3a32

@end

