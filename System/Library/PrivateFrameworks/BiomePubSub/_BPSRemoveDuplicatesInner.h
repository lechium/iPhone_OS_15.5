//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _BPSRemoveDuplicatesInner
{
    CDUnknownBlockType _isDuplicate;	// 8 = 0x8
    id _last;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003aa0
@property(retain, nonatomic) id last; // @synthesize last=_last;
@property(readonly, nonatomic) CDUnknownBlockType isDuplicate; // @synthesize isDuplicate=_isDuplicate;
- (id)receiveNewValue:(id)arg1;	// IMP=0x00000000000039bc
- (id)initWithDownstream:(id)arg1 isDuplicate:(CDUnknownBlockType)arg2;	// IMP=0x000000000000391e

@end

