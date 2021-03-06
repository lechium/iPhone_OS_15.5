//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class UIView;
@protocol _SFPopoverSourceInfo;

@protocol _SFBarCommon <NSObject>
- (id <_SFPopoverSourceInfo>)popoverSourceInfoForBarItem:(long long)arg1;
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(UIView *)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(void (^)(void))arg5 afterDestinationLayerBouncesBlock:(void (^)(void))arg6;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(UIView *)arg2;
@end

