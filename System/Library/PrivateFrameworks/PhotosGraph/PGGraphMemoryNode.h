//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGMemoryNodeProtocol-Protocol.h>

@class NSString, PGGraphFeatureNodeCollection, PGGraphMemoryNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphMemoryNode <PGMemoryNodeProtocol>
{
    NSString *_label;	// 8 = 0x8
    NSString *_uniqueMemoryIdentifier;	// 16 = 0x10
    unsigned long long _memoryCategorySubcategory;	// 24 = 0x18
}

+ (id)uniqueMemoryIdentifierWithMemoryLabel:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000003f4dcb
+ (id)momentOfMemory;	// IMP=0x00000000003f4d74
+ (id)featureOfMemory;	// IMP=0x00000000003f4d1d
+ (id)filterWithUniqueMemoryIdentifierArray:(id)arg1;	// IMP=0x00000000003f4c37
+ (id)filterWithUniqueMemoryIdentifiers:(id)arg1;	// IMP=0x00000000003f4b51
+ (id)filterWithUniqueMemoryIdentifier:(id)arg1;	// IMP=0x00000000003f4a6b
+ (id)filterWithMemoryCategories:(id)arg1;	// IMP=0x00000000003f498c
+ (id)filterWithMemoryCategory:(unsigned long long)arg1;	// IMP=0x00000000003f4929
+ (id)filter;	// IMP=0x00000000003f48f9
+ (id)fullyQualifiedMemoryTypeForMemoryType:(id)arg1 withPrefix:(id)arg2;	// IMP=0x00000000001642f5
+ (id)allMemoryTypeStrings;	// IMP=0x0000000000162787
+ (id)fullMemoryTypeStringWithMemoryCategorySubcategory:(unsigned long long)arg1 featureNodes:(id)arg2;	// IMP=0x0000000000162636
- (void).cxx_destruct;	// IMP=0x00000000003f4219
@property(readonly, nonatomic) unsigned long long memoryCategorySubcategory; // @synthesize memoryCategorySubcategory=_memoryCategorySubcategory;
@property(readonly, nonatomic) NSString *uniqueMemoryIdentifier; // @synthesize uniqueMemoryIdentifier=_uniqueMemoryIdentifier;
- (id)label;	// IMP=0x00000000003f41e6
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000003f4146
@property(readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property(readonly, nonatomic) unsigned long long memoryCategory;
@property(readonly, nonatomic) PGGraphMemoryNodeCollection *collection;
@property(readonly, copy) NSString *description;
- (id)propertyDictionary;	// IMP=0x00000000003f3f5c
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000003f3e5c
- (unsigned short)domain;	// IMP=0x00000000003f3e51
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000003f3d7e
- (id)initWithLabel:(id)arg1 memoryCategorySubcategory:(unsigned long long)arg2 uniqueMemoryIdentifier:(id)arg3;	// IMP=0x00000000003f3cbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

