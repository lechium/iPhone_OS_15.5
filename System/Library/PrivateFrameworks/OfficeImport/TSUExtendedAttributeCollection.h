//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUExtendedAttributeCollection : NSObject
{
    NSMutableDictionary *_attributes;	// 8 = 0x8
}

+ (_Bool)removeExtraExtendedAttributesAtPath:(id)arg1 forIntent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x00000000002c947d
- (void).cxx_destruct;	// IMP=0x00000000002ca21e
- (id)description;	// IMP=0x00000000002ca17c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ca0f1
- (unsigned long long)hash;	// IMP=0x00000000002ca0db
- (void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2;	// IMP=0x00000000002c9fdb
- (id)extendedAttributeForName:(id)arg1;	// IMP=0x00000000002c9f3a
- (id)allAttributes;	// IMP=0x00000000002c9f24
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 forRemoval:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000002c9b88
- (_Bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x00000000002c9b66
- (id)initWithPath:(id)arg1 forRemoval:(_Bool)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x00000000002c9801
- (id)initWithPath:(id)arg1 options:(int)arg2 error:(id *)arg3;	// IMP=0x00000000002c97e7
- (id)initWithAttributes:(id)arg1;	// IMP=0x00000000002c953a
- (id)init;	// IMP=0x00000000002c9521

@end
