//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHAssetCoarseLocationProperties
{
    double _gpsHorizontalAccuracy;	// 16 = 0x10
}

+ (id)propertiesToFetch;	// IMP=0x0000000000108a9f
+ (id)propertySetName;	// IMP=0x0000000000108a92
@property(readonly, nonatomic) double gpsHorizontalAccuracy; // @synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x000000000010899d

@end
