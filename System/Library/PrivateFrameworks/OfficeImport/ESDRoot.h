//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot
{
    NSMutableArray *mChildren;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000331b1d
- (void)writeToWriter:(struct OcWriter *)arg1;	// IMP=0x0000000000331a46
- (void)addChild:(id)arg1;	// IMP=0x00000000003319c6
- (id)childAt:(unsigned long long)arg1;	// IMP=0x00000000000189b9
- (unsigned long long)childCount;	// IMP=0x000000000001899c
- (void *)eshRoot;	// IMP=0x000000000000d36b
- (id)initFromReader:(struct OcReader *)arg1;	// IMP=0x00000000000dc143
- (id)init;	// IMP=0x000000000000cf6b
- (id)initWithEshObject:(struct EshObject *)arg1;	// IMP=0x000000000000d270
- (id)pbReferenceWithID:(unsigned int)arg1;	// IMP=0x00000000000188a3
- (id)initWithPbState:(id)arg1;	// IMP=0x000000000000cdb5

@end
