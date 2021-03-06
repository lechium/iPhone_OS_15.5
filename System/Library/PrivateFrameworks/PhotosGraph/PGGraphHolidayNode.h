//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>
#import <PhotosGraph/PGGraphLocalizable-Protocol.h>

@class NSString, PGGraphHolidayNodeCollection;

@interface PGGraphHolidayNode <PGGraphLocalizable, PGAssetCollectionFeature>
{
    unsigned int _category:8;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (id)holidayNodeFilterWithNames:(id)arg1;	// IMP=0x00000000004c0d55
+ (id)holidayNodeFilterWithCategory:(unsigned long long)arg1;	// IMP=0x00000000004c0c67
+ (id)datesOfCelebration;	// IMP=0x00000000004c0aac
+ (id)filter;	// IMP=0x00000000004c0a77
- (void).cxx_destruct;	// IMP=0x00000000004c04d6
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphHolidayNodeCollection *collection;
@property(readonly, nonatomic) NSString *localizedName;
- (void)enumerateCelebratingMomentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c031d
- (unsigned short)domain;	// IMP=0x00000000004c0312
- (id)label;	// IMP=0x00000000004c02f3
@property(readonly, copy) NSString *description;
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000004c019b
- (id)propertyDictionary;	// IMP=0x00000000004c00c4
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000004bffc0
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000004bff0c
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2;	// IMP=0x00000000004bfe8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

