//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDArrayIterator
{
    NSArray *mArray;	// 8 = 0x8
    unsigned int mNextIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003fa48b
- (id)next;	// IMP=0x00000000003fa420
- (_Bool)hasNext;	// IMP=0x00000000003fa3eb
- (id)initWithArray:(id)arg1;	// IMP=0x00000000003fa35b

@end
