//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>
{
    _Bool _is3DLandmarks;	// 8 = 0x8
    NSDictionary *_results;	// 16 = 0x10
}

+ (id)unitTestingFaceLandmarksIs3D:(_Bool)arg1;	// IMP=0x000000000009cfe8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c1d4
- (void).cxx_destruct;	// IMP=0x000000000009d081
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) _Bool is3DLandmarks; // @synthesize is3DLandmarks=_is3DLandmarks;
- (id)localizedStringForLandmarkType:(unsigned long long)arg1;	// IMP=0x000000000009cc98
- (id)pointValuesForFaceLandmarkType:(unsigned long long)arg1;	// IMP=0x000000000009cbf6
- (id)pointsArrayForRegion:(id)arg1;	// IMP=0x000000000009cadf
- (id)initWithVisionFaceLandmarks:(id)arg1;	// IMP=0x000000000009c50d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009c3e6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c1dc

@end
