//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001e360f
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e35f6
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001e3599
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x00200000001e4b78
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000001e4b72
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e48b1
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x00100000001e48ab
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x00100000001e486f
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x00100000001e3cfe
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x00100000001e3851
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x00100000001e3822
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e37fa
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e37cd
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e37a5
- (void *)adaptee;	// IMP=0x00100000001e3772
- (void)endService;	// IMP=0x00100000001e3757
- (void)beginService;	// IMP=0x00100000001e36a8
- (id)init;	// IMP=0x00100000001e366b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
