//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphLocationCityNodeCollection;

@interface PGGraphLocationCityNode
{
}

+ (id)countyOfCity;	// IMP=0x00000000002b3196
+ (id)stateOfCity;	// IMP=0x00000000002b3045
+ (id)countryOfCity;	// IMP=0x00000000002b2ef4
+ (id)momentInCity;	// IMP=0x00000000002b2d69
+ (id)addressOfCity;	// IMP=0x00000000002b2bde
+ (id)filter;	// IMP=0x00000000002b2ba9
- (unsigned long long)featureType;	// IMP=0x00000000002b1859
@property(readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;
- (Class)collectionClass;	// IMP=0x00000000002b1812
- (id)label;	// IMP=0x00000000002b17f3
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000002b17c4

@end

