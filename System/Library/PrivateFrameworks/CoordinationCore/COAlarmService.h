//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COAlarmManagerServiceInterface-Protocol.h>
#import <CoordinationCore/COMeshAlarmAddOnDelegate-Protocol.h>

@class COClientObserverSet, NSString;

__attribute__((visibility("hidden")))
@interface COAlarmService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate>
{
    COClientObserverSet *_observers;	// 8 = 0x8
}

+ (_Bool)_isAllowedClient:(id)arg1;	// IMP=0x0000000000039bb4
+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x0000000000039ab6
- (void).cxx_destruct;	// IMP=0x000000000003c4fb
@property(readonly, nonatomic) COClientObserverSet *observers; // @synthesize observers=_observers;
- (void)_didResetAlarmAddOn:(id)arg1;	// IMP=0x000000000003c4c1
- (void)didChangeCompositionForAlarmAddOn:(id)arg1;	// IMP=0x000000000003c3df
- (void)didResetAlarmAddOn:(id)arg1;	// IMP=0x000000000003c311
- (void)alarmAddOn:(id)arg1 didChangeFiringAlarms:(id)arg2;	// IMP=0x000000000003c204
- (void)alarmAddOn:(id)arg1 didDismissAlarms:(id)arg2;	// IMP=0x000000000003c0f7
- (void)alarmAddOn:(id)arg1 didFireAlarms:(id)arg2;	// IMP=0x000000000003bfea
- (void)alarmAddOn:(id)arg1 didChangeAlarms:(id)arg2;	// IMP=0x000000000003bee0
- (void)alarmAddOn:(id)arg1 didUpdateAlarms:(id)arg2;	// IMP=0x000000000003bdd6
- (void)alarmAddOn:(id)arg1 didRemoveAlarms:(id)arg2;	// IMP=0x000000000003bccc
- (void)alarmAddOn:(id)arg1 didAddAlarms:(id)arg2;	// IMP=0x000000000003bbc2
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000003ba32
- (void)removeObserverForNotificationName:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b7c6
- (void)addObserverForNotificationName:(id)arg1 constraints:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x000000000003b57f
- (void)dismissAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b422
- (void)snoozeAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b2c5
- (void)removeAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000003b085
- (void)updateAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000003ae45
- (void)addAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000003abac
- (void)alarmsforAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x000000000003a945
- (void)_postNotificationName:(id)arg1 forAlarms:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(_Bool)arg4;	// IMP=0x000000000003a101
- (_Bool)_canRequestCreationOfCluster:(id)arg1;	// IMP=0x000000000003a040
- (void)_addOnRemoved:(id)arg1;	// IMP=0x0000000000039fda
- (void)_addOnAdded:(id)arg1;	// IMP=0x0000000000039f54
- (void)_clientLost:(id)arg1;	// IMP=0x0000000000039d74
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x0000000000039c1d
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000039b47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

