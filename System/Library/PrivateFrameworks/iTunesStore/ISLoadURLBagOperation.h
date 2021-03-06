//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISStoreURLOperationDelegate-Protocol.h>

@class ISURLBag, NSNumber, NSString, SSURLBagContext;

@interface ISLoadURLBagOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext *_context;	// 96 = 0x60
    ISURLBag *_outputBag;	// 104 = 0x68
    NSNumber *_accountDSID;	// 112 = 0x70
}

+ (id)_networkSynchronyQueue;	// IMP=0x0000000000027646
+ (id)_networkCounters;	// IMP=0x00000000000275c1
+ (id)_executedNetworkRequests;	// IMP=0x000000000002753c
+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000273f8
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;	// IMP=0x0000000000025b66
+ (id)storeFrontHeaderSuffix;	// IMP=0x0000000000025adf
+ (void)incrementNetworkCounterForBagContext:(id)arg1;	// IMP=0x0000000000025948
+ (void)decrementNetworkCounterForBagContext:(id)arg1;	// IMP=0x0000000000025740
- (void).cxx_destruct;	// IMP=0x00000000000281cb
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly) SSURLBagContext *context; // @synthesize context=_context;
- (_Bool)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000027c9c
- (void)_setOutputURLBag:(id)arg1;	// IMP=0x0000000000027c1f
- (void)_sendPingsForURLBag:(id)arg1;	// IMP=0x000000000002773b
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;	// IMP=0x000000000002769d
- (void)_addHeadersToRequestProperties:(id)arg1;	// IMP=0x0000000000027349
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x0000000000026faf
- (_Bool)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;	// IMP=0x0000000000026f66
- (id)uniqueKey;	// IMP=0x0000000000026ed9
- (void)run;	// IMP=0x0000000000025c56
@property(readonly) ISURLBag *URLBag;
- (id)initWithBagContext:(id)arg1;	// IMP=0x00000000000256c6
- (id)init;	// IMP=0x000000000002566a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

