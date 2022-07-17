//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/NSObject-Protocol.h>

@class MEComposeSession;
@protocol MEComposeSessionHandler, MEContentBlocker, MEMessageActionHandler, MEMessageSecurityHandler;

@protocol MEExtension <NSObject>

@optional
- (id <MEMessageSecurityHandler>)handlerForMessageSecurity;
- (id <MEContentBlocker>)handlerForContentBlocker;
- (id <MEMessageActionHandler>)handlerForMessageActions;
- (id <MEComposeSessionHandler>)handlerForComposeSession:(MEComposeSession *)arg1;
@end
