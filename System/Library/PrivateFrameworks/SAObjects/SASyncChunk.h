//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString, SASyncAppMetaData;

@interface SASyncChunk <SAServerBoundCommand>
{
}

+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ac6e
+ (id)chunk;	// IMP=0x000000000000ac5c
- (_Bool)mutatingCommand;	// IMP=0x000000000000adea
- (_Bool)requiresResponse;	// IMP=0x000000000000ade2
@property(copy, nonatomic) NSString *validity;
@property(copy, nonatomic) NSArray *toRemove;
@property(copy, nonatomic) NSArray *toAdd;
@property(copy, nonatomic) NSString *preGen;
@property(copy, nonatomic) NSString *postGen;
@property(copy, nonatomic) NSString *key;
@property(copy, nonatomic) NSString *intentSlotName;
@property(retain, nonatomic) SASyncAppMetaData *appMetaData;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;	// IMP=0x000000000000ac4f
- (id)groupIdentifier;	// IMP=0x000000000000ac3b

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
