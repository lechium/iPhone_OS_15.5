//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>

@class FCKeyValueStoreClassRegistry, FCKeyValueStoreSavePolicy, NSDictionary, NSMutableDictionary, NSString;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding>
{
    _Bool _shouldExportJSONSidecar;	// 8 = 0x8
    _Bool _unsafeWaitingOnSave;	// 9 = 0x9
    NSString *_storeDirectory;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _storeSize;	// 32 = 0x20
    NSMutableDictionary *_unsafeObjectsByKey;	// 40 = 0x28
    id <NFLocking> _lock;	// 48 = 0x30
    unsigned long long _clientVersion;	// 56 = 0x38
    unsigned long long _optionsMask;	// 64 = 0x40
    FCKeyValueStoreClassRegistry *_classRegistry;	// 72 = 0x48
    id <FCKeyValueStoreMigrating> _migrator;	// 80 = 0x50
    FCKeyValueStoreSavePolicy *_savePolicy;	// 88 = 0x58
    CDUnknownBlockType _objectHandler;	// 96 = 0x60
    CDUnknownBlockType _arrayObjectHandler;	// 104 = 0x68
    CDUnknownBlockType _dictionaryKeyHandler;	// 112 = 0x70
    CDUnknownBlockType _dictionaryValueHandler;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000002edce2
- (unsigned long long)storeSize;	// IMP=0x00000000002edcd8
@property(readonly, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(nonatomic) _Bool shouldExportJSONSidecar; // @synthesize shouldExportJSONSidecar=_shouldExportJSONSidecar;
- (id)jsonEncodableObject;	// IMP=0x00000000002edb90
- (void)setCloudBackupEnabled:(_Bool)arg1;	// IMP=0x00000000002edb79
- (void)setJSONEncodingHandlersWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ed9eb
- (void)save;	// IMP=0x00000000002ed967
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ec85a
@property(readonly, nonatomic) NSDictionary *asDictionary;
- (void)enumerateKeysAndObjectsForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ec598
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ec4fd
- (void)addAllEntriesToDictionary:(id)arg1;	// IMP=0x00000000002ec465
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ec31b
- (id)allKeys;	// IMP=0x00000000002ec210
- (_Bool)boolValueForKey:(id)arg1;	// IMP=0x00000000002ec1cc
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000002ec14b
- (id)objectsForKeys:(id)arg1;	// IMP=0x00000000002ec001
- (id)objectForKey:(id)arg1;	// IMP=0x00000000002ebe31
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000002ebe1f
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000002ebe0d
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ebb52
- (void)removeAllObjects;	// IMP=0x00000000002ebb2c
- (void)removeObjectsForKeys:(id)arg1;	// IMP=0x00000000002eba7c
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000002eb9dc
- (void)replaceContentsWithDictionary:(id)arg1;	// IMP=0x00000000002eb905
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000002eb7e1
- (void)setObjects:(id)arg1 forKeys:(id)arg2;	// IMP=0x00000000002eb5aa
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002eb1d1
- (_Bool)containsObjectForKey:(id)arg1;	// IMP=0x00000000002eb19e
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;	// IMP=0x00000000002eb182
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;	// IMP=0x00000000002eb0b2
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6 savePolicy:(id)arg7;	// IMP=0x00000000002ea196
- (id)init;	// IMP=0x00000000002ea051

@end
