//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _CDClientContext;

@interface PPAppLaunchMonitorGuardedData : NSObject
{
    NSMutableDictionary *handlers;	// 8 = 0x8
    unsigned long long nextToken;	// 16 = 0x10
    _Bool isRegistered;	// 24 = 0x18
    _CDClientContext *clientContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000be770

@end

