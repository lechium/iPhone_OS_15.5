//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionsElevationLabelSummaryView, GEOComposedRoute;

__attribute__((visibility("hidden")))
@interface DirectionsElevationSummaryCollectionViewCell
{
    DirectionsElevationLabelSummaryView *_labelSummaryView;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005e2547
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void)_updateLabels;	// IMP=0x00100000005e2277
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005e1855

@end

