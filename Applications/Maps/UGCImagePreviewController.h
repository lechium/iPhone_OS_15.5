//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UGCImagePreviewViewController, UINavigationController, UIViewController;
@protocol UGCImagePreviewingDataSource;

__attribute__((visibility("hidden")))
@interface UGCImagePreviewController : NSObject
{
    UGCImagePreviewViewController *_previewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004fed2f
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)present;	// IMP=0x00100000004fecc9
- (void)reloadImagePreviews;	// IMP=0x00100000004fecb3
@property(nonatomic) unsigned long long currentIndex;
@property(nonatomic) __weak id <UGCImagePreviewingDataSource> dataSource;
- (id)init;	// IMP=0x00100000004feba9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
