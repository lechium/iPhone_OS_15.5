//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC4Maps23RefinementsBarViewModel;
@protocol _TtP4Maps26RefinementsBarViewDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC4Maps20RefinementsBarUIView : UIView
{
    MISSING_TYPE *refinementBar;	// 8 = 0x8
    MISSING_TYPE *hostingView;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0040000000072110
@property(nonatomic, retain) _TtC4Maps23RefinementsBarViewModel *viewModel;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000071940
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000071910
@property(nonatomic) __weak id <_TtP4Maps26RefinementsBarViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) UIView *hostingView; // @synthesize hostingView;

@end
