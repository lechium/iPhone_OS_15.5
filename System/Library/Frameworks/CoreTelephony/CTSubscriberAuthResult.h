//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSData;

@interface CTSubscriberAuthResult : NSObject <NSSecureCoding>
{
    NSData *_auts;	// 8 = 0x8
    NSData *_res;	// 16 = 0x10
    NSData *_sres;	// 24 = 0x18
    NSData *_kc;	// 32 = 0x20
    NSData *_ck;	// 40 = 0x28
    NSData *_ik;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071c9e
- (void).cxx_destruct;	// IMP=0x0000000000071d48
@property(retain, nonatomic) NSData *ik; // @synthesize ik=_ik;
@property(retain, nonatomic) NSData *ck; // @synthesize ck=_ck;
@property(retain, nonatomic) NSData *kc; // @synthesize kc=_kc;
@property(retain, nonatomic) NSData *sres; // @synthesize sres=_sres;
@property(retain, nonatomic) NSData *res; // @synthesize res=_res;
@property(retain, nonatomic) NSData *auts; // @synthesize auts=_auts;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071aa1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000718e4

@end
