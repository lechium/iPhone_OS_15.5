//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapView, NSMutableArray, NSMutableDictionary, NSNumber, NSNumberFormatter, NSString, UIColor, UIVisualEffectView, _MKScaleUnitsView;

@interface MKScaleView : UIView
{
    double _distanceInMeters;	// 8 = 0x8
    _Bool _useMetric;	// 16 = 0x10
    _Bool _useYardsForShortDistances;	// 17 = 0x11
    NSNumberFormatter *_floatNumberFormatter;	// 24 = 0x18
    double _magicNumbers[3];	// 32 = 0x20
    UIColor *_borderColorRegular;	// 56 = 0x38
    UIColor *_borderColorSatellite;	// 64 = 0x40
    NSMutableArray *_segments;	// 72 = 0x48
    UIVisualEffectView *_blurredSegment;	// 80 = 0x50
    _MKScaleUnitsView *_unitsView;	// 88 = 0x58
    long long _oldNumberOfSegments;	// 96 = 0x60
    UIView *_displayedOutline;	// 104 = 0x68
    UIView *_displayedWhiteOutline;	// 112 = 0x70
    double _segmentLengthInPixels;	// 120 = 0x78
    double _resultSegmentLength;	// 128 = 0x80
    double _resultSegmentLengthInMeters;	// 136 = 0x88
    NSMutableDictionary *_formattedNumberCache;	// 144 = 0x90
    NSString *_feetAbbreviation;	// 152 = 0x98
    NSString *_yardAbbreviation;	// 160 = 0xa0
    NSString *_milesAbbreviation;	// 168 = 0xa8
    NSString *_metersAbbreviation;	// 176 = 0xb0
    NSString *_kilometersAbbreviation;	// 184 = 0xb8
    long long _grQuality;	// 192 = 0xc0
    int _layoutCounter;	// 200 = 0xc8
    NSNumber *_useLightText;	// 208 = 0xd0
    _Bool _isVisible;	// 216 = 0xd8
    _Bool _usedInternallyByMapView;	// 217 = 0xd9
    MKMapView *_mapView;	// 224 = 0xe0
    long long _scaleVisibility;	// 232 = 0xe8
    long long _legendAlignment;	// 240 = 0xf0
    unsigned long long _mapType;	// 248 = 0xf8
}

+ (id)scaleViewWithMapView:(id)arg1;	// IMP=0x00000000001ef3ed
- (void).cxx_destruct;	// IMP=0x00000000001f1f6f
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool usedInternallyByMapView; // @synthesize usedInternallyByMapView=_usedInternallyByMapView;
@property(nonatomic) long long legendAlignment; // @synthesize legendAlignment=_legendAlignment;
@property(nonatomic) long long scaleVisibility; // @synthesize scaleVisibility=_scaleVisibility;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(_Bool)arg3 inMetric:(_Bool)arg4 displaysYardsForShortDistances:(_Bool)arg5 strings:(id)arg6;	// IMP=0x00000000001f1ca6
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;	// IMP=0x00000000001f1bec
- (id)_scaleViewFormattedStringForFloat:(double)arg1;	// IMP=0x00000000001f1b39
- (id)_formattedStringForFloat:(double)arg1;	// IMP=0x00000000001f1acb
- (void)layoutSubviews;	// IMP=0x00000000001f0d3c
- (void)_calculateSegments;	// IMP=0x00000000001f0a7f
@property(nonatomic) _Bool useLightText; // @dynamic useLightText;
- (id)_setupSegmentView:(_Bool)arg1;	// IMP=0x00000000001f0524
@property(nonatomic) double distanceInMeters; // @dynamic distanceInMeters;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001f0452
- (void)memoryWarning:(id)arg1;	// IMP=0x00000000001f0411
- (void)updateLocale:(id)arg1;	// IMP=0x00000000001f035e
- (void)_updateStrings;	// IMP=0x00000000001f0289
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001f017f
- (void)_updateVisibility;	// IMP=0x00000000001efef7
- (void)shouldUpdateScaleNotification:(id)arg1;	// IMP=0x00000000001efee5
- (void)dealloc;	// IMP=0x00000000001efe48
- (id)_setupOutlineView;	// IMP=0x00000000001efa95
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ef5c5
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000001ef59c
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000001ef58a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ef578
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001ef4dd
- (id)initWithMapView:(id)arg1;	// IMP=0x00000000001ef436

@end

