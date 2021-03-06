//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKPassSectionDetailDrillInField
{
    NSArray *_sectionIdentifiers;	// 128 = 0x80
    long long _authRequirement;	// 136 = 0x88
    NSString *_localizedTitle;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d15b7
- (void).cxx_destruct;	// IMP=0x00000000001d170e
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) long long authRequirement; // @synthesize authRequirement=_authRequirement;
@property(retain, nonatomic) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
- (_Bool)isDrillInField;	// IMP=0x00000000001d169a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d15bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d14f9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d13d7
- (id)asDictionary;	// IMP=0x00000000001d138f

@end

