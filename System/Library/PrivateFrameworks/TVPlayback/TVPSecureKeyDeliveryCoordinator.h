//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyLoaderDelegate-Protocol.h>

@class NSData, NSMutableSet, NSString, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>
{
    _Bool _certFetchInProgress;	// 8 = 0x8
    NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *_delegate;	// 16 = 0x10
    TVPPlaybackReportingEventCollection *_eventCollection;	// 24 = 0x18
    TVPSecureKeyLoader *_secureKeyLoader;	// 32 = 0x20
    NSData *_certificateData;	// 40 = 0x28
    NSMutableSet *_requestsAwaitingCertFetch;	// 48 = 0x30
}

+ (_Bool)isSecureKeyDeliveryRequest:(id)arg1;	// IMP=0x000000000005bb50
+ (void)initialize;	// IMP=0x000000000005bb00
- (void).cxx_destruct;	// IMP=0x000000000005e13b
@property(retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(nonatomic) _Bool certFetchInProgress; // @synthesize certFetchInProgress=_certFetchInProgress;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(nonatomic) __weak NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000000005de61
- (void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(_Bool)arg2;	// IMP=0x000000000005d915
- (id)init;	// IMP=0x000000000005d8ea
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000005d1ff
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;	// IMP=0x000000000005d136
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;	// IMP=0x000000000005d08c
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;	// IMP=0x000000000005d017
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;	// IMP=0x000000000005ca39
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000005c369
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000005be0f
- (void)sendStopRequest;	// IMP=0x000000000005bd5d
- (void)loadSecureKeyRequest:(id)arg1;	// IMP=0x000000000005bca4
- (id)initWithSecureKeyLoader:(id)arg1;	// IMP=0x000000000005bbc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
