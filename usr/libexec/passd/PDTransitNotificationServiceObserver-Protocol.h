//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE, PDTransitNotificationService, PKPaymentMarket;

@protocol PDTransitNotificationServiceObserver <NSObject>

@optional
- (MISSING_TYPE *)transitNotificationService:didAddRenotifyNotificationForMarket: /* Error: Ran out of types for this method. */;
- (void)transitNotificationService:(PDTransitNotificationService *)arg1 didAddOpenLoopUpgradeNotificationForMarket:(PKPaymentMarket *)arg2;
- (void)transitNotificationService:(PDTransitNotificationService *)arg1 didAddDCINotificationForMarket:(PKPaymentMarket *)arg2;
@end

