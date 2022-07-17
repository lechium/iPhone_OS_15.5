//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable>
{
    NSString *_trace;	// 8 = 0x8
    struct os_unfair_lock_s _invalidationLock;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    unsigned int _lock_port;	// 24 = 0x18
    unsigned int _rawPort;	// 28 = 0x1c
    BOOL _type;	// 32 = 0x20
    BOOL _owner;	// 33 = 0x21
    unsigned char _lock_accessCount;	// 34 = 0x22
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f6b0
+ (BOOL)_type;	// IMP=0x000000000003f188
- (void).cxx_destruct;	// IMP=0x000000000003fad5
@property(readonly, copy, nonatomic) NSString *trace; // @synthesize trace=_trace;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f934
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f6b8
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000003f594
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000003f25f
@property(readonly, copy) NSString *description;
- (unsigned int)rawPort;	// IMP=0x000000000003f17f
- (unsigned int)extractPort;	// IMP=0x000000000003f16d
- (unsigned int)port;	// IMP=0x000000000003f111
- (void)invalidate;	// IMP=0x000000000003f0c6
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;	// IMP=0x000000000003ee58
- (_Bool)matchesPortOfRight:(id)arg1;	// IMP=0x000000000003ed2b
- (void)accessPort:(CDUnknownBlockType)arg1;	// IMP=0x000000000003eb81
- (_Bool)isUsable;	// IMP=0x000000000003eb0b
- (_Bool)isValid;	// IMP=0x000000000003eadb
- (void)dealloc;	// IMP=0x000000000003ea6b
- (id)init;	// IMP=0x000000000003e9c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
