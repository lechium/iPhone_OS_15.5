//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView
{
    TLKTextButton *_unlockScreenButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001831f
@property(retain) TLKTextButton *unlockScreenButton; // @synthesize unlockScreenButton=_unlockScreenButton;
- (void)updateTitle;	// IMP=0x0000000000018238
- (void)unlockButtonPressed:(id)arg1;	// IMP=0x000000000001821d
- (id)init;	// IMP=0x0000000000017f9c

@end
