//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REPriorityRelevanceProvider
{
    float _priority;	// 8 = 0x8
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000941dd
@property(readonly, nonatomic) float priority; // @synthesize priority=_priority;
- (id)description;	// IMP=0x0000000000094463
- (unsigned long long)_hash;	// IMP=0x0000000000094409
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009436f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009432d
- (id)dictionaryEncoding;	// IMP=0x0000000000094276
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000941ea
- (id)initWithPriority:(float)arg1;	// IMP=0x0000000000094154

@end
