//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal
{
    unsigned long long _dataType;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSArray *_members;	// 24 = 0x18
    _Bool _isIndirectArgumentBuffer;	// 32 = 0x20
    NSString *_typeName;	// 40 = 0x28
}

@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
- (unsigned long long)dataType;	// IMP=0x000000000009781b
- (_Bool)isStructLayoutThreadSafeWith:(id)arg1;	// IMP=0x000000000009750d
- (id)members;	// IMP=0x00000000000974fc
- (id)description;	// IMP=0x00000000000974e8
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000096c23
- (void)dealloc;	// IMP=0x0000000000096bbd
- (id)memberByName:(id)arg1;	// IMP=0x0000000000096ba0
- (void)setMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000969d5
- (id)init;	// IMP=0x0000000000096997
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2 typeName:(id)arg3;	// IMP=0x0000000000096950
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000096766

@end
