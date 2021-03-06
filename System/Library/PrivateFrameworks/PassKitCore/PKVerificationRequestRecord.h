//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PKVerificationChannel;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>
{
    NSString *_currentStepIdentifier;	// 8 = 0x8
    NSString *_previousStepIdentifier;	// 16 = 0x10
    long long _verificationStatus;	// 24 = 0x18
    NSString *_passUniqueID;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
    PKVerificationChannel *_channel;	// 48 = 0x30
    NSArray *_allChannels;	// 56 = 0x38
    NSDictionary *_requiredFieldData;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000035ab42
+ (id)verificationRequestRecordForPass:(id)arg1;	// IMP=0x000000000035a2d0
- (void).cxx_destruct;	// IMP=0x000000000035ae97
@property(copy, nonatomic) NSDictionary *requiredFieldData; // @synthesize requiredFieldData=_requiredFieldData;
@property(copy, nonatomic) NSArray *allChannels; // @synthesize allChannels=_allChannels;
@property(copy, nonatomic) PKVerificationChannel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(copy, nonatomic) NSString *currentStepIdentifier; // @synthesize currentStepIdentifier=_currentStepIdentifier;
- (id)requiredVerificationFields;	// IMP=0x000000000035ab4a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000035a96a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000035a473

@end

