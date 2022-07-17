//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface HDContributorManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f20e7
- (id)_imPreferredAccount;	// IMP=0x00000000001f206b
- (id)_primaryAppleAccount;	// IMP=0x00000000001f1f70
- (id)insertOrLookupContributorEntityWithReference:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f1b6d
- (id)defaultContributorReference;	// IMP=0x00000000001f1afa
- (id)contributorForReference:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f1a80
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000001f1a1c

@end
