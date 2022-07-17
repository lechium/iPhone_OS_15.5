//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NEIPSecSAKernelSession
{
    struct NEIPSecDB_s *_internalSession;	// 56 = 0x38
}

@property(nonatomic) struct NEIPSecDB_s *internalSession; // @synthesize internalSession=_internalSession;
- (void)dealloc;	// IMP=0x0000000000131e86
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;	// IMP=0x0000000000131e0d
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;	// IMP=0x0000000000131d94
- (_Bool)migrateSA:(id)arg1;	// IMP=0x0000000000131bd2
- (_Bool)removeSA:(id)arg1;	// IMP=0x00000000001319e8
- (_Bool)addSA:(id)arg1;	// IMP=0x00000000001314e5
- (_Bool)updateSA:(id)arg1;	// IMP=0x000000000013129a
- (_Bool)addLarvalSA:(id)arg1;	// IMP=0x000000000013108b
- (void)invalidate;	// IMP=0x000000000013103a
- (void)removeAllSAs;	// IMP=0x0000000000130ff4
- (void)setDelegateQueue:(id)arg1;	// IMP=0x0000000000130f86
- (id)description;	// IMP=0x0000000000130f02
- (id)initWithName:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000130eea
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;	// IMP=0x000000000013091a

@end
