//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNSaliencyImageObservation
{
    struct CGSize _mOriginalImageSize;	// 8 = 0x8
    struct CGRect _mSalientRegion;	// 24 = 0x18
    struct CGRect _mHighlySalientRegion;	// 56 = 0x38
    struct os_unfair_lock_s _mComputeBoundingBoxesLock;	// 88 = 0x58
    NSArray *_mSalientObjects;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aff09
- (void).cxx_destruct;	// IMP=0x00000000000afef6
@property(readonly, nonatomic) struct CGRect narrowedBoundingBox;
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(readonly, nonatomic) NSArray *salientObjects;
- (void)_computeBoundingBoxes;	// IMP=0x00000000000afbd9
- (id)salientObjectsAndReturnError:(id *)arg1;	// IMP=0x00000000000afbc4
- (struct __CVBuffer *)createSaliencyImageAndReturnError:(id *)arg1;	// IMP=0x00000000000afbaa
- (unsigned long long)hash;	// IMP=0x00000000000afb29
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000afa8d
- (id)vn_cloneObject;	// IMP=0x00000000000af9bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000af7e2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000af4fe
- (id)initWithOriginatingRequestSpecifier:(id)arg1 rawSaliencyImage:(struct __CVBuffer *)arg2 originalImageSize:(struct CGSize)arg3 salientObjectBoundingBoxes:(id)arg4;	// IMP=0x00000000000af3d1

@end

