//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSError;

@protocol GKSocialGamingHostInterface <NSObject>
- (oneway void)extensionWillFinish;

@optional
- (oneway void)extensionDidTerminateWithError:(NSError *)arg1;
@end

