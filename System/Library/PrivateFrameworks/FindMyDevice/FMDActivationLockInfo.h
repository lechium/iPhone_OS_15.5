//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>
{
    _Bool _isActivationLocked;	// 8 = 0x8
    _Bool _isOfflineFindingEnabled;	// 9 = 0x9
    _Bool _isRestrictedSKU;	// 10 = 0xa
    _Bool _isFindMyLPEMEnabled;	// 11 = 0xb
    NSString *_title;	// 16 = 0x10
    NSString *_maskedAppleID;	// 24 = 0x18
    NSString *_maskedOrganizationID;	// 32 = 0x20
    NSDictionary *_localeStrings;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012089
- (void).cxx_destruct;	// IMP=0x000000000001227a
@property(nonatomic) _Bool isFindMyLPEMEnabled; // @synthesize isFindMyLPEMEnabled=_isFindMyLPEMEnabled;
@property(nonatomic) _Bool isRestrictedSKU; // @synthesize isRestrictedSKU=_isRestrictedSKU;
@property(retain, nonatomic) NSDictionary *localeStrings; // @synthesize localeStrings=_localeStrings;
@property(nonatomic) _Bool isOfflineFindingEnabled; // @synthesize isOfflineFindingEnabled=_isOfflineFindingEnabled;
@property(retain, nonatomic) NSString *maskedOrganizationID; // @synthesize maskedOrganizationID=_maskedOrganizationID;
@property(retain, nonatomic) NSString *maskedAppleID; // @synthesize maskedAppleID=_maskedAppleID;
@property(nonatomic) _Bool isActivationLocked; // @synthesize isActivationLocked=_isActivationLocked;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x0000000000012091
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011ee2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011c36

@end
