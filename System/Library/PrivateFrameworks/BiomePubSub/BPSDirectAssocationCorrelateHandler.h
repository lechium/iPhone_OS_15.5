//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BPSDirectAssocationCorrelateHandler
{
    CDUnknownBlockType _correlating;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000042b0
- (id)correlateWithCurrentEvent:(id)arg1;	// IMP=0x0000000000004039
- (void)receiveCurrentEvent:(id)arg1;	// IMP=0x0000000000004033
- (void)receivePriorEvent:(id)arg1;	// IMP=0x0000000000003fc1
- (id)initWithCorrelating:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003f28

@end

