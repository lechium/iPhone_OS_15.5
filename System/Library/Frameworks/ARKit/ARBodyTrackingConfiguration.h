//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARWorldMap, NSSet;

@interface ARBodyTrackingConfiguration
{
    _Bool _wantsHDREnvironmentTextures;	// 8 = 0x8
    _Bool _automaticImageScaleEstimationEnabled;	// 9 = 0x9
    _Bool _automaticSkeletonScaleEstimationEnabled;	// 10 = 0xa
    _Bool _appClipCodeTrackingEnabled;	// 11 = 0xb
    ARWorldMap *_initialWorldMap;	// 16 = 0x10
    long long _environmentTexturing;	// 24 = 0x18
    unsigned long long _planeDetection;	// 32 = 0x20
    NSSet *_detectionImages;	// 40 = 0x28
    long long _maximumNumberOfTrackedImages;	// 48 = 0x30
}

+ (_Bool)supportsAppClipCodeTracking;	// IMP=0x0000000000005b72
+ (id)new;	// IMP=0x0000000000005b68
- (void).cxx_destruct;	// IMP=0x0000000000005ca7
@property(nonatomic) _Bool appClipCodeTrackingEnabled; // @synthesize appClipCodeTrackingEnabled=_appClipCodeTrackingEnabled;
@property(nonatomic) long long maximumNumberOfTrackedImages; // @synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages;
@property(nonatomic) _Bool automaticSkeletonScaleEstimationEnabled; // @synthesize automaticSkeletonScaleEstimationEnabled=_automaticSkeletonScaleEstimationEnabled;
@property(nonatomic) _Bool automaticImageScaleEstimationEnabled; // @synthesize automaticImageScaleEstimationEnabled=_automaticImageScaleEstimationEnabled;
@property(copy, nonatomic) NSSet *detectionImages; // @synthesize detectionImages=_detectionImages;
@property(nonatomic) unsigned long long planeDetection; // @synthesize planeDetection=_planeDetection;
@property(nonatomic) _Bool wantsHDREnvironmentTextures; // @synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures;
@property(nonatomic) long long environmentTexturing; // @synthesize environmentTexturing=_environmentTexturing;
@property(retain, nonatomic) ARWorldMap *initialWorldMap; // @synthesize initialWorldMap=_initialWorldMap;
- (id)init;	// IMP=0x0000000000005b39

// Remaining properties
@property(nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled; // @dynamic autoFocusEnabled;

@end
