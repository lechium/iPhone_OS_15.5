//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MFHideMyEmailBannerViewDelegate;

@interface MFHideMyEmailBannerView
{
    id <MFHideMyEmailBannerViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000016d4c
@property(nonatomic) __weak id <MFHideMyEmailBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAction;	// IMP=0x0000000000016cbf
- (void)primaryAction;	// IMP=0x0000000000016c5f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016890

@end

