//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVContentKeyRecipient-Protocol.h>
#import <AVFCore/AVContentKeySessionDelegate-Protocol.h>

@class AVAsset, AVStreamDataParserInternal, NSData, NSError, NSString;
@protocol AVStreamDataParserOutputHandling;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient>
{
    AVStreamDataParserInternal *_parser;	// 8 = 0x8
}

+ (_Bool)canParseExtendedMIMEType:(id)arg1;	// IMP=0x00000000000bba62
+ (id)audiovisualMIMETypes;	// IMP=0x00000000000bb935
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;	// IMP=0x00000000000bc80f
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1;	// IMP=0x00000000000bc8a3
+ (struct OpaqueCMBlockBuffer *)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;	// IMP=0x00000000000bc86d
- (void)_createAssetIfNecessary;	// IMP=0x00000000000bc4a7
- (_Bool)shouldProvideMediaDataForTrackID:(int)arg1;	// IMP=0x00000000000bc466
- (void)setShouldProvideMediaData:(_Bool)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bc2f8
@property(readonly, nonatomic) AVAsset *asset;
- (void)providePendingMediaData;	// IMP=0x00000000000bc25e
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000bc147
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000bbab9
- (void)_setError:(id)arg1;	// IMP=0x00000000000bb8b2
@property(readonly) NSError *error;
- (void)appendStreamData:(id)arg1;	// IMP=0x00000000000bb890
- (void)setStatus:(long long)arg1;	// IMP=0x00000000000bb81c
@property(readonly) long long status2;
@property(readonly) long long status;
@property(readonly, nonatomic) id <AVStreamDataParserOutputHandling> delegate;
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000bb698
- (void)dealloc;	// IMP=0x00000000000bb5b3
- (void)_willDeallocOrFinalize;	// IMP=0x00000000000bb3d5
- (id)init;	// IMP=0x00000000000bb26c
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1 manifold:(struct OpaqueFigManifold **)arg2;	// IMP=0x00000000000bdbd5
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;	// IMP=0x00000000000bda74
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold *)arg1;	// IMP=0x00000000000bda62
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;	// IMP=0x00000000000bda21
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;	// IMP=0x00000000000bd9c8
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 orDecryptorDidChange:(void *)arg3 forTrackID:(int)arg4;	// IMP=0x00000000000bcfc0
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 trackDidEnd:(int)arg2;	// IMP=0x00000000000bce9e
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;	// IMP=0x00000000000bc9ac
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;	// IMP=0x00000000000bddd3
- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;	// IMP=0x00000000000bddc1
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x00000000000bdd22
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000be0ed
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;	// IMP=0x00000000000be0d3
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bdff2
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bde5c
@property(readonly) NSData *contentProtectionSessionIdentifier;
- (_Bool)_attachedToExternalContentKeySession;	// IMP=0x00000000000be3b3
- (id)contentKeySession;	// IMP=0x00000000000be399
- (void)setSession:(id)arg1;	// IMP=0x00000000000be24f
- (void)expire;	// IMP=0x00000000000be20a
- (_Bool)hasProtector;	// IMP=0x00000000000be1d7
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;	// IMP=0x00000000000be40b
@property(readonly, nonatomic) _Bool mayRequireContentKeysForMediaDataProcessing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

