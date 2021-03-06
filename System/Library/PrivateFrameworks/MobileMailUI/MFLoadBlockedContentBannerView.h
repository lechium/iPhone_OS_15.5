//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView
{
    long long _blockingReason;	// 8 = 0x8
    id <MFLoadBlockedContentBannerViewDelegate> _delegate;	// 16 = 0x10
    unsigned long long _blockedContentTypes;	// 24 = 0x18
}

+ (id)log;	// IMP=0x0000000000017139
- (void).cxx_destruct;	// IMP=0x000000000001846a
@property(nonatomic) unsigned long long blockedContentTypes; // @synthesize blockedContentTypes=_blockedContentTypes;
@property(nonatomic) __weak id <MFLoadBlockedContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)actionTitle;	// IMP=0x0000000000018259
- (id)title;	// IMP=0x0000000000018086
- (void)_titleControlTapped:(id)arg1;	// IMP=0x0000000000018026
- (void)enablePrivacyProtectionAlertForAccount;	// IMP=0x0000000000017a9a
- (void)primaryAction;	// IMP=0x0000000000017a2a
- (void)_updateBannerText;	// IMP=0x0000000000017572
- (id)initWithFrame:(struct CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;	// IMP=0x0000000000017216

@end

