//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@protocol ACDAuthenticationDialogManagerProtocol
- (void)authenticationDialogDidFinishWithSuccess:(_Bool)arg1 response:(NSDictionary *)arg2;
- (void)contextForAuthenticationDialog:(void (^)(NSURL *, NSString *, NSString *, NSString *, NSString *))arg1;
@end
