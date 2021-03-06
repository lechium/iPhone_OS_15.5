//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDictionary;

@interface ML3ExportItem : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    long long _persistentId;	// 16 = 0x10
    ML3MusicLibrary *_library;	// 24 = 0x18
    Class _entityClass;	// 32 = 0x20
}

+ (unsigned int *)allExportPropertyKeysForEntityClass:(Class)arg1 returnedCount:(unsigned int *)arg2;	// IMP=0x00000000000a157d
- (void).cxx_destruct;	// IMP=0x00000000000a1261
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) long long persistentId; // @synthesize persistentId=_persistentId;
- (id)_allExportPropertyNames;	// IMP=0x00000000000a1199
- (id)_propertyNamesFromKeys:(unsigned int *)arg1 numKeys:(unsigned int)arg2;	// IMP=0x00000000000a10b4
- (id)_propertyNameForKey:(unsigned int)arg1;	// IMP=0x00000000000a0f25
- (id)exportData;	// IMP=0x00000000000a0efd
- (unsigned int *)propertyKeysToExport:(unsigned int *)arg1;	// IMP=0x00000000000a0eda
- (_Bool)isValid;	// IMP=0x00000000000a0ebd
- (_Bool)hasValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0e8a
- (id)stringValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0e15
- (id)dataValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0e03
- (long long)longlongValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0dbf
- (int)longValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0d7b
- (short)shortValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0d36
- (BOOL)charValueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0cf1
- (id)valueForProperty:(unsigned int)arg1;	// IMP=0x00000000000a0c91
- (id)description;	// IMP=0x00000000000a0c4f
- (id)initWithPersistentId:(long long)arg1 entityClass:(id)arg2 properties:(id)arg3 library:(id)arg4;	// IMP=0x00000000000a0b8c
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 propertyKeysToExport:(unsigned int *)arg3 numKeys:(unsigned int)arg4 library:(id)arg5;	// IMP=0x00000000000a096c
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 library:(id)arg3;	// IMP=0x00000000000a0947

@end

