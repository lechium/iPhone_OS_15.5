//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSRouteEstimatesView, CPTrip, NSString;

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying>
{
    CPTrip *_trip;	// 8 = 0x8
    CPSRouteEstimatesView *_routeEstimatesView;	// 16 = 0x10
    unsigned long long _tripEstimateStyle;	// 24 = 0x18
    UIView *_borderView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006c4d6
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property(readonly, nonatomic) CPSRouteEstimatesView *routeEstimatesView; // @synthesize routeEstimatesView=_routeEstimatesView;
@property(readonly, nonatomic) CPTrip *trip; // @synthesize trip=_trip;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;	// IMP=0x000000000006c40c
- (void)showManeuvers:(id)arg1;	// IMP=0x000000000006c406
- (void)didMoveToSuperview;	// IMP=0x000000000006c3c5
- (void)_updateStyle;	// IMP=0x000000000006bedf
- (void)removeFromSuperview;	// IMP=0x000000000006be4d
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000006bdd6
- (id)initWithTrip:(id)arg1 style:(unsigned long long)arg2;	// IMP=0x000000000006b934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
