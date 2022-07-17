//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PKPassBarcodeSettings : NSObject <NSSecureCoding>
{
    long long _initialBarcodeFetchCount;	// 8 = 0x8
    NSURL *_barcodeServiceURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f763c
- (void).cxx_destruct;	// IMP=0x00000000003f777b
@property(readonly, nonatomic) NSURL *barcodeServiceURL; // @synthesize barcodeServiceURL=_barcodeServiceURL;
@property(readonly, nonatomic) long long initialBarcodeFetchCount; // @synthesize initialBarcodeFetchCount=_initialBarcodeFetchCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f76f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f7644
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003f7586

@end
