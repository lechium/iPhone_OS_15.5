//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IconServices/NSSecureCoding-Protocol.h>

@class ISIcns, NSData;

__attribute__((visibility("hidden")))
@interface ISIcnsIcon <NSSecureCoding>
{
    NSData *_icnsData;	// 16 = 0x10
    ISIcns *_internalICNS;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000393d6
- (void).cxx_destruct;	// IMP=0x0000000000039733
@property(retain) ISIcns *internalICNS; // @synthesize internalICNS=_internalICNS;
@property(readonly) NSData *icnsData; // @synthesize icnsData=_icnsData;
- (id)makeResourceProvider;	// IMP=0x00000000000396ee
@property(readonly) ISIcns *icns; // @dynamic icns;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039669
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000395ce
- (id)initWithIcnsData:(id)arg1;	// IMP=0x000000000003951d
- (id)initWithIcns:(id)arg1;	// IMP=0x0000000000039464
- (id)initWithContentOfURL:(id)arg1;	// IMP=0x00000000000393de

@end

