//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHMutableTokenizedTextResultColumn
{
}

- (id)_mutableTokenRows;	// IMP=0x00000000000945b0
- (void)sortTokenRows;	// IMP=0x0000000000094270
- (void)removeTokenRowAtIndex:(long long)arg1;	// IMP=0x0000000000094140
- (void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000093fc0
- (long long)addTokenRowWithTokens:(id)arg1;	// IMP=0x0000000000093f30
@property(copy, nonatomic) NSArray *tokenRows; // @dynamic tokenRows;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093ec0
- (id)initWithTokenRows:(id)arg1;	// IMP=0x0000000000093dc0

@end

