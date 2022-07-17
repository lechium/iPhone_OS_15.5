//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PVSceneTaxonomy;

@interface PVSceneTaxonomyNode : NSObject
{
    void *_nodeRef;	// 8 = 0x8
    PVSceneTaxonomy *_taxonomy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020a03
@property(readonly) PVSceneTaxonomy *taxonomy; // @synthesize taxonomy=_taxonomy;
@property(readonly) double graphHighRecallThreshold;
@property(readonly) double graphHighPrecisionThreshold;
- (id)description;	// IMP=0x0000000000020981
- (unsigned long long)hash;	// IMP=0x0000000000020973
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002090c
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x00000000000208f2
- (id)localizedSynonyms;	// IMP=0x0000000000020862
- (id)localizedLabel;	// IMP=0x0000000000020810
- (void)traverse:(long long)arg1 visitor:(CDUnknownBlockType)arg2;	// IMP=0x00000000000206f8
@property(readonly, copy) NSSet *detectors;
@property(readonly, copy) NSSet *children;
@property(readonly, copy) NSSet *parents;
@property(readonly) double highPrecisionThreshold;
@property(readonly) double highRecallThreshold;
@property(readonly) double threshold;
@property(readonly, getter=isIndexed) _Bool indexed;
@property(readonly) unsigned int sceneClassId;
@property(readonly, copy) NSString *name;
@property(readonly, getter=isRoot) _Bool root;
- (id)initWithNodeRef:(void *)arg1 taxonomy:(id)arg2;	// IMP=0x0000000000020383

@end
