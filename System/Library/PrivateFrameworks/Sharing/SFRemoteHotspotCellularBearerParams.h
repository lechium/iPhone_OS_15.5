//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFRemoteHotspotCellularBearerParams : NSObject <NSSecureCoding>
{
    unsigned short _srcPort;	// 8 = 0x8
    unsigned short _destPort;	// 10 = 0xa
    unsigned short _ipProtocol;	// 12 = 0xc
    NSString *_srcIPAddress;	// 16 = 0x10
    NSString *_destIPAddress;	// 24 = 0x18
    NSString *_trafficClass;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c2f90
- (void).cxx_destruct;	// IMP=0x00000000000c349b
@property(copy, nonatomic) NSString *trafficClass; // @synthesize trafficClass=_trafficClass;
@property(nonatomic) unsigned short ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property(nonatomic) unsigned short destPort; // @synthesize destPort=_destPort;
@property(copy, nonatomic) NSString *destIPAddress; // @synthesize destIPAddress=_destIPAddress;
@property(nonatomic) unsigned short srcPort; // @synthesize srcPort=_srcPort;
@property(copy, nonatomic) NSString *srcIPAddress; // @synthesize srcIPAddress=_srcIPAddress;
- (id)description;	// IMP=0x00000000000c3240
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c315d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c2f98

@end
