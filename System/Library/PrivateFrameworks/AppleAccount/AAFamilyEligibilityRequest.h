//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface AAFamilyEligibilityRequest
{
    ACAccount *_iTunesAccount;	// 88 = 0x58
}

+ (Class)responseClass;	// IMP=0x000000000001b7bd
- (void).cxx_destruct;	// IMP=0x000000000001b90e
@property(retain, nonatomic) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
- (id)urlRequest;	// IMP=0x000000000001b825
- (id)urlString;	// IMP=0x000000000001b7ce

@end
