//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject
{
    NSIndexSet *_insertions;	// 8 = 0x8
    NSIndexSet *_deletions;	// 16 = 0x10
    NSIndexSet *_replacements;	// 24 = 0x18
    NSArray *_moves;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c541
@property(retain, nonatomic) NSArray *moves; // @synthesize moves=_moves;
@property(retain, nonatomic) NSIndexSet *replacements; // @synthesize replacements=_replacements;
@property(retain, nonatomic) NSIndexSet *deletions; // @synthesize deletions=_deletions;
@property(retain, nonatomic) NSIndexSet *insertions; // @synthesize insertions=_insertions;
- (id)resultsByExcludingLocalDeletions:(id)arg1;	// IMP=0x000000000001c369
@property(readonly, nonatomic) long long netCountChange;
- (id)description;	// IMP=0x000000000001c1f3
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

@end

