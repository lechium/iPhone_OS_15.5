//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSString;

@interface RELocationRelevanceProvider
{
    unsigned long long _type;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    double _radius;	// 24 = 0x18
    double _accuracy;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000fb393
- (void).cxx_destruct;	// IMP=0x00000000000fbd6f
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000000fbbde
- (unsigned long long)_hash;	// IMP=0x00000000000fbab5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb8fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb868
- (id)dictionaryEncoding;	// IMP=0x00000000000fb645
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fb3a0
- (id)providerWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000fb31b
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;	// IMP=0x00000000000fb272
- (id)initWithLocation:(id)arg1 radius:(double)arg2;	// IMP=0x00000000000fb254
- (id)initWithLocationType:(unsigned long long)arg1;	// IMP=0x00000000000fb194

@end

