//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLAccessoryLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000025ffb8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000025ff9f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000025ff42
+ (_Bool)isSupported;	// IMP=0x001000000026039a
- (void)syncSetNavigationStateChange:(int)arg1;	// IMP=0x002000000026022d
- (void)fetchAccessoryBitSetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000260202
- (void)fetchIsAccessoryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002601ca
- (MISSING_TYPE *)syncgetDoSync: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002601a2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000260175
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000026014d
- (void *)adaptee;	// IMP=0x001000000026011a
- (void)endService;	// IMP=0x00100000002600ff
- (void)beginService;	// IMP=0x0010000000260051
- (id)init;	// IMP=0x0010000000260014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
