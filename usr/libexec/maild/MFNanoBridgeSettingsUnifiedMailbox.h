//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFNanoBridgeSettingsUnifiedMailbox
{
    int _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000093d8b
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000094066
- (unsigned long long)hash;	// IMP=0x0010000000094055
- (id)icon;	// IMP=0x0010000000093f94
- (id)displayName;	// IMP=0x0010000000093eef
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000093e30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000093d93
- (unsigned long long)mailboxFilterType;	// IMP=0x0010000000093d80
- (id)initWithType:(int)arg1;	// IMP=0x0010000000093d3e

@end

