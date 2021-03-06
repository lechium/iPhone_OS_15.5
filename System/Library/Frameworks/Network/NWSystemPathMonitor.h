//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NWMonitor, NWPathEvaluator;
@protocol OS_dispatch_source;

@interface NWSystemPathMonitor : NSObject
{
    _Bool _wifiPrimary;	// 8 = 0x8
    _Bool _ethernetPrimary;	// 9 = 0x9
    _Bool _vpnActive;	// 10 = 0xa
    int _vpnNotifyToken;	// 12 = 0xc
    int _symptomsNotifyToken;	// 16 = 0x10
    NWMonitor *_vpnMonitor;	// 24 = 0x18
    NWPathEvaluator *_primaryEvaluator;	// 32 = 0x20
    NSMutableDictionary *_perAppVPNEvaluators;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_smoothingTimer;	// 48 = 0x30
    void *_fallbackWatcher;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_mptcpWatcher;	// 64 = 0x40
}

+ (id)sharedSystemPathMonitor;	// IMP=0x0000000000003060
- (void).cxx_destruct;	// IMP=0x0000000000002cc0
@property(retain) NSObject<OS_dispatch_source> *mptcpWatcher; // @synthesize mptcpWatcher=_mptcpWatcher;
@property void *fallbackWatcher; // @synthesize fallbackWatcher=_fallbackWatcher;
@property(retain) NSObject<OS_dispatch_source> *smoothingTimer; // @synthesize smoothingTimer=_smoothingTimer;
@property(retain) NSMutableDictionary *perAppVPNEvaluators; // @synthesize perAppVPNEvaluators=_perAppVPNEvaluators;
@property int symptomsNotifyToken; // @synthesize symptomsNotifyToken=_symptomsNotifyToken;
@property int vpnNotifyToken; // @synthesize vpnNotifyToken=_vpnNotifyToken;
@property(retain) NWPathEvaluator *primaryEvaluator; // @synthesize primaryEvaluator=_primaryEvaluator;
@property(retain) NWMonitor *vpnMonitor; // @synthesize vpnMonitor=_vpnMonitor;
@property(nonatomic, getter=isVPNActive) _Bool vpnActive; // @synthesize vpnActive=_vpnActive;
@property(nonatomic, getter=isEthernetPrimary) _Bool ethernetPrimary; // @synthesize ethernetPrimary=_ethernetPrimary;
@property(nonatomic, getter=isWiFiPrimary) _Bool wifiPrimary; // @synthesize wifiPrimary=_wifiPrimary;
- (_Bool)getSymptomsFallback;	// IMP=0x0000000000002870
- (void)registerForSymptomsFallbackNotification;	// IMP=0x00000000000024c0
- (void)updateVPNMonitor;	// IMP=0x00000000000024b0
- (void)registerForVPNNotifications;	// IMP=0x00000000000024a0
- (void)stopWatchingApplicationStates;	// IMP=0x0000000000002490
- (void)startWatchingApplicationStates;	// IMP=0x0000000000002480
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000002460
- (void)eventFired;	// IMP=0x00000000000022a0
- (void)updateFlags;	// IMP=0x0000000000001e90
- (void)dealloc;	// IMP=0x0000000000001b90
- (id)init;	// IMP=0x00000000000013b0

@end

