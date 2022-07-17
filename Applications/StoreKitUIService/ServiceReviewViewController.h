//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIConfigurationPreloader, SKUIReviewInAppController;

@interface ServiceReviewViewController : UIViewController
{
    SKUIConfigurationPreloader *_configurationPreloader;	// 8 = 0x8
    SKUIReviewInAppController *_reviewInAppController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0040000000005265
+ (id)_exportedInterface;	// IMP=0x0010000000005245
- (void).cxx_destruct;	// IMP=0x00200000000070e2
@property(retain, nonatomic) SKUIReviewInAppController *reviewInAppController; // @synthesize reviewInAppController=_reviewInAppController;
@property(retain, nonatomic) SKUIConfigurationPreloader *configurationPreloader; // @synthesize configurationPreloader=_configurationPreloader;
- (id)_clientViewControllerProxy;	// IMP=0x0010000000007097
- (void)_loadDidFailWithError:(id)arg1;	// IMP=0x0010000000006c8f
- (id)_iconForApplication:(id)arg1;	// IMP=0x0010000000006b2d
- (id)_inAppConfigurationWithItemID:(id)arg1 title:(id)arg2 icon:(id)arg3 sandboxed:(_Bool)arg4 clientContext:(id)arg5;	// IMP=0x0010000000006a05
- (void)_buildReviewInAppConfigurationWithParameters:(id)arg1 clientContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005e1e
- (void)finishImmediately:(id)arg1;	// IMP=0x0010000000005d28
- (void)setupWithParameters:(id)arg1;	// IMP=0x0010000000005285

@end
