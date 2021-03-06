//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;	// 8 = 0x8
}

+ (id)asciiAddressWithString:(id)arg1;	// IMP=0x0000000000018bb8
- (void).cxx_destruct;	// IMP=0x0000000000018cdd
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;	// IMP=0x0000000000018cbb
- (id)encodedString;	// IMP=0x0000000000018cad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018c74
- (id)initWithAddress:(id)arg1;	// IMP=0x0000000000018c01

@end

