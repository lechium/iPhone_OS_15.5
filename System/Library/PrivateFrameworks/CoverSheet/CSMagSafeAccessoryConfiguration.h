//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSDateTimeLayoutAggregating-Protocol.h>
#import <CoverSheet/CSPersistentContentLayoutProviding-Protocol.h>

@class CSLayoutStrategy, CSMagSafeRingConfiguration;

@interface CSMagSafeAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>
{
    _Bool _staticViewNeeded;	// 8 = 0x8
    CSMagSafeRingConfiguration *_ring;	// 16 = 0x10
    CSMagSafeRingConfiguration *_auxiliaryRing;	// 24 = 0x18
    double _staticViewRingDiameter;	// 32 = 0x20
    CSLayoutStrategy *_layoutStrategy;	// 40 = 0x28
}

+ (id)configuration:(id)arg1 withBatteryPack:(_Bool)arg2;	// IMP=0x000000000009e077
+ (id)staticViewConfiguration;	// IMP=0x000000000009e00d
+ (id)batteryCaseConfiguration;	// IMP=0x000000000009df55
+ (id)defaultConfiguration;	// IMP=0x000000000009deee
- (void).cxx_destruct;	// IMP=0x00000000000a4f6c
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(nonatomic) double staticViewRingDiameter; // @synthesize staticViewRingDiameter=_staticViewRingDiameter;
@property(nonatomic) _Bool staticViewNeeded; // @synthesize staticViewNeeded=_staticViewNeeded;
@property(nonatomic) CSMagSafeRingConfiguration *auxiliaryRing; // @synthesize auxiliaryRing=_auxiliaryRing;
@property(nonatomic) CSMagSafeRingConfiguration *ring; // @synthesize ring=_ring;
- (double)dateTimeSubtitleMaximumWidth;	// IMP=0x00000000000a4ef8
- (double)dateTimeMostExtremeTrailingX;	// IMP=0x00000000000a4e7b
- (double)dateTimeMostExtremeLeadingX;	// IMP=0x00000000000a4dfe
- (_Bool)containsCenteredDateTimeLayout;	// IMP=0x00000000000a4df6
- (double)timeToSubtitleLabelBaselineDifferenceY;	// IMP=0x00000000000a4de8
- (double)timeLabelOffsetForScrollPercent:(double)arg1;	// IMP=0x00000000000a4ddf
- (double)listMinY;	// IMP=0x00000000000a4d89
- (double)dateBaselineToListY;	// IMP=0x00000000000a29be
- (double)bottomContentInset;	// IMP=0x00000000000a29b0
- (double)windowedAccessoryInset;	// IMP=0x00000000000a05e5
- (double)timeLabelBaselineY;	// IMP=0x000000000009e21a
@property(readonly, nonatomic) struct CGRect visibleScreenCoordinatesForSleeve;
- (id)initWithStaticViewNeeded:(_Bool)arg1;	// IMP=0x000000000009e094

@end

