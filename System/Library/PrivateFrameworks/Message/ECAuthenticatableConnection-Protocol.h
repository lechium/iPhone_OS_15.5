//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ECAuthenticatableConnection <NSObject>
@property(readonly, nonatomic) _Bool loginDisabled;
@property(readonly, nonatomic) NSString *securityProtocol;
@property(readonly, nonatomic) NSArray *authenticationMechanisms;
@end
