//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding>
{
    CTEmergencyMode *_mode;	// 8 = 0x8
    CTXPCServiceSubscriptionContext *_context;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c856b
- (void).cxx_destruct;	// IMP=0x00000000000c8587
@property(readonly, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CTEmergencyMode *mode; // @synthesize mode=_mode;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c84c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c8459
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c83c4
- (id)description;	// IMP=0x00000000000c82da
- (id)initWithMode:(id)arg1 andContext:(id)arg2;	// IMP=0x00000000000c8241

@end
