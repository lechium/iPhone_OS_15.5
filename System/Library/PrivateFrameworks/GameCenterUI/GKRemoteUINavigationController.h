//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController
{
    GKRemoteUIController *_remoteUIController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000068a26
@property(readonly, nonatomic) GKRemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006898d
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000068822
- (void)loadView;	// IMP=0x0000000000068765
- (id)initWithRemoteUIController:(id)arg1;	// IMP=0x00000000000686c7

@end
