//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface HomePodUpdateViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000018c5b5
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x001000000018c52d
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000018c4a5
- (void)handleCheckForUpdateButton:(id)arg1;	// IMP=0x001000000018c41b
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000018c398
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000018c314
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000018c005

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

