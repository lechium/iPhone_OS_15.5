//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSData, NSNumber, NSString;

@interface SACreateSessionInfoRequest <SAServerBoundCommand>
{
}

+ (id)createSessionInfoRequestWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000032d84
+ (id)createSessionInfoRequest;	// IMP=0x0000000000032d72
- (_Bool)requiresResponse;	// IMP=0x0000000000032dd2
@property(copy, nonatomic) NSData *sessionInfoRequest;
@property(copy, nonatomic) NSNumber *deviceAuthVersion;
- (id)encodedClassName;	// IMP=0x0000000000032d65
- (id)groupIdentifier;	// IMP=0x0000000000032d51

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

