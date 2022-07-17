//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactStore;

@interface _DAContactsContainerProvider
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000398de
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (_Bool)setLastSyncDateForContainer:(id)arg1;	// IMP=0x0000000000039817
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(_Bool)arg3;	// IMP=0x00000000000397a1
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(_Bool)arg6 propertiesReadonly:(_Bool)arg7 forAccount:(id)arg8;	// IMP=0x0000000000039613
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;	// IMP=0x00000000000392c3
- (id)allContainers;	// IMP=0x000000000003906a
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;	// IMP=0x0000000000038caa
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000038c3c

@end
