//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUTimeTransformTrim
{
    CDStruct_1b6d18a9 _beginTime;	// 8 = 0x8
}

@property(readonly) CDStruct_1b6d18a9 beginTime; // @synthesize beginTime=_beginTime;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017c5f2
- (unsigned long long)hash;	// IMP=0x000000000017c55c
- (id)description;	// IMP=0x000000000017c4ff
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000017c4a9
- (id)inverseTransform;	// IMP=0x000000000017c418
- (id)init;	// IMP=0x000000000017c0a5
- (id)initWithTrimBeginTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000017c056

@end
