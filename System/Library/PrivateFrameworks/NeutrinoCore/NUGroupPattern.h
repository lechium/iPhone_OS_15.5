//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NUGroupPattern
{
    NSArray *_group;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000065190
@property(readonly) NSArray *group; // @synthesize group=_group;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;	// IMP=0x0000000000064f66
- (_Bool)isEqualToGroupPattern:(id)arg1;	// IMP=0x0000000000064ed5
- (_Bool)isEqualToPattern:(id)arg1;	// IMP=0x0000000000064e78
- (id)stringRepresentation;	// IMP=0x0000000000064c54
- (id)optimizedPattern;	// IMP=0x00000000000649ee
- (id)shortestMatch;	// IMP=0x000000000006494e
- (_Bool)isFixedOrder;	// IMP=0x00000000000648bd
- (id)tokens;	// IMP=0x0000000000064711
- (id)initWithGroup:(id)arg1;	// IMP=0x0000000000064365
- (id)init;	// IMP=0x000000000006434c

@end

