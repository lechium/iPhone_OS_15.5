//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MLInt64ProbabilityDictionary
{
    map_e095e051 _mapIntLabelToIndex;	// 32 = 0x20
}

+ (id)probabilityDictionaryForInt64Labels:(id)arg1;	// IMP=0x000000000015ce4c
- (id).cxx_construct;	// IMP=0x000000000015cad1
- (void).cxx_destruct;	// IMP=0x000000000015cab4
@property(nonatomic) map_e095e051 mapIntLabelToIndex; // @synthesize mapIntLabelToIndex=_mapIntLabelToIndex;
- (id)copy;	// IMP=0x000000000015c732
- (id)keyEnumerator;	// IMP=0x000000000015c70f
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000015c655
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000015c4e8
- (id)objectForKey:(id)arg1;	// IMP=0x000000000015c420
- (unsigned long long)count;	// IMP=0x000000000015c40e
- (id)initWithIntLabels:(id)arg1;	// IMP=0x000000000015c1b2

@end

