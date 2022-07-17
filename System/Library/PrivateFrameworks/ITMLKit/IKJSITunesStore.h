//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSITunesStore-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSITunesStore-Protocol.h>
#import <ITMLKit/_IKJSITunesStoreProxy-Protocol.h>

@class IKURLBagCache, NSDictionary, NSNumber, NSString, SSMetricsController;

@interface IKJSITunesStore <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore>
{
    NSNumber *_lastAccountDSID;	// 8 = 0x8
    NSDictionary *_lastKnownStatusDictionary;	// 16 = 0x10
    SSMetricsController *_metricsController;	// 24 = 0x18
    NSString *_storeFrontSuffix;	// 32 = 0x20
    id _ssAccountStoreChangedToken;	// 40 = 0x28
    id _subscriptionStatusDidChangeToken;	// 48 = 0x30
    id _urlBagCacheUpdateToken;	// 56 = 0x38
    NSString *_cookieURL;	// 64 = 0x40
    IKURLBagCache *_bagCache;	// 72 = 0x48
}

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;	// IMP=0x0000000000030daf
+ (void)setITunesStoreHeaders:(id)arg1;	// IMP=0x0000000000030b2f
- (void).cxx_destruct;	// IMP=0x0000000000035cc3
@property(retain, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(retain, nonatomic) NSString *cookieURL; // @synthesize cookieURL=_cookieURL;
- (void)_bagCacheUpdated;	// IMP=0x0000000000035a5f
- (void)invalidateBag;	// IMP=0x0000000000035a1d
- (id)getBag;	// IMP=0x00000000000359a6
- (void)_subscriptionStatusDidChanged:(id)arg1;	// IMP=0x00000000000358c0
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x00000000000352a7
- (void)_accountStoreChanged;	// IMP=0x0000000000035165
- (void)signOut;	// IMP=0x00000000000350a7
- (void)authenticate:(id)arg1:(id)arg2;	// IMP=0x0000000000034b76
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property(readonly, nonatomic) NSString *DSID;
- (void)openDynamicUIURL:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000000003401e
- (void)openMarketingItem:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000000003397e
- (void)fetchMarketingItem:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;	// IMP=0x000000000003332b
- (void)updateServiceEligibility:(id)arg1;	// IMP=0x0000000000033171
- (void)evaluateScripts:(id)arg1:(id)arg2;	// IMP=0x00000000000330b7
- (void)loadStoreContent:(id)arg1:(id)arg2;	// IMP=0x00000000000327aa
- (void)clearCookies;	// IMP=0x0000000000032740
@property(retain, nonatomic) id cookie;
- (void)flushUnreportedEvents;	// IMP=0x000000000003240f
- (void)recordEvent:(id)arg1:(id)arg2;	// IMP=0x0000000000032361
- (id)makeStoreXMLHttpRequest;	// IMP=0x00000000000322f3
- (void)getServiceEligibility:(id)arg1:(id)arg2;	// IMP=0x0000000000031a62
- (id)eligibilityForService:(id)arg1;	// IMP=0x00000000000319c9
@property(retain, nonatomic) NSString *storefront;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(readonly, nonatomic) NSString *userAgent;
- (void)dealloc;	// IMP=0x00000000000316d6
- (id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2;	// IMP=0x0000000000030e73
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000000030e5f
- (id)asPrivateIKJSITunesStore;	// IMP=0x0000000000030afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
