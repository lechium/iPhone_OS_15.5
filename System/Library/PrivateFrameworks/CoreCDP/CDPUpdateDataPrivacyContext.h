//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/NSCopying-Protocol.h>
#import <CoreCDP/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CDPUpdateDataPrivacyContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _userAcceptedDevicesToLoseAccountAccess;	// 8 = 0x8
    unsigned long long _statusToSet;	// 16 = 0x10
    NSArray *_devicesThatLoseAccountAccessOnEnable;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a2c5
- (void).cxx_destruct;	// IMP=0x000000000000a54b
@property(retain, nonatomic) NSArray *devicesThatLoseAccountAccessOnEnable; // @synthesize devicesThatLoseAccountAccessOnEnable=_devicesThatLoseAccountAccessOnEnable;
@property(nonatomic) _Bool userAcceptedDevicesToLoseAccountAccess; // @synthesize userAcceptedDevicesToLoseAccountAccess=_userAcceptedDevicesToLoseAccountAccess;
@property(nonatomic) unsigned long long statusToSet; // @synthesize statusToSet=_statusToSet;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a384
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a2cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a288
- (id)initWithStatusToUpdate:(unsigned long long)arg1;	// IMP=0x000000000000a24b

@end

