//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject <NSSecureCoding, NSCopying>
{
    void *_reserved;	// 8 = 0x8
    void *_reserved1;	// 16 = 0x10
    void *_reserved2;	// 24 = 0x18
    NSMutableArray *_entityMappings;	// 32 = 0x20
    NSMutableDictionary *_entityMappingsByName;	// 40 = 0x28
    struct __modelMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedModelMapping:31;
    } _modelMappingFlags;	// 48 = 0x30
}

+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000fc67c
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;	// IMP=0x00000000000fc298
+ (id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3;	// IMP=0x00000000000fbb0d
+ (void)initialize;	// IMP=0x00000000000fba69
+ (void)setMigrationDebugLevel:(int)arg1;	// IMP=0x00000000000fcf6b
+ (int)migrationDebugLevel;	// IMP=0x00000000000fcf5f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fcda5
@property(readonly, copy) NSDictionary *entityMappingsByName;
@property(retain) NSArray *entityMappings;
- (id)description;	// IMP=0x00000000000fcb88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fcb0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fc9db
- (void)dealloc;	// IMP=0x00000000000fc982
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00000000000fc8df
- (id)init;	// IMP=0x00000000000fc8cb
- (void)_throwIfNotEditable;	// IMP=0x00000000000fd2cd
- (id)_initWithEntityMappings:(id)arg1;	// IMP=0x00000000000fd24e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fce13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fcdad

@end
