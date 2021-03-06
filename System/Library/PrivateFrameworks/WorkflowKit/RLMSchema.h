//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying>
{
    NSArray *_objectSchema;	// 8 = 0x8
    struct Schema _objectStoreSchema;	// 16 = 0x10
    NSMutableDictionary *_objectSchemaByName;	// 40 = 0x28
}

+ (Class)classForString:(id)arg1;	// IMP=0x00000000000bef7e
+ (id)dynamicSchemaFromObjectStoreSchema:(const void *)arg1;	// IMP=0x00000000000bee68
+ (id)sharedSchema;	// IMP=0x00000000000bec3a
+ (id)partialPrivateSharedSchema;	// IMP=0x00000000000bec00
+ (id)partialSharedSchema;	// IMP=0x00000000000bebc6
+ (id)sharedSchemaForClass:(Class)arg1;	// IMP=0x00000000000beb0f
+ (id)schemaWithObjectClasses:(id)arg1;	// IMP=0x00000000000bdd54
- (id).cxx_construct;	// IMP=0x00000000000bfc65
- (void).cxx_destruct;	// IMP=0x00000000000bfc34
@property(retain, nonatomic) NSMutableDictionary *objectSchemaByName; // @synthesize objectSchemaByName=_objectSchemaByName;
- (struct Schema)objectStoreCopy;	// IMP=0x00000000000bf69a
- (id)description;	// IMP=0x00000000000bf34e
- (_Bool)isEqualToSchema:(id)arg1;	// IMP=0x00000000000bf156
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf0ba
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000bdcfa
- (id)schemaForClassName:(id)arg1;	// IMP=0x00000000000bdc1a
@property(copy, nonatomic) NSArray *objectSchema;
- (id)init;	// IMP=0x00000000000bd914

@end

