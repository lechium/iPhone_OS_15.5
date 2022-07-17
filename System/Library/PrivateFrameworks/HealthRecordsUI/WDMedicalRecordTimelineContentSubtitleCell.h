//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/WDAttributedSubtitleDisplayable-Protocol.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordTimelineContentSubtitleCell <WDAttributedSubtitleDisplayable>
{
    NSString *_titleString;	// 8 = 0x8
    NSString *_subtitleString;	// 16 = 0x10
    _Bool _showDisclosureIndicator;	// 24 = 0x18
    _Bool _useRegularFontForSubtitle;	// 25 = 0x19
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UIView *_disclosureChevronView;	// 48 = 0x30
    NSLayoutConstraint *_titlePillConstraint;	// 56 = 0x38
    NSLayoutConstraint *_titleChevronConstraint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000054951
@property(retain, nonatomic) NSLayoutConstraint *titleChevronConstraint; // @synthesize titleChevronConstraint=_titleChevronConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titlePillConstraint; // @synthesize titlePillConstraint=_titlePillConstraint;
@property(retain, nonatomic) UIView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool useRegularFontForSubtitle; // @synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
- (void)setAttributedSubtitleText:(id)arg1;	// IMP=0x0000000000054806
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;	// IMP=0x0000000000053926

@end
