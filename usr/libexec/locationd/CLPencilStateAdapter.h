//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLPencilStateAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000806df8
+ (id)getSilo;	// IMP=0x0010000000806be6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000806bcd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000806b70
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000806dd0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000806da3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000806d7b
- (void *)adaptee;	// IMP=0x0010000000806d48
- (void)endService;	// IMP=0x0010000000806d2d
- (void)beginService;	// IMP=0x0010000000806c7f
- (id)init;	// IMP=0x0010000000806c42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

