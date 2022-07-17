//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SOFullProfile
{
    NSString *_extensionTeamIdentifier;	// 8 = 0x8
    NSDictionary *_extensionData;	// 16 = 0x10
}

+ (long long)screenLockedBehaviorWithString:(id)arg1;	// IMP=0x000000000000896b
+ (long long)profileTypeWithString:(id)arg1;	// IMP=0x0000000000008902
- (void).cxx_destruct;	// IMP=0x00000000000097f1
@property(retain, nonatomic) NSDictionary *extensionData; // @synthesize extensionData=_extensionData;
@property(retain, nonatomic) NSString *extensionTeamIdentifier; // @synthesize extensionTeamIdentifier=_extensionTeamIdentifier;
- (id)copyProfileForClient;	// IMP=0x0000000000009776
- (id)copyProfile;	// IMP=0x0000000000009762
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009519
- (id)description;	// IMP=0x0000000000009242
- (void)removeURLPrefix:(id)arg1;	// IMP=0x000000000000915d
- (id)initWithProfileData:(id)arg1;	// IMP=0x00000000000089d4

@end
