//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ARFaceTrackingConfiguration
{
    _Bool _worldTrackingEnabled;	// 8 = 0x8
    long long _maximumNumberOfTrackedFaces;	// 16 = 0x10
}

+ (_Bool)supportsWorldTracking;	// IMP=0x000000000000215f
+ (long long)supportedNumberOfTrackedFaces;	// IMP=0x0000000000002157
+ (id)new;	// IMP=0x000000000000214d
@property(nonatomic, getter=isWorldTrackingEnabled) _Bool worldTrackingEnabled; // @synthesize worldTrackingEnabled=_worldTrackingEnabled;
@property(nonatomic) long long maximumNumberOfTrackedFaces; // @synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces;
- (id)init;	// IMP=0x000000000000211e

@end

