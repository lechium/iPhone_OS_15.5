//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    struct CGImage *_art;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002fe0f4
- (void).cxx_destruct;	// IMP=0x00000000002fe58c
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) struct CGImage *art; // @synthesize art=_art;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fe463
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fe307
- (void)dealloc;	// IMP=0x00000000002fe2cd
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage *)arg4;	// IMP=0x00000000002fe174
- (id)init;	// IMP=0x00000000002fe0fc
- (id)paymentPassEntry;	// IMP=0x0000000000167a01

@end
