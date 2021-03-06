//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class APInstallAttribution, NSDate, NSDictionary, NSError, NSMutableSet, NSSet, NSString, NSURL, NSUUID;

@interface APContentData : NSObject <NSSecureCoding>
{
    NSMutableSet *_representations;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
    NSUUID *_contextIdentifier;	// 32 = 0x20
    NSString *_journeyIdentifier;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
    NSURL *_disclosureURL;	// 56 = 0x38
    NSString *_disclosureRendererPayload;	// 64 = 0x40
    unsigned long long _minimumTimeBetweenPresentation;	// 72 = 0x48
    APInstallAttribution *_installAttribution;	// 80 = 0x50
    NSString *_brandName;	// 88 = 0x58
    NSString *_campaignText;	// 96 = 0x60
    NSError *_error;	// 104 = 0x68
    NSDate *_expirationDate;	// 112 = 0x70
    double _impressionThreshold;	// 120 = 0x78
    long long _serverUnfilledReason;	// 128 = 0x80
    double _serverResponseReceivedTimestamp;	// 136 = 0x88
    NSString *_humanReadableName;	// 144 = 0x90
}

+ (id)mockDataFromContext:(id)arg1 types:(id)arg2;	// IMP=0x000000000000cc94
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000cc8c
- (void).cxx_destruct;	// IMP=0x000000000000e38c
@property(retain) NSString *humanReadableName; // @synthesize humanReadableName=_humanReadableName;
@property(nonatomic) double serverResponseReceivedTimestamp; // @synthesize serverResponseReceivedTimestamp=_serverResponseReceivedTimestamp;
@property long long serverUnfilledReason; // @synthesize serverUnfilledReason=_serverUnfilledReason;
@property double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *campaignText; // @synthesize campaignText=_campaignText;
@property(retain) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain) NSSet *representations; // @synthesize representations=_representations;
@property(retain) APInstallAttribution *installAttribution; // @synthesize installAttribution=_installAttribution;
@property unsigned long long minimumTimeBetweenPresentation; // @synthesize minimumTimeBetweenPresentation=_minimumTimeBetweenPresentation;
@property(retain) NSString *disclosureRendererPayload; // @synthesize disclosureRendererPayload=_disclosureRendererPayload;
@property(retain) NSURL *disclosureURL; // @synthesize disclosureURL=_disclosureURL;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSString *journeyIdentifier; // @synthesize journeyIdentifier=_journeyIdentifier;
@property(retain) NSUUID *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(retain) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)representationWithIdentifier:(id)arg1;	// IMP=0x000000000000df7f
- (id)getRepresentation;	// IMP=0x000000000000df69
- (void)removeRepresentation:(id)arg1;	// IMP=0x000000000000df14
- (void)addRepresentations:(id)arg1;	// IMP=0x000000000000ddea
- (void)addRepresentation:(id)arg1;	// IMP=0x000000000000dd64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d94c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d4eb
- (void)_correctNonNullableFields;	// IMP=0x000000000000d344
- (id)init;	// IMP=0x000000000000d2f8

@end

