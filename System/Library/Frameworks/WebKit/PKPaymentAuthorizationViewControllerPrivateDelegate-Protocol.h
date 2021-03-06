//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, PKPaymentAuthorizationViewController;

@protocol PKPaymentAuthorizationViewControllerPrivateDelegate <NSObject>
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 willFinishWithError:(NSError *)arg2;

@optional
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
@end

