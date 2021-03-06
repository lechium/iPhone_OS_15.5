//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPSReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x0000000000011d14
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x0000000000011cc7
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0000000000011c5c
- (long long)currentReachabilityStatus;	// IMP=0x0000000000011f3c
- (_Bool)connectionRequired;	// IMP=0x0000000000011f0a
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000011ed7
- (void)dealloc;	// IMP=0x0000000000011e8b
- (void)stopNotifier;	// IMP=0x0000000000011e55
- (_Bool)startNotifier;	// IMP=0x0000000000011d70

@end

