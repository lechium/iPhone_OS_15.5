//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVMetadataTextRegionObject
{
    long long _regionID;	// 16 = 0x10
    float _confidence;	// 24 = 0x18
    float _angularOffset;	// 28 = 0x1c
    struct CGRect _angularOffsetBounds;	// 32 = 0x20
}

+ (id)textRegionObjectWithDictionary:(id)arg1 input:(id)arg2;	// IMP=0x0000000000098830
@property(readonly) struct CGRect angularOffsetBounds; // @synthesize angularOffsetBounds=_angularOffsetBounds;
@property(readonly) float angularOffset; // @synthesize angularOffset=_angularOffset;
@property(readonly) float confidence; // @synthesize confidence=_confidence;
@property(readonly) long long regionID; // @synthesize regionID=_regionID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000098d92
- (void)dealloc;	// IMP=0x0000000000098d63
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;	// IMP=0x0000000000098a5e
- (id)initTextRegionObjectWithDictionary:(id)arg1 input:(id)arg2;	// IMP=0x000000000009886c

@end

