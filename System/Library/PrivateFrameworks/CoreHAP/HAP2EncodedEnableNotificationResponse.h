//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2EncodedEnableNotificationResponse-Protocol.h>

@class NSArray, NSSet, NSString;

@interface HAP2EncodedEnableNotificationResponse <HAP2EncodedEnableNotificationResponse>
{
    NSSet *_updatedValues;	// 8 = 0x8
    NSSet *_valueResponses;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000060397
@property(readonly, nonatomic) NSSet *updatedValues; // @synthesize updatedValues=_updatedValues;
- (id)initWithNotificationResponses:(id)arg1 updatedValues:(id)arg2;	// IMP=0x000000000006030e
- (id)initWithNotificationResponses:(id)arg1;	// IMP=0x00000000000602fa

// Remaining properties
@property(readonly, nonatomic) NSArray *characteristics;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

