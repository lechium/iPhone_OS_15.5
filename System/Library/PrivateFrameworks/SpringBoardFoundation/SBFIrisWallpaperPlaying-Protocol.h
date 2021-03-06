//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol SBFIrisWallpaperPlayerDelegate;

@protocol SBFIrisWallpaperPlaying <NSObject>
@property(readonly, nonatomic) _Bool isIrisInteracting;
@property(readonly, nonatomic) long long irisPlaybackState;
@property(nonatomic) __weak id <SBFIrisWallpaperPlayerDelegate> irisDelegate;
- (UIGestureRecognizer *)irisGestureRecognizer;
@end

