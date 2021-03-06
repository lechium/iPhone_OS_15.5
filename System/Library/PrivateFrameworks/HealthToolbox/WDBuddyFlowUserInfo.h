//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKSimpleDataEntryItemDelegate-Protocol.h>

@class NSDateComponents, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue, WDBuddyFlowUserInfoDelegate;

@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate>
{
    NSMutableDictionary *_dataEntryItems;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <WDBuddyFlowUserInfoDelegate> _delegate;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    NSDateComponents *_dateOfBirthComponents;	// 48 = 0x30
    NSNumber *_sex;	// 56 = 0x38
    NSNumber *_heightInCm;	// 64 = 0x40
    NSNumber *_weightInKg;	// 72 = 0x48
    NSNumber *_originalHeightInCm;	// 80 = 0x50
    NSNumber *_originalWeightInKg;	// 88 = 0x58
}

+ (id)buddyFlowUserInfoWithDemographicsInformation:(id)arg1;	// IMP=0x0000000000069b74
- (void).cxx_destruct;	// IMP=0x000000000006b808
@property(retain, nonatomic) NSNumber *originalWeightInKg; // @synthesize originalWeightInKg=_originalWeightInKg;
@property(retain, nonatomic) NSNumber *originalHeightInCm; // @synthesize originalHeightInCm=_originalHeightInCm;
@property(retain, nonatomic) NSNumber *weightInKg; // @synthesize weightInKg=_weightInKg;
@property(retain, nonatomic) NSNumber *heightInCm; // @synthesize heightInCm=_heightInCm;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) __weak id <WDBuddyFlowUserInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataEntryItemDidUpdateValue:(id)arg1;	// IMP=0x000000000006b502
- (id)_todayBirthdayDateComponents;	// IMP=0x000000000006b47a
- (id)_createSexEntryItem;	// IMP=0x000000000006b1ab
- (id)_createDateOfBirthEntryItem;	// IMP=0x000000000006afa8
- (id)_dataEntryItemForRegistrantField:(unsigned long long)arg1;	// IMP=0x000000000006ac4d
- (void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2 withMedicalIDCompletion:(CDUnknownBlockType)arg3 andSaveNameCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006a3d2
- (id)_medicalIDName;	// IMP=0x000000000006a214
- (id)medicalIDRepresentation;	// IMP=0x000000000006a07a
- (id)defaultDataEntryItems;	// IMP=0x0000000000069e7c
- (id)init;	// IMP=0x0000000000069ae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

