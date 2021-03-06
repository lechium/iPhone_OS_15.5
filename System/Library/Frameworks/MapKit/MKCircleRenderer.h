//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer
{
    VKVectorOverlayCircle *_vectorData;	// 88 = 0x58
    double _strokeStart;	// 96 = 0x60
    double _strokeEnd;	// 104 = 0x68
}

+ (Class)_mapkitLeafClass;	// IMP=0x00000000002394dc
- (void).cxx_destruct;	// IMP=0x000000000023a21d
- (void)_updateRenderColors;	// IMP=0x000000000023a0a8
- (id)vectorDataForOverlay:(id)arg1;	// IMP=0x000000000023a05d
- (_Bool)overlayCanProvideVectorData:(id)arg1;	// IMP=0x000000000023a04b
- (id)_vectorData;	// IMP=0x0000000000239ea7
- (_Bool)_canProvideVectorGeometry;	// IMP=0x0000000000239cc3
- (void)setAlpha:(double)arg1;	// IMP=0x0000000000239bd9
- (void)setStrokeColor:(id)arg1;	// IMP=0x0000000000239a1e
- (void)setFillColor:(id)arg1;	// IMP=0x0000000000239863
- (void)setLineWidth:(double)arg1;	// IMP=0x0000000000239738
@property(nonatomic) double strokeEnd;
@property(nonatomic) double strokeStart;
- (void)_performInitialConfiguration;	// IMP=0x00000000002394ed
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000239293
- (void)createPath;	// IMP=0x0000000000239173
@property(readonly, nonatomic) MKCircle *circle;
- (id)initWithCircle:(id)arg1;	// IMP=0x0000000000239132

@end

