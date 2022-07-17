//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <iCloudQuotaUI/PSHeaderFooterView-Protocol.h>

@class NSArray, NSMutableArray, UILabel;

@interface ICQSubtitleHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSMutableArray *_subtitleLabels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000058735
@property(retain, nonatomic) NSArray *subtitleLabels; // @synthesize subtitleLabels=_subtitleLabels;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000000058313
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x0000000000057ec4
- (void)removeSubtitleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000057ea7
- (id)addSubtitle;	// IMP=0x0000000000057d4b
- (id)subtitleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000057cec
- (id)initWithSpecifier:(id)arg1;	// IMP=0x0000000000057b57

@end
