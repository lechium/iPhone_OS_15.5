//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface SiriUIDetailLabelComponentView
{
    UILabel *_mainLabel;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
}

+ (id)viewForComponent:(id)arg1;	// IMP=0x0000000000056c3c
- (void).cxx_destruct;	// IMP=0x000000000005703a
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)addSubviewsForComponentModel:(id)arg1;	// IMP=0x0000000000056cec
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000056cda
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000056cc8

@end
