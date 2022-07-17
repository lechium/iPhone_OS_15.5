//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGElementIdentifierSet, MISSING_TYPE, NSString;

@interface _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency : NSObject
{
    MISSING_TYPE *adjacency;	// 8 = 0x8
}

+ (id)identityWith:(id)arg1;	// IMP=0x00000000000b11a0
- (void).cxx_destruct;	// IMP=0x00000000000b35f0
- (id)mutableCopy;	// IMP=0x00000000000b3550
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b31f0
- (id)targetsWithMinimumCount:(unsigned long long)arg1;	// IMP=0x00000000000b3100
- (id)unionWith:(id)arg1;	// IMP=0x00000000000b2ab0
- (id)differenceWith:(id)arg1;	// IMP=0x00000000000b29f0
- (id)transposed;	// IMP=0x00000000000b2910
- (id)targetsForSourceIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000b2320
- (id)targetsForSources:(id)arg1;	// IMP=0x00000000000b2200
- (_Bool)containsSource:(unsigned long long)arg1 target:(unsigned long long)arg2;	// IMP=0x00000000000b1ed0
- (void)enumerateTargetsBySourceWith:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b1e20
- (id)joinOnTargetsOfAdjacency:(id)arg1;	// IMP=0x00000000000b1bd0
- (id)subtractingSourcesWith:(id)arg1;	// IMP=0x00000000000b1a90
- (id)subtractingTargetsWith:(id)arg1;	// IMP=0x00000000000b1930
- (id)intersectingSourcesWith:(id)arg1;	// IMP=0x00000000000b1870
- (id)intersectingTargetsWith:(id)arg1;	// IMP=0x00000000000b1580
@property(nonatomic, readonly) long long sourcesCount;
@property(nonatomic, readonly) KGElementIdentifierSet *targets;
@property(nonatomic, readonly) KGElementIdentifierSet *sources;
- (id)init;	// IMP=0x00000000000b10a0

@end
