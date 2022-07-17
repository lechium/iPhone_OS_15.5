//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;	// 8 = 0x8
    NSMutableArray *_categoriesByViews;	// 16 = 0x10
    NSMutableArray *_inheritedExcludedViews;	// 24 = 0x18
    NSMutableArray *_introducersByCategorys;	// 32 = 0x20
    NSMutableArray *_keyViewMappings;	// 40 = 0x28
    NSMutableArray *_modelToCategorys;	// 48 = 0x30
    NSMutableArray *_piggybackViews;	// 56 = 0x38
    NSMutableArray *_priorityViews;	// 64 = 0x40
    NSMutableArray *_redactions;	// 72 = 0x48
    NSMutableArray *_userControllableViews;	// 80 = 0x50
    CDStruct_0e29c504 _has;	// 88 = 0x58
}

+ (Class)inheritedExcludedViewsType;	// IMP=0x000000000003108c
+ (Class)priorityViewsType;	// IMP=0x000000000003107b
+ (Class)piggybackViewsType;	// IMP=0x000000000003106a
+ (Class)userControllableViewsType;	// IMP=0x0000000000031059
+ (Class)keyViewMappingType;	// IMP=0x0000000000031048
+ (Class)redactionsType;	// IMP=0x0000000000031037
+ (Class)introducersByCategoryType;	// IMP=0x0000000000031026
+ (Class)categoriesByViewType;	// IMP=0x0000000000031015
+ (Class)modelToCategoryType;	// IMP=0x0000000000031004
- (void).cxx_destruct;	// IMP=0x0000000000030a94
@property(retain, nonatomic) NSMutableArray *inheritedExcludedViews; // @synthesize inheritedExcludedViews=_inheritedExcludedViews;
@property(retain, nonatomic) NSMutableArray *priorityViews; // @synthesize priorityViews=_priorityViews;
@property(retain, nonatomic) NSMutableArray *piggybackViews; // @synthesize piggybackViews=_piggybackViews;
@property(retain, nonatomic) NSMutableArray *userControllableViews; // @synthesize userControllableViews=_userControllableViews;
@property(retain, nonatomic) NSMutableArray *keyViewMappings; // @synthesize keyViewMappings=_keyViewMappings;
@property(retain, nonatomic) NSMutableArray *redactions; // @synthesize redactions=_redactions;
@property(retain, nonatomic) NSMutableArray *introducersByCategorys; // @synthesize introducersByCategorys=_introducersByCategorys;
@property(retain, nonatomic) NSMutableArray *categoriesByViews; // @synthesize categoriesByViews=_categoriesByViews;
@property(retain, nonatomic) NSMutableArray *modelToCategorys; // @synthesize modelToCategorys=_modelToCategorys;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000030044
- (unsigned long long)hash;	// IMP=0x000000000002fefd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002fc95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f0dc
- (void)copyTo:(id)arg1;	// IMP=0x000000000002eb64
- (void)writeTo:(id)arg1;	// IMP=0x000000000002e356
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002e349
- (id)dictionaryRepresentation;	// IMP=0x000000000002d900
- (id)description;	// IMP=0x000000000002d851
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d834
- (unsigned long long)inheritedExcludedViewsCount;	// IMP=0x000000000002d817
- (void)addInheritedExcludedViews:(id)arg1;	// IMP=0x000000000002d7ad
- (void)clearInheritedExcludedViews;	// IMP=0x000000000002d790
- (id)priorityViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d773
- (unsigned long long)priorityViewsCount;	// IMP=0x000000000002d756
- (void)addPriorityViews:(id)arg1;	// IMP=0x000000000002d6ec
- (void)clearPriorityViews;	// IMP=0x000000000002d6cf
- (id)piggybackViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d6b2
- (unsigned long long)piggybackViewsCount;	// IMP=0x000000000002d695
- (void)addPiggybackViews:(id)arg1;	// IMP=0x000000000002d62b
- (void)clearPiggybackViews;	// IMP=0x000000000002d60e
- (id)userControllableViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d5f1
- (unsigned long long)userControllableViewsCount;	// IMP=0x000000000002d5d4
- (void)addUserControllableViews:(id)arg1;	// IMP=0x000000000002d56a
- (void)clearUserControllableViews;	// IMP=0x000000000002d54d
- (id)keyViewMappingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d530
- (unsigned long long)keyViewMappingsCount;	// IMP=0x000000000002d513
- (void)addKeyViewMapping:(id)arg1;	// IMP=0x000000000002d4a9
- (void)clearKeyViewMappings;	// IMP=0x000000000002d48c
- (id)redactionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d46f
- (unsigned long long)redactionsCount;	// IMP=0x000000000002d452
- (void)addRedactions:(id)arg1;	// IMP=0x000000000002d3e8
- (void)clearRedactions;	// IMP=0x000000000002d3cb
- (id)introducersByCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d3ae
- (unsigned long long)introducersByCategorysCount;	// IMP=0x000000000002d391
- (void)addIntroducersByCategory:(id)arg1;	// IMP=0x000000000002d327
- (void)clearIntroducersByCategorys;	// IMP=0x000000000002d30a
- (id)categoriesByViewAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d2ed
- (unsigned long long)categoriesByViewsCount;	// IMP=0x000000000002d2d0
- (void)addCategoriesByView:(id)arg1;	// IMP=0x000000000002d266
- (void)clearCategoriesByViews;	// IMP=0x000000000002d249
- (id)modelToCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d22c
- (unsigned long long)modelToCategorysCount;	// IMP=0x000000000002d20f
- (void)addModelToCategory:(id)arg1;	// IMP=0x000000000002d1a5
- (void)clearModelToCategorys;	// IMP=0x000000000002d188
@property(nonatomic) _Bool hasPolicyVersion;

@end
