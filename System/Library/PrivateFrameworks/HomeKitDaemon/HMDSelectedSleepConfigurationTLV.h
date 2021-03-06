//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDSleepConfigurationOperationStatusWrapper, HMDSleepConfigurationOperationTypeWrapper, NSString;

@interface HMDSelectedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDSleepConfigurationOperationTypeWrapper *_operationType;	// 8 = 0x8
    HMDSleepConfigurationOperationStatusWrapper *_operationStatus;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_backoffTime;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007564a6
- (void).cxx_destruct;	// IMP=0x0000000000756473
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *backoffTime; // @synthesize backoffTime=_backoffTime;
@property(retain, nonatomic) HMDSleepConfigurationOperationStatusWrapper *operationStatus; // @synthesize operationStatus=_operationStatus;
@property(retain, nonatomic) HMDSleepConfigurationOperationTypeWrapper *operationType; // @synthesize operationType=_operationType;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000756077
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000755fbf
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000755bed
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007557cf
- (id)initWithOperationType:(id)arg1 operationStatus:(id)arg2 backoffTime:(id)arg3;	// IMP=0x0000000000755718
- (id)init;	// IMP=0x00000000007556e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

