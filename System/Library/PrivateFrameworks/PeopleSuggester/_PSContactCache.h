//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/CNChangeHistoryEventVisitor-Protocol.h>

@class CNContactStore, IDSIDQueryController, NSData, NSString, _PASLock;
@protocol NSObject, OS_dispatch_queue;

@interface _PSContactCache : NSObject <CNChangeHistoryEventVisitor>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSData *_changeHistoryToken;	// 16 = 0x10
    id <NSObject> _notificationCenterToken;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    _PASLock *_cachedContactForHandle;	// 40 = 0x28
    _PASLock *_cachedFaceTimeableHandleForContactIdentifier;	// 48 = 0x30
    IDSIDQueryController *_idsQueryController;	// 56 = 0x38
    NSString *_faceTimeServiceName;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000009035e
- (void).cxx_destruct;	// IMP=0x0000000000094108
- (id)contactKeysToFetch;	// IMP=0x0000000000094002
- (id)getContactForHandle:(id)arg1 handleType:(long long)arg2;	// IMP=0x0000000000093b2b
- (id)getMeContact;	// IMP=0x0000000000093a64
- (long long)getFaceTimeIDSStatusForHandle:(id)arg1 contactType:(unsigned long long)arg2;	// IMP=0x000000000009390e
- (id)getFaceTimeableHandleForContact:(id)arg1 interactionStore:(id)arg2;	// IMP=0x0000000000091c0f
- (id)fetchMeContact;	// IMP=0x0000000000091a46
- (void)syncChangeHistory;	// IMP=0x0000000000091542
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x000000000009148e
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x000000000009137e
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000912ca
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000912c4
- (void)_setContact:(id)arg1;	// IMP=0x0000000000090edd
- (id)_getCachedFaceTimeableHandleForContactIdentifier:(id)arg1;	// IMP=0x0000000000090cc0
- (void)_setLikelyFaceTimeHandle:(id)arg1 forContactIdentifier:(id)arg2;	// IMP=0x0000000000090b5c
- (id)_getCachedContactForHandle:(id)arg1;	// IMP=0x000000000009091a
- (void)_purge;	// IMP=0x000000000009084c
- (void)_removeAllHandlesForContactIdentifier:(id)arg1;	// IMP=0x000000000009052e
- (void)_setContact:(id)arg1 forHandle:(id)arg2;	// IMP=0x00000000000903ca
- (void)dealloc;	// IMP=0x00000000000902e8
- (id)init;	// IMP=0x000000000008fed8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
