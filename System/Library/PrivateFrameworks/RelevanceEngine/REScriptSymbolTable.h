//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface REScriptSymbolTable : NSObject
{
    REScriptSymbolTable *_parentTable;	// 8 = 0x8
    NSMutableDictionary *_definitions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006296f
- (void)enumerateRules:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062955
- (void)enumerateFeatures:(CDUnknownBlockType)arg1;	// IMP=0x000000000006293e
- (void)_enumerateObjectsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000623d6
- (id)nodeValueForDefinition:(id)arg1;	// IMP=0x0000000000062332
- (id)objectValueForDefinition:(id)arg1;	// IMP=0x000000000006228e
- (_Bool)typeForDefinition:(id)arg1 type:(unsigned long long *)arg2;	// IMP=0x00000000000621e6
- (_Bool)setObjectValue:(id)arg1 forDefinition:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000061fd4
- (_Bool)setNodeValue:(id)arg1 forDefinition:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000061dc3
- (_Bool)define:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000061b8c
- (id)initWithParentScope:(id)arg1;	// IMP=0x0000000000061a6d

@end

