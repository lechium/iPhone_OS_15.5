//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSADisabled;	// 8 = 0x8
    _Bool _isNSADisabled;	// 9 = 0x9
    unsigned long long _saDisabledReasonMask;	// 16 = 0x10
    unsigned long long _nsaDisabledReasonMask;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006eaf2
+ (id)default;	// IMP=0x000000000006e4ec
@property(nonatomic) unsigned long long nsaDisabledReasonMask; // @synthesize nsaDisabledReasonMask=_nsaDisabledReasonMask;
@property(nonatomic) _Bool isNSADisabled; // @synthesize isNSADisabled=_isNSADisabled;
@property(nonatomic) unsigned long long saDisabledReasonMask; // @synthesize saDisabledReasonMask=_saDisabledReasonMask;
@property(nonatomic) _Bool isSADisabled; // @synthesize isSADisabled=_isSADisabled;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e9bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e89b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e7fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e713
- (id)description;	// IMP=0x000000000006e581
- (id)initWithSADisabled:(_Bool)arg1 saReasonMask:(unsigned long long)arg2 nsaDisabled:(_Bool)arg3 nsaReasonMask:(unsigned long long)arg4;	// IMP=0x000000000006e525

@end

