//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class HKLegendEntry, UIImageView, UILabel, _HKLegendDot;

@interface _HKLegendEntryView : UIStackView
{
    HKLegendEntry *_currentLegendEntry;	// 8 = 0x8
    UILabel *_legendLabel;	// 16 = 0x10
    _HKLegendDot *_legendDot;	// 24 = 0x18
    UIImageView *_legendIcon;	// 32 = 0x20
    HKLegendEntry *_legendEntry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c8f78
@property(retain, nonatomic) HKLegendEntry *legendEntry; // @synthesize legendEntry=_legendEntry;
- (id)initWithLegendEntry:(id)arg1;	// IMP=0x00000000000c878a

@end
