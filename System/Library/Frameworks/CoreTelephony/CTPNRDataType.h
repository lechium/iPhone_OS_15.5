//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding>
{
    long long _pnrMechanism;	// 8 = 0x8
    NSString *_svcCenterAddr;	// 16 = 0x10
    NSString *_destAddr;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037e70
- (void).cxx_destruct;	// IMP=0x0000000000037ec2
@property(retain, nonatomic) NSString *destAddr; // @synthesize destAddr=_destAddr;
@property(retain, nonatomic) NSString *svcCenterAddr; // @synthesize svcCenterAddr=_svcCenterAddr;
@property(nonatomic) long long pnrMechanism; // @synthesize pnrMechanism=_pnrMechanism;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037d7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037cf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037c87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037c24
- (_Bool)isEqualToCTPNRDataType:(id)arg1;	// IMP=0x0000000000037a08
- (id)init;	// IMP=0x00000000000379cc
- (id)description;	// IMP=0x00000000000378bd

@end
