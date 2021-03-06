//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@protocol ASDClipServiceBroker;

@interface ASDAccountStatusTask : NSObject <NSSecureCoding>
{
    id <ASDClipServiceBroker> _broker;	// 8 = 0x8
    _Bool _lookupFamilyInfoIfNecessary;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023129
- (void).cxx_destruct;	// IMP=0x00000000000231d7
@property _Bool lookupFamilyInfoIfNecessary; // @synthesize lookupFamilyInfoIfNecessary=_lookupFamilyInfoIfNecessary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000231a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023131
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022e4b
- (id)init;	// IMP=0x0000000000022de5

@end

