//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

#import <MobileSafariUI/WBSExtensionsControllerObserver-Protocol.h>

@class NSString, UIActivityViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver>
{
    NSString *_numberOfNewlyInstalledExtensions;	// 8 = 0x8
    UIViewController *_activityViewController;	// 16 = 0x10
    UIActivityViewController *_parentActivityViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a2a92
@property(nonatomic) __weak UIActivityViewController *parentActivityViewController; // @synthesize parentActivityViewController=_parentActivityViewController;
- (void)extensionsControllerExtensionListDidChange:(id)arg1;	// IMP=0x00000000000a29f0
- (void)_reloadBadgeCount;	// IMP=0x00000000000a2950
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000a28d7
- (id)activityViewController;	// IMP=0x00000000000a26e1
- (id)_activityBadgeTextColor;	// IMP=0x00000000000a26c8
- (id)_activityBadgeColor;	// IMP=0x00000000000a26a8
- (id)_activityBadgeText;	// IMP=0x00000000000a2693
- (id)_systemImageName;	// IMP=0x00000000000a2686
- (id)activityTitle;	// IMP=0x00000000000a2667
- (id)activityType;	// IMP=0x00000000000a265a
- (void)dealloc;	// IMP=0x00000000000a25e5
- (id)init;	// IMP=0x00000000000a24fb

@end

