//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphLocationCountryNodeCollection;

@interface PGGraphLocationCountryNode
{
}

+ (id)languageOfCountry;	// IMP=0x00000000002b29d2
+ (id)momentInCountry;	// IMP=0x00000000002b2847
+ (id)addressOfCountry;	// IMP=0x00000000002b26bc
+ (id)filter;	// IMP=0x00000000002b2687
- (unsigned long long)featureType;	// IMP=0x00000000002b267c
- (Class)collectionClass;	// IMP=0x00000000002b266b
@property(readonly, nonatomic) PGGraphLocationCountryNodeCollection *collection;
- (id)label;	// IMP=0x00000000002b2616
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000002b25e7

@end
