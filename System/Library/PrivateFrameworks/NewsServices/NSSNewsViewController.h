//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController
{
    _Bool _linkPreviewing;	// 8 = 0x8
    NSArray *_articleIDs;	// 16 = 0x10
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;	// 24 = 0x18
}

+ (_Bool)canOpenURL:(id)arg1;	// IMP=0x0000000000001ac4
- (void).cxx_destruct;	// IMP=0x0000000000002828
@property(retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController; // @synthesize remoteViewContainerViewController=_remoteViewContainerViewController;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(nonatomic, getter=isLinkPreviewing) _Bool linkPreviewing; // @synthesize linkPreviewing=_linkPreviewing;
- (void)setupRemoteViewController:(id)arg1;	// IMP=0x00000000000026e6
- (void)requestRemoteViewController;	// IMP=0x0000000000002359
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000002106
- (void)viewDidLoad;	// IMP=0x0000000000001e5e
- (void)dealloc;	// IMP=0x0000000000001d15
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000001c16
- (id)initWithArticleIDs:(id)arg1;	// IMP=0x0000000000001b89
- (id)initWithArticleID:(id)arg1;	// IMP=0x0000000000001ad9

@end
