//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetDismissGestureSettings : PTSettings
{
    _Bool _usesGrapeFlags;	// 8 = 0x8
    _Bool _extendSwipeUpRegion;	// 9 = 0x9
    double _edgeRegionSize;	// 16 = 0x10
    double _recognizeAlongEdge;	// 24 = 0x18
    double _extendedEdgeRegionSize;	// 32 = 0x20
    double _extendedRegionInsetX;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x0000000000095ae5
@property(nonatomic) double extendedRegionInsetX; // @synthesize extendedRegionInsetX=_extendedRegionInsetX;
@property(nonatomic) double extendedEdgeRegionSize; // @synthesize extendedEdgeRegionSize=_extendedEdgeRegionSize;
@property(nonatomic) _Bool extendSwipeUpRegion; // @synthesize extendSwipeUpRegion=_extendSwipeUpRegion;
@property(nonatomic) double recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) _Bool usesGrapeFlags; // @synthesize usesGrapeFlags=_usesGrapeFlags;
- (void)setDefaultValues;	// IMP=0x00000000000959d0

@end
