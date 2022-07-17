//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x0000000000017286
+ (id)reachabilityForInternetConnection;	// IMP=0x000000000001722a
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x00000000000171d9
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0000000000017165
- (unsigned long long)currentReachabilityStatus;	// IMP=0x000000000001736a
- (_Bool)connectionRequired;	// IMP=0x0000000000017338
- (unsigned long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000017305
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x00000000000172f2
- (void)dealloc;	// IMP=0x0000000000017119
- (void)stopNotifier;	// IMP=0x00000000000170e3
- (_Bool)startNotifier;	// IMP=0x0000000000016ff0

@end
