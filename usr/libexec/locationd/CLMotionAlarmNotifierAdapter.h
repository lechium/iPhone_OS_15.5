//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionAlarmNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000038d5ca
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000038d5b1
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000038d554
- (void)onClassATimerActivity:(id)arg1 withAlarmId:(unsigned long long)arg2;	// IMP=0x002000000038fd86
- (void)launchWatchApplicationForCompanion:(id)arg1;	// IMP=0x001000000038fd6c
- (void)launchRemoteApplication:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038fb7c
- (void)acknowledgeAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038f401
- (void)unregisterAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038ee79
- (void)registerAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038e21b
- (void)unregisterClient:(CDUnknownBlockType)arg1;	// IMP=0x001000000038ddfe
- (void)registerClient:(CDUnknownBlockType)arg1 adapter:(byref id)arg2;	// IMP=0x001000000038d7dc
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000038d7b4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038d787
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000038d75f
- (void *)adaptee;	// IMP=0x001000000038d72c
- (void)endService;	// IMP=0x001000000038d711
- (void)beginService;	// IMP=0x001000000038d663
- (id)init;	// IMP=0x001000000038d626

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

