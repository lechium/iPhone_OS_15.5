//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/NSObject-Protocol.h>

@class MEMessage, NSString;

@protocol MEMailComposeAppExtensionsRequestDispatcher <NSObject>
- (void)appExtensionViewControllerForExtensionIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSViewController *, NSError *))arg2;
- (void)performSendValidationForMessage:(MEMessage *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)getAdditionalHeadersForMessage:(MEMessage *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)dispatchEmailAddressTokenIconRequestsForMailMessage:(MEMessage *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
@end

