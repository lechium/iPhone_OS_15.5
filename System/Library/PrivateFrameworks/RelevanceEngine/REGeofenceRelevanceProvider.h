//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider
{
    CLCircularRegion *_region;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (id)relevanceSimulatorID;	// IMP=0x000000000003e50c
- (void).cxx_destruct;	// IMP=0x000000000003eaf7
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (id)description;	// IMP=0x000000000003ea4b
- (unsigned long long)_hash;	// IMP=0x000000000003e9fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e919
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e8b8
- (id)dictionaryEncoding;	// IMP=0x000000000003e713
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003e519
- (id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000003e457
- (id)initWithRegion:(id)arg1;	// IMP=0x000000000003e443
- (id)init;	// IMP=0x000000000003e403

@end

