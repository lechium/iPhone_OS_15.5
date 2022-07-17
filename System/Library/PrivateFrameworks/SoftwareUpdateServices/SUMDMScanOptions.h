//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSString, SUScanOptions;

@interface SUMDMScanOptions <NSSecureCoding, NSCopying>
{
    SUScanOptions *_scanOptions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002cc5c
- (void).cxx_destruct;	// IMP=0x000000000002ce2a
@property(retain, nonatomic) SUScanOptions *scanOptions; // @synthesize scanOptions=_scanOptions;
- (id)description;	// IMP=0x000000000002cd76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cd39
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002cd0f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002cc64
@property(readonly, retain, nonatomic) NSString *requestedProductMarketingVersion;
@property(readonly, nonatomic) _Bool useDelayPeriod;
- (_Bool)delayRestrictionEnabled;	// IMP=0x000000000002ca60
- (_Bool)deviceIsSupervised;	// IMP=0x000000000002ca15
- (unsigned long long)MCPathToSUMDMPath:(long long)arg1;	// IMP=0x000000000002c9fe
@property(readonly, nonatomic) unsigned long long MDMSoftwareUpdatePath;
@property(readonly, nonatomic) unsigned long long delayPeriodDays;
- (id)initWithScanOption:(id)arg1;	// IMP=0x000000000002c7f9

@end
