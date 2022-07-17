//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordStandaloneImageCell
{
    UILabel *_titleLabel;	// 128 = 0x80
    UILabel *_detailLabel;	// 136 = 0x88
    UIImageView *_disclosureChevronView;	// 144 = 0x90
    UIImageView *_titleImageView;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000273de
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000000027244
@property(copy, nonatomic) UIImage *titleImage;
@property(copy, nonatomic) NSString *detail;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;	// IMP=0x000000000002632c

@end
