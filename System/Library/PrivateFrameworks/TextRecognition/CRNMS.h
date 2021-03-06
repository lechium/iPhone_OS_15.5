//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRNMS : NSObject
{
    struct deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> _preNMSForests;	// 8 = 0x8
    struct PyramidNMS<unsigned short, double, unsigned char> _pyrNMS;	// 56 = 0x38
    struct deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> _postNMSForests;	// 1368 = 0x558
    unsigned long long _forestFeatureType;	// 1416 = 0x588
    unsigned long long _outputTextFeatureLevel;	// 1424 = 0x590
}

- (id).cxx_construct;	// IMP=0x00000000000b6da5
- (void).cxx_destruct;	// IMP=0x00000000000b6d75
- (void)fillRectForestDatum:(void *)arg1 asDimType:(unsigned long long)arg2 withCRTextDetectorQuad:(const struct CRTextDetectorQuad *)arg3 andInputSize:(struct CGSize)arg4;	// IMP=0x00000000000b6ba9
- (void)fillRectForestDatum:(void *)arg1 asDimType:(unsigned long long)arg2 withQuad:(const void *)arg3 andDimType:(unsigned long long)arg4;	// IMP=0x00000000000b693c
- (void)fillRectForestDatum:(void *)arg1 asDimType:(unsigned long long)arg2 withCGRect:(const struct CGRect *)arg3;	// IMP=0x00000000000b6825
- (id)buildTextFeaturesFromRectForest:(const void *)arg1 byEdge:(unsigned long long)arg2 options:(id)arg3;	// IMP=0x00000000000b5871
- (id)getTextFeatureFromQuadAngleDatum:(const void *)arg1;	// IMP=0x00000000000b57b5
- (void)fillTextFeature:(id)arg1 withRectDatum:(const void *)arg2;	// IMP=0x00000000000b5487
- (_Bool)buildRectForest:(void *)arg1 fromTextDetectorQuadFeatures:(const void *)arg2 forestFeatureType:(unsigned long long)arg3 withInputSize:(struct CGSize)arg4 scoreMap:(struct vImage_Buffer *)arg5 scoreMapScaleFactor:(double)arg6 andTileRects:(id)arg7 options:(id)arg8;	// IMP=0x00000000000b4060
- (_Bool)buildRectForest:(void *)arg1 fromTextDetectorQuadFeatures:(const void *)arg2 forestFeatureType:(unsigned long long)arg3 withInputSize:(struct CGSize)arg4 scoreMap:(struct vImage_Buffer *)arg5 andScoreMapScaleFactor:(double)arg6 options:(id)arg7;	// IMP=0x00000000000b4044
- (unsigned long long)convertSubTextFeatures:(id)arg1 toRects:(void *)arg2;	// IMP=0x00000000000b3bda
- (id)generateConsolidatedTextFeatures:(id)arg1 withScaleIds:(void *)arg2;	// IMP=0x00000000000b3815
- (id)generateConsolidatedTextFeatures:(id)arg1;	// IMP=0x00000000000b37b7
- (_Bool)preprocessScoreMaps;	// IMP=0x00000000000b33e0
- (_Bool)addTextDetectorQuadFeatures:(const void *)arg1 withInputSize:(struct CGSize)arg2 scoreMap:(struct vImage_Buffer *)arg3 scoreMapScaleFactor:(double)arg4 andTileRects:(id)arg5 options:(id)arg6;	// IMP=0x00000000000b31be
- (_Bool)addTextDetectorQuadFeatures:(const void *)arg1 withInputSize:(struct CGSize)arg2 scoreMap:(struct vImage_Buffer *)arg3 andScoreMapScaleFactor:(double)arg4 options:(id)arg5;	// IMP=0x00000000000b31a5
- (_Bool)addTextDetectorQuadFeatures:(const void *)arg1 withInputSize:(struct CGSize)arg2 andScoreMap:(struct vImage_Buffer *)arg3 options:(id)arg4;	// IMP=0x00000000000b3184
- (id)initWithNMSMethodType:(unsigned long long)arg1 NMSScoreType:(unsigned long long)arg2;	// IMP=0x00000000000b309e
- (id)initForRevision:(unsigned long long)arg1;	// IMP=0x00000000000b2e30

@end

