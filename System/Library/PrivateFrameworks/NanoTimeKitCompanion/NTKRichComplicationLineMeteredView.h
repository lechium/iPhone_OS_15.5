//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NTKRichComplicationLineMeteredView
{
    NSArray *_meterLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008dd30
@property(retain, nonatomic) NSArray *meterLayers; // @synthesize meterLayers=_meterLayers;
- (struct CGPoint)_pointAtProgress:(float)arg1;	// IMP=0x000000000008dcb8
- (void)colorMetersWithProgress:(double)arg1;	// IMP=0x000000000008dc10
- (void)_updateGradient;	// IMP=0x000000000008dbba
- (void)setProgress:(double)arg1;	// IMP=0x000000000008db6f
- (id)_shapeStrokeColor;	// IMP=0x000000000008db67
- (void)_setupShapeLayer:(id)arg1;	// IMP=0x000000000008d842

@end
