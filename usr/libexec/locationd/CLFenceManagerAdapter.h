//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFenceManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000344e36
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000344e1d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000344dc0
+ (_Bool)isSupported;	// IMP=0x0010000000347e85
- (void)getFencesForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000347d7b
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;	// IMP=0x0010000000347797
- (_Bool)syncgetFences:(void *)arg1 forKey:(id)arg2;	// IMP=0x001000000034770a
- (_Bool)syncgetHasMonitoredFences:(id)arg1;	// IMP=0x0010000000347686
- (void)requestRegionState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346ed9
- (void)removeFence:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346c93
- (void)addFence:(CDUnknownBlockType)arg1;	// IMP=0x0010000000345048
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000345020
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000344ff3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000344fcb
- (void *)adaptee;	// IMP=0x0010000000344f98
- (void)endService;	// IMP=0x0010000000344f7d
- (void)beginService;	// IMP=0x0010000000344ecf
- (id)init;	// IMP=0x0010000000344e92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

