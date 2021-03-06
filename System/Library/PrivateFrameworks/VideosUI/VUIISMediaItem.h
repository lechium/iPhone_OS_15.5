//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

#import <VideosUI/TVPContentKeyLoading-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading>
{
    _Bool _disableScrubbing;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSURL *_tokenServerURL;	// 24 = 0x18
    NSURL *_stopServerURL;	// 32 = 0x20
    NSDictionary *_tokenServerParameters;	// 40 = 0x28
    NSString *_assetIDForStopping;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    NSData *_certificateData;	// 64 = 0x40
    NSMutableArray *_requestsAwaitingCertFetch;	// 72 = 0x48
    unsigned long long _loadingContext;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x00000000000caff4
- (void).cxx_destruct;	// IMP=0x00000000000d0f06
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *assetIDForStopping; // @synthesize assetIDForStopping=_assetIDForStopping;
@property(retain, nonatomic) NSDictionary *tokenServerParameters; // @synthesize tokenServerParameters=_tokenServerParameters;
@property(retain, nonatomic) NSURL *stopServerURL; // @synthesize stopServerURL=_stopServerURL;
@property(retain, nonatomic) NSURL *tokenServerURL; // @synthesize tokenServerURL=_tokenServerURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000d09de
- (void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3;	// IMP=0x00000000000cfd82
- (void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2;	// IMP=0x00000000000cf89c
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1;	// IMP=0x00000000000cf854
- (_Bool)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2;	// IMP=0x00000000000cf757
- (void)_fetchTokenForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cea61
- (void)_sendStopForAssetID:(id)arg1;	// IMP=0x00000000000ce8c7
- (id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000000ce66d
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdf8a
- (void)_startKeyRequests:(id)arg1 token:(id)arg2;	// IMP=0x00000000000cdadc
- (void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cd158
- (void)_parseCertificateURL:(id *)arg1 keyServerURL:(id *)arg2 assetID:(id *)arg3 fromKeyRequest:(id)arg4;	// IMP=0x00000000000ccc45
- (id)_assetIDDataForKeyRequest:(id)arg1;	// IMP=0x00000000000ccb7c
- (id)_assetIDForKeyRequest:(id)arg1;	// IMP=0x00000000000ccb3d
- (id)_keyServerURLForKeyRequest:(id)arg1;	// IMP=0x00000000000ccafd
- (id)_certificateURLForKeyRequest:(id)arg1;	// IMP=0x00000000000ccabd
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;	// IMP=0x00000000000cb6a0
- (void)cleanUpMediaItem;	// IMP=0x00000000000cb5e0
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000000cb405
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000000cb340
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000000cb282
- (id)mediaItemURL;	// IMP=0x00000000000cb270
- (id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4;	// IMP=0x00000000000cb044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

