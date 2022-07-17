//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PHImageRequestBehaviorSpec;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooserRequestInfo : NSObject
{
    _Bool _isCloudShared;	// 8 = 0x8
    float _requestedScale;	// 12 = 0xc
    id <PHResourceChooserAsset> _asset;	// 16 = 0x10
    NSArray *_allowedResourceVersions;	// 24 = 0x18
    PHImageRequestBehaviorSpec *_behaviorSpec;	// 32 = 0x20
    double _fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;	// 40 = 0x28
    NSString *_loggingPrefix;	// 48 = 0x30
    struct CGSize _desiredSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004a90b
@property(copy, nonatomic) NSString *loggingPrefix; // @synthesize loggingPrefix=_loggingPrefix;
@property(readonly, nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable; // @synthesize fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable=_fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property(readonly, nonatomic) _Bool isCloudShared; // @synthesize isCloudShared=_isCloudShared;
@property(readonly, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(readonly, nonatomic) NSArray *allowedResourceVersions; // @synthesize allowedResourceVersions=_allowedResourceVersions;
@property(readonly, nonatomic) float requestedScale; // @synthesize requestedScale=_requestedScale;
@property(readonly, nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property(readonly, nonatomic) id <PHResourceChooserAsset> asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 desiredSize:(struct CGSize)arg2 requestedScale:(float)arg3 allowedResourceVersions:(id)arg4 behaviorSpec:(id)arg5 cloudSharedMode:(_Bool)arg6 fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:(double)arg7 loggingPrefix:(id)arg8;	// IMP=0x000000000004a780

@end
