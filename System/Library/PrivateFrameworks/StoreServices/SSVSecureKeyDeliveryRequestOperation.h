//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AVAssetResourceLoadingRequest, NSData, NSDictionary, NSNumber, NSObject, NSURL;
@protocol OS_dispatch_queue, SSVSecureKeyDeliveryRequestOperationDelegate;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSURL *_certificateURL;	// 16 = 0x10
    NSURL *_keyServerURL;	// 24 = 0x18
    AVAssetResourceLoadingRequest *_resourceLoadingRequest;	// 32 = 0x20
    CDUnknownBlockType _responseBlock;	// 40 = 0x28
    _Bool _iTunesStoreRequest;	// 48 = 0x30
    _Bool _shouldIncludeGUID;	// 49 = 0x31
    NSDictionary *_URLBagDictionary;	// 56 = 0x38
    NSData *_persistentContentKeyContext;	// 64 = 0x40
    NSData *_serverPlaybackContextData;	// 72 = 0x48
    _Bool _skippedRentalCheckout;	// 80 = 0x50
    _Bool _offline;	// 81 = 0x51
    NSNumber *_rentalId;	// 88 = 0x58
    long long _leaseAction;	// 96 = 0x60
    double _expirationTime;	// 104 = 0x68
    double _playbackStartTime;	// 112 = 0x70
    id <SSVSecureKeyDeliveryRequestOperationDelegate> _serverPlaybackContextDataDelegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001f67b
@property(nonatomic) __weak id <SSVSecureKeyDeliveryRequestOperationDelegate> serverPlaybackContextDataDelegate; // @synthesize serverPlaybackContextDataDelegate=_serverPlaybackContextDataDelegate;
@property(readonly, nonatomic) double playbackStartTime; // @synthesize playbackStartTime=_playbackStartTime;
@property(readonly, nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) long long leaseAction; // @synthesize leaseAction=_leaseAction;
@property _Bool skippedRentalCheckout; // @synthesize skippedRentalCheckout=_skippedRentalCheckout;
@property(copy) NSNumber *rentalId; // @synthesize rentalId=_rentalId;
- (double)_timeIntervalForStreamingKeyID:(long long)arg1 responseKey:(id)arg2 streamingKeyDictionaries:(id)arg3;	// IMP=0x000000000001f32a
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;	// IMP=0x000000000001f229
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;	// IMP=0x000000000001ef39
- (void)_sendResponseBlockWithError:(id)arg1;	// IMP=0x000000000001ede7
- (double)_playbackStartTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;	// IMP=0x000000000001edcb
- (double)_expirationTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;	// IMP=0x000000000001edaf
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 renewAfter:(double *)arg3 error:(id *)arg4;	// IMP=0x000000000001dd3a
- (void)start;	// IMP=0x000000000001dc85
- (void)main;	// IMP=0x000000000001b2b0
- (void)configureWithURLBagDictionary:(id)arg1;	// IMP=0x000000000001b1e2
@property(getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property(nonatomic) _Bool shouldIncludeGUID;
@property(retain, nonatomic) NSData *serverPlaybackContextData; // @synthesize serverPlaybackContextData=_serverPlaybackContextData;
@property(copy) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain) AVAssetResourceLoadingRequest *resourceLoadingRequest; // @synthesize resourceLoadingRequest=_resourceLoadingRequest;
@property(retain) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
- (void)setPersistentContentKeyContext:(id)arg1;	// IMP=0x000000000001ac1f
@property(retain) NSURL *certificateURL; // @synthesize certificateURL=_certificateURL;
@property(readonly, copy, nonatomic) NSData *persistentContentKeyContext; // @synthesize persistentContentKeyContext=_persistentContentKeyContext;
- (id)init;	// IMP=0x000000000001a543

@end
