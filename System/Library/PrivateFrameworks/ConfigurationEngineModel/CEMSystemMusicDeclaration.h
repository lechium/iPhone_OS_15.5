//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemMusicDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowMusicService;	// 16 = 0x10
    NSNumber *_payloadAllowRadioService;	// 24 = 0x18
    NSNumber *_payloadAllowMusicArtistActivity;	// 32 = 0x20
    NSNumber *_payloadAllowMusicVideos;	// 40 = 0x28
    NSNumber *_payloadAllowSharedLibraries;	// 48 = 0x30
}

+ (id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 withAllowMusicVideos:(id)arg5;	// IMP=0x00000000000bfcd1
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000bfbea
+ (id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 withAllowMusicVideos:(id)arg5 withAllowSharedLibraries:(id)arg6;	// IMP=0x00000000000bf9f7
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000bf900
+ (id)allowedPayloadKeys;	// IMP=0x00000000000bf831
+ (id)profileType;	// IMP=0x00000000000bf824
+ (id)registeredIdentifier;	// IMP=0x00000000000bf817
+ (id)registeredClassName;	// IMP=0x00000000000bf80a
- (void).cxx_destruct;	// IMP=0x00000000000c0319
@property(copy, nonatomic) NSNumber *payloadAllowSharedLibraries; // @synthesize payloadAllowSharedLibraries=_payloadAllowSharedLibraries;
@property(copy, nonatomic) NSNumber *payloadAllowMusicVideos; // @synthesize payloadAllowMusicVideos=_payloadAllowMusicVideos;
@property(copy, nonatomic) NSNumber *payloadAllowMusicArtistActivity; // @synthesize payloadAllowMusicArtistActivity=_payloadAllowMusicArtistActivity;
@property(copy, nonatomic) NSNumber *payloadAllowRadioService; // @synthesize payloadAllowRadioService=_payloadAllowRadioService;
@property(copy, nonatomic) NSNumber *payloadAllowMusicService; // @synthesize payloadAllowMusicService=_payloadAllowMusicService;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c016f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000c0045
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bfcfa
- (id)assetReferences;	// IMP=0x00000000000bf9ea
- (int)activationLevel;	// IMP=0x00000000000bf9df
- (_Bool)mustBeSupervised;	// IMP=0x00000000000bf9d7
- (_Bool)multipleAllowed;	// IMP=0x00000000000bf9cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
