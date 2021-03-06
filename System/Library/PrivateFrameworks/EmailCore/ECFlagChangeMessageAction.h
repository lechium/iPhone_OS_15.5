//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/ECFlagChangeMessageActionBuilder-Protocol.h>

@class ECMessageFlagChange, NSArray, NSSet, NSString, NSURL;

@interface ECFlagChangeMessageAction <ECFlagChangeMessageActionBuilder>
{
    NSSet *_remoteIDs;	// 8 = 0x8
    NSArray *_messages;	// 16 = 0x10
    ECMessageFlagChange *_flagChange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a870
@property(retain, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSSet *remoteIDs; // @synthesize remoteIDs=_remoteIDs;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a77c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *mailboxURL;
@property(retain, nonatomic) NSString *messageActionPersistentID;
@property(readonly) Class superclass;
@property(nonatomic) _Bool userInitiated;

@end

