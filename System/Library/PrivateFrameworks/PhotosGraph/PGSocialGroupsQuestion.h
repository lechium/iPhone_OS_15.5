//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
    double _localFactoryScore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004029cb
- (unsigned short)state;	// IMP=0x00000000004029ba
- (double)localFactoryScore;	// IMP=0x00000000004029a8
- (id)entityIdentifier;	// IMP=0x0000000000402997
- (id)additionalInfo;	// IMP=0x0000000000402986
- (unsigned short)entityType;	// IMP=0x000000000040297b
- (unsigned short)displayType;	// IMP=0x0000000000402970
- (unsigned short)type;	// IMP=0x0000000000402965
- (id)initWithSocialGroupID:(id)arg1 personLocalIdentifiers:(id)arg2 personNames:(id)arg3 localFactoryScore:(double)arg4;	// IMP=0x0000000000402698

@end
