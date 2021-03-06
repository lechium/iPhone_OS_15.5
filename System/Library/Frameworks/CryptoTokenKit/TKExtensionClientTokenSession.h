//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface TKExtensionClientTokenSession
{
    long long _connectionIdentifier;	// 8 = 0x8
    NSArray *_advertisedItems;	// 16 = 0x10
    NSNumber *_sessionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003687d
@property(readonly, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
- (id)identities;	// IMP=0x0000000000036268
- (id)certificates;	// IMP=0x000000000003624c
- (id)keys;	// IMP=0x0000000000036230
- (id)itemsOfClass:(id)arg1;	// IMP=0x0000000000035fa1
- (id)advertisedItems;	// IMP=0x0000000000035e4f
- (void)dealloc;	// IMP=0x0000000000035e11
- (id)createObjectWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000035667
- (id)objectForObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003535f
- (_Bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000035066
- (id)withError:(id *)arg1 accessControl:(struct __SecAccessControl *)arg2 invoke:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034680
- (_Bool)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000034467
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000003440d
- (void)terminate;	// IMP=0x00000000000342fd
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000342ce

@end

