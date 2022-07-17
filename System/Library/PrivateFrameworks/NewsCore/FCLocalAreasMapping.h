//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCLocalAreasProvider-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface FCLocalAreasMapping : NSObject <FCLocalAreasProvider, NSSecureCoding, NSCopying>
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_regionMap;	// 16 = 0x10
    NSArray *_areas;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000218a89
- (void).cxx_destruct;	// IMP=0x0000000000218ba4
@property(retain, nonatomic) NSArray *areas; // @synthesize areas=_areas;
@property(retain, nonatomic) NSDictionary *regionMap; // @synthesize regionMap=_regionMap;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000218b48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000218b1e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000218a91
- (id)filterOuterRegions:(id)arg1;	// IMP=0x00000000002187ea
- (id)autoFavoriteTagIDsForLocation:(id)arg1;	// IMP=0x0000000000218690
- (id)areasForLocation:(id)arg1;	// IMP=0x00000000002184ae
- (id)regionsForLocation:(id)arg1;	// IMP=0x000000000021810f
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0000000000217f1d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000217871

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
