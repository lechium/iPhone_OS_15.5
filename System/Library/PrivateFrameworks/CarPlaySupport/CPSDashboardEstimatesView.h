//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSTravelEstimatesStringFormatter, NSString, UILabel, UIStackView;

@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying>
{
    UILabel *_etaLabel;	// 8 = 0x8
    UILabel *_timeRemainingLabel;	// 16 = 0x10
    UILabel *_distanceRemainingLabel;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    CPSTravelEstimatesStringFormatter *_travelEstimatesStringFormatter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000060716
@property(retain, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter; // @synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *distanceRemainingLabel; // @synthesize distanceRemainingLabel=_distanceRemainingLabel;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) UILabel *etaLabel; // @synthesize etaLabel=_etaLabel;
- (void)updateTripEstimates:(id)arg1;	// IMP=0x000000000006033e
- (void)layoutSubviews;	// IMP=0x0000000000060036
- (id)_labelFont;	// IMP=0x000000000005fe93
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005fd9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005f882

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
