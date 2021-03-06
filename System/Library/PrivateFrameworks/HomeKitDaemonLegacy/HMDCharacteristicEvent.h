//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCharacteristicEvent <NSSecureCoding>
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000086b37b
+ (id)logCategory;	// IMP=0x000000000086b34b
- (void).cxx_destruct;	// IMP=0x000000000086aee6
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x000000000086ae08
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000086ae02
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000086ab29
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000086a92f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000086a86f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000086a6b1
- (id)createPayload;	// IMP=0x000000000086a5dd
- (id)dumpState;	// IMP=0x000000000086a3a3
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x000000000086a1cf
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000869eb1
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000869bed
- (id)emptyModelObject;	// IMP=0x0000000000869b34
- (id)description;	// IMP=0x0000000000869a85
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000008699f6

@end

