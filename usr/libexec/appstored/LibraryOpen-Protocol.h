//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ASDApp, NSUUID;

@protocol LibraryOpen <NSObject>
- (void)launchApp:(ASDApp *)arg1 withResultHandler:(void (^)(long long))arg2;
- (void)launchApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withResultHandler:(void (^)(long long))arg3;
- (void)launchApp:(ASDApp *)arg1 extensionType:(long long)arg2 withResultHandler:(void (^)(long long))arg3;
@end

