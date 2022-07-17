//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MFHasMoreContentBannerViewDelegate;

@interface MFHasMoreContentBannerView
{
    id <MFHasMoreContentBannerViewDelegate> _delegate;	// 8 = 0x8
}

+ (id)bannerWithFrame:(struct CGRect)arg1 isPlainText:(_Bool)arg2 remainingBytes:(unsigned long long)arg3;	// IMP=0x00000000000156af
- (void).cxx_destruct;	// IMP=0x0000000000015e00
@property(nonatomic) __weak id <MFHasMoreContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestLoad;	// IMP=0x0000000000015dbf
- (void)reloadData;	// IMP=0x0000000000015c1f
- (void)_titleControlTapped:(id)arg1;	// IMP=0x00000000000159b0
- (void)primaryAction;	// IMP=0x000000000001599b
- (id)actionStringIsDownloading:(_Bool)arg1;	// IMP=0x0000000000015968
@property(readonly) NSString *titleString;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000015736

@end
