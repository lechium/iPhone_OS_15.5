//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : NSObject
{
}

+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;	// IMP=0x000000000018d45f
+ (id)oadStrokeFrom:(const struct XlChartLineStyle *)arg1;	// IMP=0x000000000017092b
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle *)arg2 xlFillStyle:(const struct XlChartFillStyle *)arg3;	// IMP=0x000000000017a5d1
+ (id)oadGraphicPropertiesFromXlLeaderLineStyleInPlot:(const void *)arg1 state:(id)arg2;	// IMP=0x0000000000390a5e
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;	// IMP=0x000000000017f778
+ (id)oadGraphicPropertiesFromXlChartTextFrame:(void *)arg1 state:(id)arg2;	// IMP=0x0000000000390a3c
+ (id)oadGraphicPropertiesFromShapePropsStream:(const char *)arg1 size:(unsigned int)arg2;	// IMP=0x0000000000390964
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg1 state:(id)arg2;	// IMP=0x000000000017029a
+ (int)lineWeightEnumFromWidth:(float)arg1;	// IMP=0x0000000000390c3c
+ (int)presetLinePatternEnumFromDash:(id)arg1;	// IMP=0x0000000000390b93
+ (float)widthFromLineWeightEnum:(int)arg1;	// IMP=0x00000000001777ac
+ (BOOL)oaPresetDashTypeFromLinePatternEnum:(int)arg1;	// IMP=0x0000000000177866
+ (id)mapAssociatedEscherObjectstate:(id)arg1;	// IMP=0x0000000000202ca0
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;	// IMP=0x000000000018d6cd
+ (id)mapFillStyle:(const struct XlChartFillStyle *)arg1 xlPictureFormat:(const struct XlChartPicF *)arg2 state:(id)arg3;	// IMP=0x0000000000170540
+ (id)mapPresetDashFromPattern:(int)arg1;	// IMP=0x00000000001777f3

@end
