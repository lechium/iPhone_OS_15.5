//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLHEndpointSelector, CLHLocationClassifier, CLHNetworkController, CLHRequestStore, NSString, NSXPCListener;

@interface CLHarvesterService : CLIntersiloService
{
    NSXPCListener *_listener;	// 8 = 0x8
    CLHEndpointSelector *_endpointSelector;	// 16 = 0x10
    CLHLocationClassifier *_classifier;	// 24 = 0x18
    CLHNetworkController *_networkController;	// 32 = 0x20
    CLHRequestStore *_requestStore;	// 40 = 0x28
    int _countryCodeNotificationToken;	// 48 = 0x30
    struct shared_ptr<CLHarvestController> _harvestController;	// 56 = 0x38
    struct shared_ptr<CLMonitorGps> _monitorGps;	// 72 = 0x48
    struct shared_ptr<CLPolicyTrip> _policyTrip;	// 88 = 0x58
    struct shared_ptr<CLPolicyProactive> _policyProactive;	// 104 = 0x68
    struct vector<std::shared_ptr<CLSubHarvester>, std::allocator<std::shared_ptr<CLSubHarvester>>> _subHarvesters;	// 120 = 0x78
    NSString *_lastCountryCode;	// 144 = 0x90
}

+ (_Bool)isSupported;	// IMP=0x00200000000f667f
+ (id)getSilo;	// IMP=0x00100000000f6623
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f660a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000000f65ad
- (id).cxx_construct;	// IMP=0x00200000000fa5b3
- (void).cxx_destruct;	// IMP=0x00100000000fa559
@property(retain, nonatomic) NSString *lastCountryCode; // @synthesize lastCountryCode=_lastCountryCode;
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00100000000fa519
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000fa2cd
- (void)fetchStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fa13f
- (void)submitSample:(id)arg1;	// IMP=0x00100000000f9d91
- (id)jsonObject;	// IMP=0x00100000000f9cd8
- (void)shutdown;	// IMP=0x00100000000f9cc3
- (void)setHarvestingEnabled:(_Bool)arg1;	// IMP=0x00100000000f9cac
- (void)setPrivateMode:(_Bool)arg1;	// IMP=0x00100000000f9c95
- (void)endService;	// IMP=0x00100000000f9b18
- (void)beginService;	// IMP=0x00100000000f9472
- (void)constructSubHarvesters;	// IMP=0x00100000000f6ebb
- (void)constructPolicies;	// IMP=0x00100000000f6c45
- (void)constructMonitors;	// IMP=0x00100000000f6a59
- (void)constructController;	// IMP=0x00100000000f692f
- (id)init;	// IMP=0x00100000000f68f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

