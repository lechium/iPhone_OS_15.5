//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _HKCardioFitnessClassificationContextDelegate;

@interface _HKCardioFitnessClassificationContext
{
    id <_HKCardioFitnessClassificationContextDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d8ad5
@property(nonatomic) __weak id <_HKCardioFitnessClassificationContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d86d0
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x00000000000d86be
- (id)baseDisplayTypeForOverlay:(long long)arg1;	// IMP=0x00000000000d86b6
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x00000000000d86ae
- (_Bool)canSelectOverlayContextItem:(id)arg1 isDeselecting:(_Bool)arg2 timeScope:(long long)arg3 chartController:(id)arg4;	// IMP=0x00000000000d86a6
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000000d8621

@end
