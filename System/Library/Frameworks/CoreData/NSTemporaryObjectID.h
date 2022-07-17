//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID
{
    int _cd_rc;	// 8 = 0x8
    int _counter;	// 12 = 0xc
    NSEntityDescription *_entity;	// 16 = 0x10
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x00000000001f6f06
+ (id)initWithEntity:(id)arg1;	// IMP=0x00000000001f6ef9
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;	// IMP=0x00000000001f6e62
+ (void)_release_1;	// IMP=0x00000000001f6d18
+ (id)_retain_1;	// IMP=0x00000000001f6cfd
+ (long long)version;	// IMP=0x00000000001f6cf2
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00000000001f6cea
+ (id)alloc;	// IMP=0x00000000001f6ce1
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f6cd8
+ (_Bool)_usesTaggedPointers;	// IMP=0x00000000001f6cd0
+ (Class)classForStore:(id)arg1;	// IMP=0x00000000001f690d
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x00000000001f68ba
+ (void)_storeDeallocated;	// IMP=0x00000000001f689f
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000001f6897
+ (void)initialize;	// IMP=0x00000000001f67bc
- (id)_referenceData;	// IMP=0x00000000001f7277
- (id)URIRepresentation;	// IMP=0x00000000001f7208
- (id)_retainedURIString;	// IMP=0x00000000001f7121
- (_Bool)_isPersistentStoreAlive;	// IMP=0x00000000001f70f5
- (id)_storeIdentifier;	// IMP=0x00000000001f7085
- (int)_temporaryIDCounter;	// IMP=0x00000000001f7075
- (_Bool)isTemporaryID;	// IMP=0x00000000001f706d
- (id)entity;	// IMP=0x00000000001f705c
- (void)_setPersistentStore:(id)arg1;	// IMP=0x00000000001f700d
- (id)persistentStore;	// IMP=0x00000000001f6fed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f6f9d
- (unsigned long long)hash;	// IMP=0x00000000001f6f51
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x00000000001f6f38
- (id)initWithEntity:(id)arg1;	// IMP=0x00000000001f6f1f
- (void)dealloc;	// IMP=0x00000000001f6dbd
- (unsigned long long)retainCount;	// IMP=0x00000000001f6da9
- (oneway void)release;	// IMP=0x00000000001f6d79
- (id)retain;	// IMP=0x00000000001f6d65

@end
