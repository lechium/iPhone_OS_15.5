//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001e09d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e09bd
+ (MISSING_TYPE *)becameFatallyBlocked:index: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001e0960
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x00200000001e0c77
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x00100000001e0c2a
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x00100000001e0be8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e0bc0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e0b93
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e0b6b
- (void *)adaptee;	// IMP=0x00100000001e0b38
- (void)endService;	// IMP=0x00100000001e0b1d
- (void)beginService;	// IMP=0x00100000001e0a6f
- (id)init;	// IMP=0x00100000001e0a32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
