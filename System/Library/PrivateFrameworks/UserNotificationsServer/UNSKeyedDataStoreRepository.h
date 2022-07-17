//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNSBundleLibrarian;
@protocol UNSContentProtectionStrategy;

@interface UNSKeyedDataStoreRepository : NSObject
{
    NSString *_directory;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    NSString *_pathExtension;	// 24 = 0x18
    UNSBundleLibrarian *_librarian;	// 32 = 0x20
    id <UNSContentProtectionStrategy> _protectionStrategy;	// 40 = 0x28
    NSString *_objectIdentifierKey;	// 48 = 0x30
    long long _maxObjectsPerKey;	// 56 = 0x38
    _Bool _shouldExcludeFromBackup;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000060607
- (void)protectionStateChanged;	// IMP=0x000000000006029c
- (_Bool)_useReplacementToImport:(id)arg1 into:(id)arg2;	// IMP=0x0000000000060214
- (_Bool)_isReplacementSupported;	// IMP=0x0000000000060206
- (void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000060070
- (void)_removeItemAtPath:(id)arg1;	// IMP=0x0000000000060046
- (void)removeDataStoreRepository;	// IMP=0x0000000000060030
- (void)removeStoreForKey:(id)arg1;	// IMP=0x000000000005ffe4
- (id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(_Bool)arg3 receipt:(id *)arg4;	// IMP=0x000000000005fb66
- (id)_addObject:(id)arg1 mustReplace:(_Bool)arg2 atPath:(id)arg3;	// IMP=0x000000000005fa69
- (id)addObject:(id)arg1 mustReplace:(_Bool)arg2 forKey:(id)arg3;	// IMP=0x000000000005f9cc
- (id)replaceObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005f9b2
- (id)addObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005f99b
- (void)_setObjects:(id)arg1 atPath:(id)arg2;	// IMP=0x000000000005f8f1
- (void)setObjects:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005f876
- (id)_removeObjectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;	// IMP=0x000000000005f5d1
- (id)removeObjectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000005f53c
- (void)removeAllObjectsForKey:(id)arg1;	// IMP=0x000000000005f4e9
- (_Bool)_saveObjects:(id)arg1 atPath:(id)arg2;	// IMP=0x000000000005f0d5
- (id)_dataAtPath:(id)arg1;	// IMP=0x000000000005f055
- (id)_objectsForData:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000005ee3b
- (id)_objectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;	// IMP=0x000000000005ed6c
- (id)objectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000005ecd7
- (id)_objectsAtPath:(id)arg1;	// IMP=0x000000000005ec51
- (id)objectsForKey:(id)arg1;	// IMP=0x000000000005ebf2
- (id)_pathForKey:(id)arg1;	// IMP=0x000000000005eb6d
- (id)directoryPath;	// IMP=0x000000000005eb5f
- (id)_directoryForKey:(id)arg1;	// IMP=0x000000000005eacc
- (id)allKeys;	// IMP=0x000000000005e7ee
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7 shouldExcludeFromBackup:(_Bool)arg8;	// IMP=0x000000000005e50b

@end
