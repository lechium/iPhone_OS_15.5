//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CLSRole
{
    _Bool _isEditable;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSArray *_privileges;	// 24 = 0x18
    long long _sourceType;	// 32 = 0x20
}

+ (id)stringForRoleType:(long long)arg1;	// IMP=0x000000000006f1ab
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f050
- (void).cxx_destruct;	// IMP=0x000000000006f2a4
@property _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSArray *privileges; // @synthesize privileges=_privileges;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)dictionaryRepresentation;	// IMP=0x000000000006f058
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ef72
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006edcb
- (id)_init;	// IMP=0x000000000006ed9c

@end

