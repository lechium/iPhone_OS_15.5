//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface SPUnauthorizedTrackingAdvertisement : NSObject <NSSecureCoding>
{
    unsigned char _status;	// 8 = 0x8
    NSData *_advertisementData;	// 16 = 0x10
    NSData *_reserved;	// 24 = 0x18
    long long _rssi;	// 32 = 0x20
    NSDate *_scanDate;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
    NSData *__address;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004161a
- (void).cxx_destruct;	// IMP=0x0000000000041e83
@property(copy, nonatomic) NSData *_address; // @synthesize _address=__address;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDate *scanDate; // @synthesize scanDate=_scanDate;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property(readonly, copy, nonatomic) NSData *address;
- (id)description;	// IMP=0x0000000000041b57
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000419d0
- (unsigned long long)hash;	// IMP=0x00000000000418a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041622
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004144e
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;	// IMP=0x0000000000041341
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;	// IMP=0x000000000004128d

@end
