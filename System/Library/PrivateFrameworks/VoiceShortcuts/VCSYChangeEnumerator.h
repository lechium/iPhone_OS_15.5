//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface VCSYChangeEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006feb7
- (id)nextObject;	// IMP=0x000000000006fdf7
- (id)initWithLazyArray:(id)arg1;	// IMP=0x000000000006fcb6

@end
