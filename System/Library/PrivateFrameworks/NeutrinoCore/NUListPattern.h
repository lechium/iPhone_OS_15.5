//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NUListPattern
{
    NSArray *_list;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000064339
@property(readonly) NSArray *list; // @synthesize list=_list;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;	// IMP=0x000000000006416a
- (_Bool)isEqualToListPattern:(id)arg1;	// IMP=0x00000000000640d9
- (_Bool)isEqualToPattern:(id)arg1;	// IMP=0x000000000006407c
- (id)stringRepresentation;	// IMP=0x0000000000063e58
- (id)optimizedPattern;	// IMP=0x0000000000063bf2
- (id)shortestMatch;	// IMP=0x0000000000063a21
- (_Bool)isFixedOrder;	// IMP=0x00000000000638df
- (id)tokens;	// IMP=0x0000000000063733
- (id)initWithList:(id)arg1;	// IMP=0x0000000000063387
- (id)init;	// IMP=0x000000000006336e

@end
