//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SRRequestReading;

@interface SRReaderFetchRequest : NSObject
{
    id <SRRequestReading> _readerRequest;	// 8 = 0x8
    _Bool _bypassHoldingPeriod;	// 16 = 0x10
    double _from;	// 24 = 0x18
    double _to;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000ae30
@property _Bool bypassHoldingPeriod; // @synthesize bypassHoldingPeriod=_bypassHoldingPeriod;
@property double to; // @synthesize to=_to;
@property double from; // @synthesize from=_from;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000aed0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000ae40
@property(retain, nonatomic) NSString *deviceIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier;
- (void)setSensor:(id)arg1;	// IMP=0x001000000000ad90
- (id)sensor;	// IMP=0x001000000000ad70
- (void)dealloc;	// IMP=0x001000000000ad20
- (id)init;	// IMP=0x001000000000acd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

