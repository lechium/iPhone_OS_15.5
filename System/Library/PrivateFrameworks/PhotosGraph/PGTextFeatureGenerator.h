//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSMapTable, NSMutableSet, NSSet;

@interface PGTextFeatureGenerator : NSObject
{
    NSSet *_momentNodes;	// 8 = 0x8
    NSMutableSet *_momentIdentifiers;	// 16 = 0x10
    unsigned long long _numberOfMoments;	// 24 = 0x18
    unsigned long long _numberOfAssets;	// 32 = 0x20
    NSMapTable *_numberOfAssetsBySceneNode;	// 40 = 0x28
    NSCountedSet *_sceneNodes;	// 48 = 0x30
    NSCountedSet *_personNodes;	// 56 = 0x38
    NSCountedSet *_roiNodes;	// 64 = 0x40
    NSCountedSet *_poiNodes;	// 72 = 0x48
    NSCountedSet *_meaningNodes;	// 80 = 0x50
    NSCountedSet *_districtNodes;	// 88 = 0x58
    NSCountedSet *_cityNodes;	// 96 = 0x60
    NSCountedSet *_stateNodes;	// 104 = 0x68
    NSCountedSet *_countryNodes;	// 112 = 0x70
    NSCountedSet *_areaNodes;	// 120 = 0x78
    NSCountedSet *_businessNodes;	// 128 = 0x80
    NSCountedSet *_businessCategoryNodes;	// 136 = 0x88
    NSCountedSet *_holidayNodes;	// 144 = 0x90
    NSCountedSet *_publicEventNodes;	// 152 = 0x98
    NSCountedSet *_publicEventPerformerNodes;	// 160 = 0xa0
    NSCountedSet *_publicEventCategoryNodes;	// 168 = 0xa8
    NSDictionary *_optionsByDomain;	// 176 = 0xb0
}

+ (id)_knowledgeOptionsByDomain;	// IMP=0x000000000030d636
+ (id)_naturalLanguageOptionsByDomain;	// IMP=0x000000000030d4c5
- (void).cxx_destruct;	// IMP=0x000000000030c965
@property(retain, nonatomic) NSDictionary *optionsByDomain; // @synthesize optionsByDomain=_optionsByDomain;
@property(retain, nonatomic) NSCountedSet *publicEventCategoryNodes; // @synthesize publicEventCategoryNodes=_publicEventCategoryNodes;
@property(retain, nonatomic) NSCountedSet *publicEventPerformerNodes; // @synthesize publicEventPerformerNodes=_publicEventPerformerNodes;
@property(retain, nonatomic) NSCountedSet *publicEventNodes; // @synthesize publicEventNodes=_publicEventNodes;
@property(retain, nonatomic) NSCountedSet *holidayNodes; // @synthesize holidayNodes=_holidayNodes;
@property(retain, nonatomic) NSCountedSet *businessCategoryNodes; // @synthesize businessCategoryNodes=_businessCategoryNodes;
@property(retain, nonatomic) NSCountedSet *businessNodes; // @synthesize businessNodes=_businessNodes;
@property(retain, nonatomic) NSCountedSet *areaNodes; // @synthesize areaNodes=_areaNodes;
@property(retain, nonatomic) NSCountedSet *countryNodes; // @synthesize countryNodes=_countryNodes;
@property(retain, nonatomic) NSCountedSet *stateNodes; // @synthesize stateNodes=_stateNodes;
@property(retain, nonatomic) NSCountedSet *cityNodes; // @synthesize cityNodes=_cityNodes;
@property(retain, nonatomic) NSCountedSet *districtNodes; // @synthesize districtNodes=_districtNodes;
@property(retain, nonatomic) NSCountedSet *meaningNodes; // @synthesize meaningNodes=_meaningNodes;
@property(retain, nonatomic) NSCountedSet *poiNodes; // @synthesize poiNodes=_poiNodes;
@property(retain, nonatomic) NSCountedSet *roiNodes; // @synthesize roiNodes=_roiNodes;
@property(retain, nonatomic) NSCountedSet *personNodes; // @synthesize personNodes=_personNodes;
@property(retain, nonatomic) NSCountedSet *sceneNodes; // @synthesize sceneNodes=_sceneNodes;
@property(retain, nonatomic) NSMapTable *numberOfAssetsBySceneNode; // @synthesize numberOfAssetsBySceneNode=_numberOfAssetsBySceneNode;
@property(nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(retain, nonatomic) NSMutableSet *momentIdentifiers; // @synthesize momentIdentifiers=_momentIdentifiers;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg1;	// IMP=0x000000000030c29f
- (id)_textFeaturesForPersonNodes:(id)arg1;	// IMP=0x000000000030bf96
- (id)_textFeaturesForNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3;	// IMP=0x000000000030beaf
- (id)_textFeaturesForNodes:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000030bc5f
- (id)bestTextFeaturesFromTextFeatures:(id)arg1;	// IMP=0x000000000030b498
- (id)generateTextFeatures;	// IMP=0x000000000030a82c
- (void)analyzeMomentNodes;	// IMP=0x0000000000309f64
- (id)naturalLanguageFeatures;	// IMP=0x0000000000309c79
- (id)knowledgeFeatures;	// IMP=0x000000000030991f
- (_Bool)boundTextFeaturesPerEvent;	// IMP=0x0000000000309906
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;	// IMP=0x00000000003098ed
- (void)_resetProperties;	// IMP=0x0000000000309685
- (id)initWithMomentNodes:(id)arg1;	// IMP=0x0000000000309410

@end

