//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, MISSING_TYPE;

@interface GKTurnBasedSessionListCacheObject
{
}

+ (void)expireListsForSessionID:(id)arg1 context:(id)arg2;	// IMP=0x004000000006bc78
+ (Class)entryClass;	// IMP=0x001000000006b094
+ (id)entityName;	// IMP=0x001000000006b087
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x002000000006b642
- (MISSING_TYPE *)internalRepresentation;	// IMP=0x001000000006b2f0
- (id)sessions;	// IMP=0x001000000006b0fc
- (id)sessionIDs;	// IMP=0x001000000006b0a5

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
