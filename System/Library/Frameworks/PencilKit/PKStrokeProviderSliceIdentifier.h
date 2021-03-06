//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeIdentifier-Protocol.h>

@class NSString, NSUUID;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier>
{
    NSUUID *_strokeUUID;	// 8 = 0x8
    double _tStart;	// 16 = 0x10
    double _tEnd;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014835c
- (void).cxx_destruct;	// IMP=0x0000000000148384
@property(readonly, nonatomic) double tEnd; // @synthesize tEnd=_tEnd;
@property(readonly, nonatomic) double tStart; // @synthesize tStart=_tStart;
@property(readonly, nonatomic) NSUUID *strokeUUID; // @synthesize strokeUUID=_strokeUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014826c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000148194
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000147f3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147f34
- (id)initWithUUID:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;	// IMP=0x0000000000147ead

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

