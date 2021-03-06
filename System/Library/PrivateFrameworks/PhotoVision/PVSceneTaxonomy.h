//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PFSceneTaxonomy, PVSceneTaxonomyNode;

@interface PVSceneTaxonomy : NSObject
{
    NSString *_sha256Hash;	// 8 = 0x8
    PFSceneTaxonomy *_taxonomy;	// 16 = 0x10
}

+ (id)sharedTaxonomy;	// IMP=0x0000000000020ef5
- (void).cxx_destruct;	// IMP=0x0000000000020ecd
@property(retain) PFSceneTaxonomy *taxonomy; // @synthesize taxonomy=_taxonomy;
@property(readonly, copy) NSString *sha256Hash; // @synthesize sha256Hash=_sha256Hash;
- (id)description;	// IMP=0x0000000000020e80
- (id)nodeForName:(id)arg1;	// IMP=0x0000000000020e2b
- (id)nodeForSceneClassId:(unsigned int)arg1;	// IMP=0x0000000000020dd6
@property(readonly) PVSceneTaxonomyNode *rootNode;
- (id)initWithGraphURL:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3;	// IMP=0x0000000000020c70
- (id)init;	// IMP=0x0000000000020bfb

@end

