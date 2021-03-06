//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContactsAccount-Protocol.h>

@class CNAccount, NSString;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>
{
    _Bool _markedForDeletion;	// 8 = 0x8
    CNAccount *_account;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020608
@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
- (void)markForDeletion;	// IMP=0x00000000000205d5
- (void)updateSaveRequest:(id)arg1;	// IMP=0x000000000002050b
- (_Bool)isAccount;	// IMP=0x0000000000020503
- (_Bool)isContainer;	// IMP=0x00000000000204fb
- (_Bool)isGroup;	// IMP=0x00000000000204f3
- (_Bool)isContact;	// IMP=0x00000000000204eb
- (id)externalIdentifier;	// IMP=0x000000000002049b
- (id)identifier;	// IMP=0x000000000002044b
- (int)legacyIdentifier;	// IMP=0x0000000000020407
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000002039c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

