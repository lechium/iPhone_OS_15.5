//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RoutingAppLaunchRecord : NSObject
{
    NSMutableArray *_recentlyLaunchedApps;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000083f29b
- (void).cxx_destruct;	// IMP=0x001000000083f2b4
@property(retain, nonatomic) NSMutableArray *recentlyLaunchedApps; // @synthesize recentlyLaunchedApps=_recentlyLaunchedApps;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000083f1f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000083f1cd
- (void)recordAppLaunch:(id)arg1;	// IMP=0x001000000083f120
- (id)appIDsSortedByMostRecentLaunch:(id)arg1;	// IMP=0x001000000083ee52
- (id)initWithRecentlyLaunchedApps:(id)arg1;	// IMP=0x001000000083edb2
- (id)init;	// IMP=0x001000000083ed99
- (id)rankedRoutingAppProxiesWithProxies:(id)arg1;	// IMP=0x00100000006c2703

@end
