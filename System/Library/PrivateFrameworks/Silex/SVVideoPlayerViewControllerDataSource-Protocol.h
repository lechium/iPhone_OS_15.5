//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SVVideoPlayerViewController;
@protocol SVVideoAdProviding, SVVideoProviding;

@protocol SVVideoPlayerViewControllerDataSource <NSObject>
- (id <SVVideoAdProviding>)videoAdForVideoPlayerViewController:(SVVideoPlayerViewController *)arg1;
- (id <SVVideoProviding>)videoForVideoPlayerViewController:(SVVideoPlayerViewController *)arg1;
@end
