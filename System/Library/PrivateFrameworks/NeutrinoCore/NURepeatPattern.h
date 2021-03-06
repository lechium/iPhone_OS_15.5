//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUPattern;

@interface NURepeatPattern
{
    NUPattern *_pattern;	// 16 = 0x10
    long long _minCount;	// 24 = 0x18
    long long _maxCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006770b
@property(readonly) long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly) long long minCount; // @synthesize minCount=_minCount;
@property(readonly) NUPattern *pattern; // @synthesize pattern=_pattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;	// IMP=0x0000000000067597
- (_Bool)isEqualToRepeatPattern:(id)arg1;	// IMP=0x00000000000674bf
- (_Bool)isEqualToPattern:(id)arg1;	// IMP=0x0000000000067462
- (id)stringRepresentation;	// IMP=0x0000000000067265
- (id)optimizedPattern;	// IMP=0x00000000000671b5
- (id)shortestMatch;	// IMP=0x00000000000670c2
- (_Bool)isFixedOrder;	// IMP=0x0000000000067093
- (id)tokens;	// IMP=0x0000000000067076
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;	// IMP=0x000000000006639b
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;	// IMP=0x000000000006637f
- (id)initWithPattern:(id)arg1 count:(long long)arg2;	// IMP=0x000000000006636a
- (id)init;	// IMP=0x0000000000065ff7

@end

