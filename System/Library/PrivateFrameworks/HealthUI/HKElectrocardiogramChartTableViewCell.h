//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class HKElectrocardiogramAxisView, HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView;

@interface HKElectrocardiogramChartTableViewCell : UITableViewCell
{
    HKElectrocardiogramChartView *_chartView;	// 8 = 0x8
    HKElectrocardiogramInfoView *_infoView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    HKElectrocardiogramAxisView *_axisView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000212e39
@property(retain, nonatomic) HKElectrocardiogramAxisView *axisView; // @synthesize axisView=_axisView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) HKElectrocardiogramInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) HKElectrocardiogramChartView *chartView; // @synthesize chartView=_chartView;
@property(readonly, nonatomic) struct CGSize gridSize;
- (void)_updateMargins;	// IMP=0x0000000000212bb9
- (void)layoutMarginsDidChange;	// IMP=0x0000000000212b78
- (void)_setUpScrollViewContent;	// IMP=0x000000000021207b
- (void)_setUpUI;	// IMP=0x000000000021191e
- (id)initWithGridSize:(struct CGSize)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000021170d

@end

