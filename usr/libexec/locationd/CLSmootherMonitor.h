//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, NSXPCListener;

@interface CLSmootherMonitor : CLIntersiloService
{
    _Bool _updating;	// 8 = 0x8
    _Bool _diminishedMode;	// 9 = 0x9
    _Bool _visitMonitorWakeTimerEnabled;	// 10 = 0xa
    _Bool _wifiPowerEnabled;	// 11 = 0xb
    NSXPCConnection *_connection;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    NSMutableSet *_visitClients;	// 32 = 0x20
    NSMutableDictionary *_scenarioTriggerClients;	// 40 = 0x28
    NSDate *_lastUpdateVisitMonitorWakeTimerDate;	// 48 = 0x30
}

+ (id)getSilo;	// IMP=0x0020000000a11796
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a1177d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a11720
@property(retain, nonatomic) NSDate *lastUpdateVisitMonitorWakeTimerDate; // @synthesize lastUpdateVisitMonitorWakeTimerDate=_lastUpdateVisitMonitorWakeTimerDate;
@property(retain, nonatomic) NSMutableDictionary *scenarioTriggerClients; // @synthesize scenarioTriggerClients=_scenarioTriggerClients;
@property(nonatomic) _Bool wifiPowerEnabled; // @synthesize wifiPowerEnabled=_wifiPowerEnabled;
@property(nonatomic) _Bool visitMonitorWakeTimerEnabled; // @synthesize visitMonitorWakeTimerEnabled=_visitMonitorWakeTimerEnabled;
@property(retain, nonatomic) NSMutableSet *visitClients; // @synthesize visitClients=_visitClients;
@property(nonatomic) _Bool diminishedMode; // @synthesize diminishedMode=_diminishedMode;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)smoothLocations:(id)arg1 workoutActivity:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a123ad
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000a11adf
- (void)dealloc;	// IMP=0x0010000000a11ab0
- (void)endService;	// IMP=0x0010000000a1199a
- (void)beginService;	// IMP=0x0010000000a1182f
- (id)init;	// IMP=0x0010000000a117f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
