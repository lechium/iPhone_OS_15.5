//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SVSAnnounceNotificationsIntroViewController : PRXCardContentViewController
{
    MISSING_TYPE *notificationSources;	// 8 = 0x8
    MISSING_TYPE *loadingQueue;	// 16 = 0x10
    MISSING_TYPE *mainController;	// 24 = 0x18
}

+ (void)optIntoAnnounceNotifications;	// IMP=0x00200000001496a0
- (void).cxx_destruct;	// IMP=0x004000000014b0e0
- (id)initWithContentView:(id)arg1;	// IMP=0x001000000014b080
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000014a8b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000014a870
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000014a6f0
- (void)viewDidLoad;	// IMP=0x001000000014a5a0
- (id)initWithMainController:(id)arg1;	// IMP=0x0010000000149660

@end

