//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SAClientSetupInfo
{
}

+ (id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000028b83
+ (id)clientSetupInfo;	// IMP=0x0000000000028b71
- (_Bool)mutatingCommand;	// IMP=0x0000000000028bd9
- (_Bool)requiresResponse;	// IMP=0x0000000000028bd1
@property(nonatomic) double threshold;
@property(nonatomic) _Bool delay;
- (id)encodedClassName;	// IMP=0x0000000000028b64
- (id)groupIdentifier;	// IMP=0x0000000000028b50

@end

