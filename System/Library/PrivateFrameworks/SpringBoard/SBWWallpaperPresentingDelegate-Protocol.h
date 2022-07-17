//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBFWallpaperConfiguration;
@protocol SBWWallpaperPresenting;

@protocol SBWWallpaperPresentingDelegate <NSObject>
- (void)wallpaperPresenterDidCompleteWallpaperChange:(id <SBWWallpaperPresenting>)arg1;
- (long long)wallpaperPresenter:(id <SBWWallpaperPresenting>)arg1 requestsOrientationWithRefresh:(_Bool)arg2;
- (void)wallpaperPresenter:(id <SBWWallpaperPresenting>)arg1 didChangeWallpaperForLocations:(long long)arg2 withConfiguration:(SBFWallpaperConfiguration *)arg3;
@end
