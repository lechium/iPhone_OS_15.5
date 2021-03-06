//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAConnectionPolicyRoute <SAAceSerializable>
{
}

+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000236db
+ (id)connectionPolicyRoute;	// IMP=0x00000000000236c9
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSNumber *timeout;
@property(copy, nonatomic) NSString *routeId;
@property(copy, nonatomic) NSString *resolverProtocol;
@property(copy, nonatomic) NSString *resolver;
@property(nonatomic) long long priority;
@property(copy, nonatomic) NSNumber *mptcp;
@property(copy, nonatomic) NSString *host;
@property(copy, nonatomic) NSString *connectionId;
@property(copy, nonatomic) NSString *cname;
- (id)encodedClassName;	// IMP=0x00000000000236bc
- (id)groupIdentifier;	// IMP=0x00000000000236a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

