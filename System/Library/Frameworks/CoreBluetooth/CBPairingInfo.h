//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class CBDevice, NSError, NSString;

@interface CBPairingInfo : NSObject <CUXPCCodable>
{
    unsigned int _flags;	// 8 = 0x8
    CBDevice *_device;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSString *_pin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000030d00
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CBDevice *device; // @synthesize device=_device;
- (id)description;	// IMP=0x0000000000030b80
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x0000000000030aa0
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030880

@end

