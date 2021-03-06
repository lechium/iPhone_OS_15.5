//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class COSWatchView, UILabel;

@interface COSActiveWatchCell : PSTableCell
{
    COSWatchView *_watchView;	// 120 = 0x78
    UILabel *_watchName;	// 128 = 0x80
    UILabel *_watchDetails;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x002000000012394e
@property(retain, nonatomic) UILabel *watchDetails; // @synthesize watchDetails=_watchDetails;
@property(retain, nonatomic) UILabel *watchName; // @synthesize watchName=_watchName;
@property(retain, nonatomic) COSWatchView *watchView; // @synthesize watchView=_watchView;
- (id)searchIconImage;	// IMP=0x0010000000123781
- (void)updateWatchForFaceChange;	// IMP=0x0010000000123764
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x0010000000123391
- (void)layoutSubviews;	// IMP=0x0010000000123322
- (void)dealloc;	// IMP=0x00100000001232d5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0010000000122d4a

@end

