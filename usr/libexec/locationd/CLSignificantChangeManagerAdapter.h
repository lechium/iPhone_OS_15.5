//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSignificantChangeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000055bca3
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000055bc8a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000055bc2d
+ (_Bool)isSupported;	// IMP=0x001000000055c088
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x002000000055becb
- (void)fetchLastSignificantLocationDistanceAndLatencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000055be94
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000055be6c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000055be3f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000055be17
- (void *)adaptee;	// IMP=0x001000000055bde4
- (void)endService;	// IMP=0x001000000055bdc9
- (void)beginService;	// IMP=0x001000000055bd3c
- (id)init;	// IMP=0x001000000055bcff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
