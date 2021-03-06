//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSURL;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKKeyedDataStoreProtocol;

@interface CRKASMPreemptiveIDSMessagingRosterProvider
{
    _Bool _observingRoster;	// 8 = 0x8
    id <CRKIDSPrimitives> _IDSPrimitives;	// 16 = 0x10
    id <CRKIDSAddressTranslator> _IDSAddressTranslator;	// 24 = 0x18
    id <CRKKeyedDataStoreProtocol> _dataStore;	// 32 = 0x20
    NSURL *_messagedAppleIDsURL;	// 40 = 0x28
    NSSet *_messagedAppleIDs;	// 48 = 0x30
}

+ (id)observedKeyPaths;	// IMP=0x000000000007a3be
+ (id)trustedUserAppleIDsFromRoster:(id)arg1;	// IMP=0x000000000007a2af
+ (id)appleIDsFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a1a1
+ (id)dataForAppleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a180
- (void).cxx_destruct;	// IMP=0x000000000007a8d2
@property(nonatomic, getter=isObservingRoster) _Bool observingRoster; // @synthesize observingRoster=_observingRoster;
@property(retain, nonatomic) NSSet *messagedAppleIDs; // @synthesize messagedAppleIDs=_messagedAppleIDs;
@property(readonly, nonatomic) NSURL *messagedAppleIDsURL; // @synthesize messagedAppleIDsURL=_messagedAppleIDsURL;
@property(readonly, nonatomic) id <CRKKeyedDataStoreProtocol> dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) id <CRKIDSAddressTranslator> IDSAddressTranslator; // @synthesize IDSAddressTranslator=_IDSAddressTranslator;
@property(readonly, nonatomic) id <CRKIDSPrimitives> IDSPrimitives; // @synthesize IDSPrimitives=_IDSPrimitives;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007a7fc
- (void)endObservingRoster;	// IMP=0x000000000007a619
- (void)beginObservingRoster;	// IMP=0x000000000007a430
- (void)messageAppleID:(id)arg1;	// IMP=0x0000000000079e36
- (_Bool)persistAppleIDs:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000079bc4
- (id)fetchMessagedAppleIDsWitherror:(id *)arg1;	// IMP=0x00000000000799af
- (void)rosterDidChange;	// IMP=0x000000000007956c
- (id)initWithRosterProvider:(id)arg1 IDSPrimitives:(id)arg2 IDSAddressTranslator:(id)arg3 dataStore:(id)arg4;	// IMP=0x000000000007946f
- (void)dealloc;	// IMP=0x0000000000079431

@end

