//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSDecayTimer, CUTWeakReference, NSDate, NSMutableArray, NSString, PCSimpleTimer;
@protocol APSNetworkMonitorDelegate;

@interface APSNetworkMonitor : NSObject
{
    CUTWeakReference *_delegate;	// 8 = 0x8
    NSString *_lastSSID;	// 16 = 0x10
    NSMutableArray *_wifiMeasurements;	// 24 = 0x18
    unsigned long long _wifiGrowAttemptsBeforeSSID;	// 32 = 0x20
    unsigned long long _wifiGrowAttempts;	// 40 = 0x28
    double _wifiKeepAliveInterval;	// 48 = 0x30
    APSDecayTimer *_decayTimer;	// 56 = 0x38
    PCSimpleTimer *_connectionThrottleTimer;	// 64 = 0x40
    PCSimpleTimer *_piggybackConnectionTimer;	// 72 = 0x48
    _Bool _shouldThrottleConnection;	// 80 = 0x50
    _Bool _serverSupportsDualMode;	// 81 = 0x51
    long long _dualMode;	// 88 = 0x58
    NSDate *_lastPiggybackReset;	// 96 = 0x60
    NSDate *_lastPiggybackConnection;	// 104 = 0x68
    unsigned long long _piggybackCount;	// 112 = 0x70
    unsigned long long _maxCostDrivenConnectionsPerDay;	// 120 = 0x78
    unsigned long long _maxPiggybackConnectionsPerDay;	// 128 = 0x80
    _Bool _disableCostDrivenDualMode;	// 136 = 0x88
    _Bool _shouldUseDualMode;	// 137 = 0x89
    _Bool _criticalReliability;	// 138 = 0x8a
    _Bool _isWoWEnabled;	// 139 = 0x8b
    _Bool _isPiggybacking;	// 140 = 0x8c
    _Bool _disableDualModePiggybackTimer;	// 141 = 0x8d
}

+ (unsigned long long)powerCostForPushOnRAT:(int)arg1 withLinkQuality:(int)arg2;	// IMP=0x00200000000952c8
- (void).cxx_destruct;	// IMP=0x0020000000095805
@property(nonatomic) _Bool isWoWEnabled; // @synthesize isWoWEnabled=_isWoWEnabled;
@property(readonly, nonatomic) _Bool shouldUseDualMode; // @synthesize shouldUseDualMode=_shouldUseDualMode;
@property(nonatomic) _Bool serverSupportsDualMode; // @synthesize serverSupportsDualMode=_serverSupportsDualMode;
- (void)setDisableDualModePiggybackTimer:(id)arg1;	// IMP=0x00100000000956cc
- (void)setPiggybackDualChannelAttempts:(id)arg1;	// IMP=0x00100000000955c1
- (void)setCostDrivenDualChannelAttempts:(id)arg1;	// IMP=0x00100000000954b4
- (void)setDisableCostDrivenDualChannelAttempts:(id)arg1;	// IMP=0x00100000000953a8
- (void)setCriticalReliability:(_Bool)arg1;	// IMP=0x00100000000952d3
- (void)closedSecondChannel:(long long)arg1;	// IMP=0x0010000000094f5a
- (void)openedSecondChannel;	// IMP=0x0010000000094a51
@property(readonly, nonatomic) _Bool isPiggybacking;
- (void)_piggybackConnectionTimerFired;	// IMP=0x0010000000094a06
- (void)_clearPiggybackConnectionTimer;	// IMP=0x00100000000949d4
- (void)_connectionThrottleTimerFired;	// IMP=0x00100000000949a2
- (void)_clearConnectionThrottleTimer;	// IMP=0x0010000000094970
- (void)_toggleWiFiAutoAssociateIfNecessary;	// IMP=0x0010000000094872
- (void)__toggleWiFiAutoAssociateIfNecessary;	// IMP=0x00100000000942df
- (_Bool)_checkPiggybackBudget;	// IMP=0x0010000000094077
- (int)secondsBetweenPiggybacks;	// IMP=0x001000000009406c
- (void)notePushWithCost:(unsigned long long)arg1;	// IMP=0x001000000009403a
- (void)_handleSignificantTimeChange;	// IMP=0x001000000009400c
- (void)_flushStaleElementsFrom:(id *)arg1 withThreshold:(double)arg2;	// IMP=0x0010000000093d28
- (void)setCurrentWiFiKeepAliveInterval:(double)arg1 growAttempts:(unsigned long long)arg2;	// IMP=0x0010000000093c59
- (_Bool)_wifiIsHistoricallyCheap;	// IMP=0x0010000000093b37
- (double)_accumulatedAwakePercentage;	// IMP=0x0010000000093882
- (void)_flushStaleWiFiMeasurements;	// IMP=0x0010000000093864
- (void)_processSSIDChangeWithSSID:(id)arg1 querySSID:(_Bool)arg2;	// IMP=0x00100000000936da
- (void)cutWiFiManager:(id)arg1 generatedPowerReading:(id)arg2;	// IMP=0x00100000000931cf
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;	// IMP=0x0010000000092fba
- (void)systemDidUnlock;	// IMP=0x0010000000092f22
- (void)systemDidLock;	// IMP=0x0010000000092e78
- (void)decayTimerFired:(id)arg1;	// IMP=0x0010000000092de0
- (void)_reloadDualMode;	// IMP=0x0010000000092d8a
@property(nonatomic) id <APSNetworkMonitorDelegate> delegate;
- (void)dealloc;	// IMP=0x0010000000092b09
- (id)init;	// IMP=0x0010000000092869
- (void)_deregisterFromWoWNotifications;	// IMP=0x0010000000092863
- (void)_registerForWoWNotifications;	// IMP=0x001000000009285d
- (id)systemMonitor;	// IMP=0x0010000000092844
- (id)wifiManager;	// IMP=0x001000000009282b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
