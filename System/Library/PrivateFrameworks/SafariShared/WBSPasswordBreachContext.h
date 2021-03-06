//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBSPasswordBreachConfiguration, WBSPasswordBreachCryptographicOperations, WBSPasswordBreachStore;

@interface WBSPasswordBreachContext : NSObject
{
    WBSPasswordBreachConfiguration *_configuration;	// 8 = 0x8
    WBSPasswordBreachCryptographicOperations *_cryptographicOperations;	// 16 = 0x10
    WBSPasswordBreachStore *_store;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001392fb
@property(readonly, nonatomic) WBSPasswordBreachStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) WBSPasswordBreachCryptographicOperations *cryptographicOperations; // @synthesize cryptographicOperations=_cryptographicOperations;
@property(readonly, nonatomic) WBSPasswordBreachConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)initWithConfiguration:(id)arg1 store:(id)arg2;	// IMP=0x0000000000139208

@end

