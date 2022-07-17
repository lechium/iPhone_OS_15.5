//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface SXJSONArray <NSFastEnumeration>
{
    CDUnknownBlockType _objectValueClassBlock;	// 32 = 0x20
    CDUnknownBlockType _valueClassBlock;	// 40 = 0x28
    NSArray *_json;	// 48 = 0x30
    NSMutableArray *_objects;	// 56 = 0x38
    unsigned long long _count;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a0441
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSArray *json; // @synthesize json=_json;
@property(readonly, nonatomic) CDUnknownBlockType valueClassBlock; // @synthesize valueClassBlock=_valueClassBlock;
@property(readonly, nonatomic) CDUnknownBlockType objectValueClassBlock; // @synthesize objectValueClassBlock=_objectValueClassBlock;
- (id)description;	// IMP=0x00000000000a02fa
- (id)JSONRepresentation;	// IMP=0x00000000000a02e5
- (id)NSArray;	// IMP=0x00000000000a022d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000a019a
- (id)lastObject;	// IMP=0x00000000000a0161
- (id)firstObject;	// IMP=0x00000000000a011a
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009fc52
- (id)initWithValueClassBlock:(CDUnknownBlockType)arg1 objectValueClassBlock:(CDUnknownBlockType)arg2 purgeBlock:(CDUnknownBlockType)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;	// IMP=0x000000000009f902

@end
