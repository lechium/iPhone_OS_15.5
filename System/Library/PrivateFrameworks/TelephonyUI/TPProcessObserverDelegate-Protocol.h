//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class NSString, TPProcessObserver;

@protocol TPProcessObserverDelegate <NSObject>
- (void)processObserver:(TPProcessObserver *)arg1 bundleIdentifier:(NSString *)arg2 didUpdateApplicationRunning:(_Bool)arg3;
@end
