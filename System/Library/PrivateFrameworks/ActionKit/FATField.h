//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FATField : NSObject
{
    _Bool _optional;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    unsigned int _type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    Class _structClass;	// 32 = 0x20
    FATField *_valueField;	// 40 = 0x28
    FATField *_keyField;	// 48 = 0x30
}

+ (id)nameForFatFieldType:(unsigned int)arg1;	// IMP=0x000000000029a2b8
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6;	// IMP=0x000000000029a225
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 valueField:(id)arg5;	// IMP=0x000000000029a19d
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4 structClass:(Class)arg5;	// IMP=0x000000000029a151
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(_Bool)arg3 name:(id)arg4;	// IMP=0x000000000029a0b1
- (void).cxx_destruct;	// IMP=0x000000000029a686
@property(retain, nonatomic) FATField *keyField; // @synthesize keyField=_keyField;
@property(retain, nonatomic) FATField *valueField; // @synthesize valueField=_valueField;
@property(nonatomic) Class structClass; // @synthesize structClass=_structClass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property _Bool optional; // @synthesize optional=_optional;
@property unsigned int type; // @synthesize type=_type;
@property unsigned int index; // @synthesize index=_index;
- (id)description;	// IMP=0x000000000029a384

@end
