//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, PAApplication;
@protocol OS_dispatch_queue;

@protocol PALAppUninstallDelegateProtocol <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)applicationDidUninstall:(PAApplication *)arg1;
@end
