//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCharacteristicEvent <NSSecureCoding>
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000917d61
+ (id)logCategory;	// IMP=0x0000000000917d31
- (void).cxx_destruct;	// IMP=0x00000000009178cc
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x00000000009177ee
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000009177e8
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000091750f
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000917315
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000917255
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000917097
- (id)createPayload;	// IMP=0x0000000000916fc3
- (id)dumpState;	// IMP=0x0000000000916d89
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x0000000000916bb5
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000916897
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000009165d3
- (id)emptyModelObject;	// IMP=0x000000000091651a
- (id)description;	// IMP=0x000000000091646b
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000009163dc

@end
