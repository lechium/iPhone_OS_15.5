//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/ICRequestOperation.h>

#import <BookLibrary/AVContentKeySessionDelegate-Protocol.h>

@class AVContentKeySession, ICStoreRequestContext, MPMediaItem, NSData, NSObject, NSString, NSURL, _BLAcquireSlotRequest;
@protocol OS_dispatch_queue;

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate>
{
    AVContentKeySession *_keySession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_keySessionQueue;	// 16 = 0x10
    ICStoreRequestContext *_requestContext;	// 24 = 0x18
    NSData *_persistentKeyData;	// 32 = 0x20
    NSData *_certificateData;	// 40 = 0x28
    _BLAcquireSlotRequest *_slotRequest;	// 48 = 0x30
    NSURL *_keyCertificateURL;	// 56 = 0x38
    NSURL *_keyServerURL;	// 64 = 0x40
    NSString *_identity;	// 72 = 0x48
    MPMediaItem *_mediaItem;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000008bbb
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(copy, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000000008a34
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;	// IMP=0x0000000000008800
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x00000000000086a7
- (void)_fetchCKCDataUsingSPC:(id)arg1 forKeyRequest:(id)arg2;	// IMP=0x00000000000073c6
- (void)_createSPCData;	// IMP=0x00000000000072e0
- (id)_deviceGUID;	// IMP=0x0000000000007228
- (void)execute;	// IMP=0x0000000000006dac
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006c42
- (id)init;	// IMP=0x0000000000006b5c
- (id)initWithRequestContext:(id)arg1;	// IMP=0x0000000000006aff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

