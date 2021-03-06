//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPVolumeSlider, NSArray, NSMapTable, NSMutableSet;

@interface MPVolumeGroupSliderCoordinator : NSObject
{
    NSArray *_allSliders;	// 8 = 0x8
    NSMutableSet *_individualVolumeSliders;	// 16 = 0x10
    MPVolumeSlider *_trackingSlider;	// 24 = 0x18
    NSMapTable *_optimisticValues;	// 32 = 0x20
    NSMapTable *_optimisticScales;	// 40 = 0x28
    int _inFlightDisableOptimisticStateRequests;	// 48 = 0x30
    _Bool _shouldOverrideTracking;	// 52 = 0x34
    _Bool _synced;	// 53 = 0x35
    MPVolumeSlider *_masterVolumeSlider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000185a51
@property(readonly, nonatomic) _Bool synced; // @synthesize synced=_synced;
@property(readonly, nonatomic) MPVolumeSlider *masterVolumeSlider; // @synthesize masterVolumeSlider=_masterVolumeSlider;
- (void)_setControlEventsForVolumeSlider:(id)arg1 add:(_Bool)arg2;	// IMP=0x00000000001859b7
- (void)_removeControlEventsForVolumeSliders:(id)arg1;	// IMP=0x000000000018588b
- (void)_removeControlEventsForVolumeSlider:(id)arg1;	// IMP=0x0000000000185877
- (void)_addControlEventsForVolumeSliders:(id)arg1;	// IMP=0x0000000000185748
- (void)_addControlEventsForVolumeSlider:(id)arg1;	// IMP=0x0000000000185731
- (id)_findExistingVolumeSlider:(id)arg1;	// IMP=0x00000000001852cd
- (void)syncSliders:(_Bool)arg1;	// IMP=0x0000000000184f83
- (void)_resetMasterVolumeSlider;	// IMP=0x0000000000184f05
- (void)_updateOptimisticValueCache;	// IMP=0x0000000000184cba
- (void)_resetOptimisticScales;	// IMP=0x0000000000184857
- (float)_maxOptimisticValue;	// IMP=0x000000000018467a
- (void)volumeSliderDidEndTracking:(id)arg1;	// IMP=0x0000000000183e1c
- (void)volumeSliderValueChanged:(id)arg1;	// IMP=0x00000000001835d7
- (void)removeAllIndividualVolumeSliders;	// IMP=0x0000000000183592
- (void)removeIndividualVolumeSlider:(id)arg1;	// IMP=0x000000000018348b
- (void)addIndividualVolumeSlider:(id)arg1;	// IMP=0x0000000000183342
@property(readonly, copy, nonatomic) NSArray *individualVolumeSliders;
- (id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2;	// IMP=0x000000000018305f

@end

