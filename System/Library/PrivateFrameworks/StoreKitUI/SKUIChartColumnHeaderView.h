//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnHeaderView : UIControl
{
    NSArray *_buttons;	// 8 = 0x8
    long long _selectedTitleIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a4511
@property(nonatomic) long long selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;
- (void)_reloadSelectedButton;	// IMP=0x00000000002a4446
@property(readonly, nonatomic) double edgePadding;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000002a43ad
- (void)sizeToFit;	// IMP=0x00000000002a413d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002a40bd
- (void)layoutSubviews;	// IMP=0x00000000002a3db9
@property(copy, nonatomic) NSArray *titles;
- (void)dealloc;	// IMP=0x00000000002a353b

@end

