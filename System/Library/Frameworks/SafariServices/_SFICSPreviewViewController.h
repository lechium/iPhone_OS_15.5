//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <SafariServices/EKICSPreviewControllerDelegate-Protocol.h>

@class EKICSPreviewController, NSString, NSURL, UIBarButtonItem;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate>
{
    NSString *_filePath;	// 8 = 0x8
    NSURL *_sourceURL;	// 16 = 0x10
    UIBarButtonItem *_activityBarButtonItem;	// 24 = 0x18
    UIBarButtonItem *_doneBarButtonItem;	// 32 = 0x20
    EKICSPreviewController *_icsController;	// 40 = 0x28
    CDUnknownBlockType _beforeDismissHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c038d
@property(copy, nonatomic) CDUnknownBlockType beforeDismissHandler; // @synthesize beforeDismissHandler=_beforeDismissHandler;
- (void)_updateNavigationBarItems;	// IMP=0x00000000000c0208
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1;	// IMP=0x00000000000c0129
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1;	// IMP=0x00000000000c0010
- (void)_done:(id)arg1;	// IMP=0x00000000000bfff7
- (void)_presentActivityViewController:(id)arg1;	// IMP=0x00000000000bfe3c
- (void)icsPreviewControllerWantsDismissal:(id)arg1;	// IMP=0x00000000000bfe23
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000bfe11
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000bfd46
- (void)viewDidLoad;	// IMP=0x00000000000bfcab
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000bfc3b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000bfbfa
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2;	// IMP=0x00000000000bf7d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

