//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUILoadingView;

__attribute__((visibility("hidden")))
@interface AMSUICommonLoadingViewController
{
    AMSUILoadingView *_loadingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b38a
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setup;	// IMP=0x000000000001afe1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001af77
- (void)viewWillLayoutSubviews;	// IMP=0x000000000001aeae
- (void)viewDidLoad;	// IMP=0x000000000001ae6d
- (void)loadView;	// IMP=0x000000000001add2

@end
