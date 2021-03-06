//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDCollectedSensorDatum-Protocol.h>

@class NSData, NSDateInterval, NSString, NSUUID;

@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum>
{
    NSUUID *_datumIdentifier;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSData *_resumeContext;	// 24 = 0x18
    CDUnknownBlockType _resumeContextProvider;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004219b1
- (void).cxx_destruct;	// IMP=0x0000000000020a5f
@property(readonly, copy, nonatomic) CDUnknownBlockType resumeContextProvider; // @synthesize resumeContextProvider=_resumeContextProvider;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004219c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004219b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f1d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000208ce
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(CDUnknownBlockType)arg3;	// IMP=0x000000000042193d
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;	// IMP=0x000000000001ee82
@property(readonly, copy, nonatomic) NSData *resumeContext;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSUUID *datumIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

