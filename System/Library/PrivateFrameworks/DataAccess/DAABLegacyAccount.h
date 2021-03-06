//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContactsAccount-Protocol.h>

@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount>
{
    void *_account;	// 8 = 0x8
}

@property(readonly, nonatomic) void *account; // @synthesize account=_account;
- (void)markForDeletion;	// IMP=0x0000000000041f74
- (void)updateSaveRequest:(id)arg1;	// IMP=0x0000000000041f27
- (_Bool)isAccount;	// IMP=0x0000000000041f1f
- (_Bool)isContainer;	// IMP=0x0000000000041f17
- (_Bool)isGroup;	// IMP=0x0000000000041f0f
- (_Bool)isContact;	// IMP=0x0000000000041f07
- (id)externalIdentifier;	// IMP=0x0000000000041ed7
- (id)identifier;	// IMP=0x0000000000041ea7
- (int)legacyIdentifier;	// IMP=0x0000000000041e8d
- (void)dealloc;	// IMP=0x0000000000041e53
- (id)initWithABAccout:(void *)arg1;	// IMP=0x0000000000041e04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

