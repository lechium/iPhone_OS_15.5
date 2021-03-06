//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTBundleMatchingInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_mcc;	// 8 = 0x8
    NSString *_mnc;	// 16 = 0x10
    NSString *_imsi;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093623
- (void).cxx_destruct;	// IMP=0x000000000009367c
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(retain, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093513
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093430
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000932fb
- (id)description;	// IMP=0x00000000000931da

@end

