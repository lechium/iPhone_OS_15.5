//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/STDynamicActivityAttributionServerHandle-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, STDynamicActivityAttributionListener;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>
{
    STDynamicActivityAttributionListener *_dynamicAttributionListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSMutableDictionary *_clientAttributionMap;	// 24 = 0x18
    NSMutableSet *_monitorClients;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000003ff2
@property(retain, nonatomic) NSMutableSet *monitorClients; // @synthesize monitorClients=_monitorClients;
@property(retain, nonatomic) NSMutableDictionary *clientAttributionMap; // @synthesize clientAttributionMap=_clientAttributionMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) STDynamicActivityAttributionListener *dynamicAttributionListener; // @synthesize dynamicAttributionListener=_dynamicAttributionListener;
- (void)_updateAttributionMapWithAttribution:(id)arg1 clientID:(id)arg2;	// IMP=0x0000000000003db8
- (void)_internalQueue_setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(CDStruct_4c969caf)arg2 forClient:(id)arg3;	// IMP=0x0000000000003b29
- (void)_internalQueue_setAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;	// IMP=0x0000000000003910
- (void)unsubscribeFromUpdates:(id)arg1;	// IMP=0x00000000000034e9
- (void)subscribeToUpdates:(id)arg1;	// IMP=0x0000000000003393
- (void)setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(CDStruct_4c969caf)arg2 forClient:(id)arg3;	// IMP=0x0000000000003214
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;	// IMP=0x000000000000307f
- (id)currentAttributionForAttribution:(id)arg1;	// IMP=0x0000000000002e4c
- (id)currentAttributionForClient:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000002c7f
- (id)currentAttributedAppForClient:(id)arg1;	// IMP=0x0000000000002acb
- (id)currentAttributionKeyForClient:(id)arg1;	// IMP=0x000000000000287b
- (id)init;	// IMP=0x00000000000027c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

