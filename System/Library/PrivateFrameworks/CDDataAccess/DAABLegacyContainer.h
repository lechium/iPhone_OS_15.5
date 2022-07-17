//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDDataAccess/DAContainer-Protocol.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer>
{
    void *_source;	// 8 = 0x8
}

@property(readonly, nonatomic) void *source; // @synthesize source=_source;
- (id)asContainer;	// IMP=0x000000000000d982
- (void *)asSource;	// IMP=0x000000000000d970
- (void)updateSaveRequest:(id)arg1;	// IMP=0x000000000000d923
- (_Bool)isAccount;	// IMP=0x000000000000d91b
- (_Bool)isContainer;	// IMP=0x000000000000d913
- (_Bool)isGroup;	// IMP=0x000000000000d90b
- (_Bool)isContact;	// IMP=0x000000000000d903
- (void)markAsDefault;	// IMP=0x000000000000d8b5
- (void)markForDeletion;	// IMP=0x000000000000d86a
- (void)setAccountIdentifier:(id)arg1;	// IMP=0x000000000000d7fb
- (id)accountIdentifier;	// IMP=0x000000000000d784
- (void)setMeContactIdentifier:(id)arg1;	// IMP=0x000000000000d6f6
- (id)meContactidentifier;	// IMP=0x000000000000d67f
- (_Bool)isSearchContainer;	// IMP=0x000000000000d666
- (void)setArePropertiesReadonly:(_Bool)arg1;	// IMP=0x000000000000d641
- (_Bool)arePropertiesReadonly;	// IMP=0x000000000000d627
- (void)setContentReadonly:(_Bool)arg1;	// IMP=0x000000000000d602
- (_Bool)isContentReadonly;	// IMP=0x000000000000d5e8
- (void)setConstraintsPath:(id)arg1;	// IMP=0x000000000000d593
- (id)constraintsPath;	// IMP=0x000000000000d568
- (void)setSyncData:(id)arg1;	// IMP=0x000000000000d513
- (id)syncData;	// IMP=0x000000000000d4e8
- (void)setSyncTag:(id)arg1;	// IMP=0x000000000000d493
- (id)syncTag;	// IMP=0x000000000000d468
- (void)setCTag:(id)arg1;	// IMP=0x000000000000d413
- (id)cTag;	// IMP=0x000000000000d3e8
- (void)setExternalIdentifier:(id)arg1;	// IMP=0x000000000000d393
- (id)externalIdentifier;	// IMP=0x000000000000d368
- (void)setType:(long long)arg1;	// IMP=0x000000000000d312
- (long long)type;	// IMP=0x000000000000d2c5
- (_Bool)isLocal;	// IMP=0x000000000000d274
- (void)setName:(id)arg1;	// IMP=0x000000000000d21f
- (id)name;	// IMP=0x000000000000d1f4
- (id)identifier;	// IMP=0x000000000000d1c9
- (void)dealloc;	// IMP=0x000000000000d18f
- (id)initWithABSource:(void *)arg1;	// IMP=0x000000000000d133

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
