//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface BatteryStateAgeView : UIView
{
    UILabel *_stateUpdatedLabel;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    _Bool _shouldShowSeparator;	// 24 = 0x18
    NSDate *_dateOfLastSync;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009643e9
@property(retain, nonatomic) NSDate *dateOfLastSync; // @synthesize dateOfLastSync=_dateOfLastSync;
@property(nonatomic) _Bool shouldShowSeparator; // @synthesize shouldShowSeparator=_shouldShowSeparator;
- (id)viewForLastBaselineLayout;	// IMP=0x00100000009643b3
- (id)viewForFirstBaselineLayout;	// IMP=0x001000000096439e
- (void)stopAnimating;	// IMP=0x001000000096433d
- (void)startAnimating;	// IMP=0x00100000009642dc
- (void)_updateContents;	// IMP=0x0010000000964049
- (void)_setupStyling;	// IMP=0x0010000000963f90
- (void)_setupConstraints;	// IMP=0x0010000000963c1f
- (id)init;	// IMP=0x0010000000963ad0

@end
