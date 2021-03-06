//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL, NSUUID;

@interface HDHRSOriginalSignedClinicalDataRecord : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_rawContent;	// 8 = 0x8
    long long _sourceType;	// 16 = 0x10
    NSURL *_sourceURL;	// 24 = 0x18
    NSString *_issuerIdentifier;	// 32 = 0x20
    NSArray *_credentialTypes;	// 40 = 0x28
    NSUUID *_syncIdentifier;	// 48 = 0x30
    NSDictionary *_metadata;	// 56 = 0x38
    NSDate *_receivedDate;	// 64 = 0x40
    NSTimeZone *_receivedDateTimeZone;	// 72 = 0x48
    long long _signatureStatus;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003b5d
- (void).cxx_destruct;	// IMP=0x0000000000004039
@property(readonly, nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(readonly, copy, nonatomic) NSTimeZone *receivedDateTimeZone; // @synthesize receivedDateTimeZone=_receivedDateTimeZone;
@property(readonly, copy, nonatomic) NSDate *receivedDate; // @synthesize receivedDate=_receivedDate;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(readonly, copy, nonatomic) NSArray *credentialTypes; // @synthesize credentialTypes=_credentialTypes;
@property(readonly, copy, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) NSData *rawContent; // @synthesize rawContent=_rawContent;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003c8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003b65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003b52
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002dc9
- (id)initWithRawContent:(id)arg1 sourceType:(long long)arg2 sourceURL:(id)arg3 issuerIdentifier:(id)arg4 credentialTypes:(id)arg5 syncIdentifier:(id)arg6 metadata:(id)arg7 receivedDate:(id)arg8 receivedDateTimeZone:(id)arg9 signatureStatus:(long long)arg10;	// IMP=0x0000000000002c0f

@end

