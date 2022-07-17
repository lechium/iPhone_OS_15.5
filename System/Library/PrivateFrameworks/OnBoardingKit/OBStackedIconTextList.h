//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView
{
    double _itemSpacing;	// 8 = 0x8
    NSMutableArray *_entries;	// 16 = 0x10
    double _iconTextPadding;	// 24 = 0x18
    unsigned long long _dataDetectorTypes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000274d1
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) double iconTextPadding; // @synthesize iconTextPadding=_iconTextPadding;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 attributedText:(id)arg3;	// IMP=0x0000000000027361
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3;	// IMP=0x0000000000027261
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000027038
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000026f72
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026e4d

@end
