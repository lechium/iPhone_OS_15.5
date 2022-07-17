//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSError;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _syncEnabled;	// 8 = 0x8
    _Bool _accountSupportsSecureContainer;	// 9 = 0x9
    NSDate *_lastPullDate;	// 16 = 0x10
    NSDate *_lastPushDate;	// 24 = 0x18
    NSDate *_lastPulledUpdateDate;	// 32 = 0x20
    NSDate *_restoreCompletionDate;	// 40 = 0x28
    NSError *_errorRequiringUserAction;	// 48 = 0x30
    long long _dataUploadRequestStatus;	// 56 = 0x38
    NSDate *_dataUploadRequestStartDate;	// 64 = 0x40
    NSDate *_dataUploadRequestCompletionDate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000098b10
- (void).cxx_destruct;	// IMP=0x00000000000994eb
@property(copy, nonatomic) NSDate *dataUploadRequestCompletionDate; // @synthesize dataUploadRequestCompletionDate=_dataUploadRequestCompletionDate;
@property(copy, nonatomic) NSDate *dataUploadRequestStartDate; // @synthesize dataUploadRequestStartDate=_dataUploadRequestStartDate;
@property(nonatomic) long long dataUploadRequestStatus; // @synthesize dataUploadRequestStatus=_dataUploadRequestStatus;
@property(copy, nonatomic) NSError *errorRequiringUserAction; // @synthesize errorRequiringUserAction=_errorRequiringUserAction;
@property(copy, nonatomic) NSDate *restoreCompletionDate; // @synthesize restoreCompletionDate=_restoreCompletionDate;
@property(copy, nonatomic) NSDate *lastPulledUpdateDate; // @synthesize lastPulledUpdateDate=_lastPulledUpdateDate;
@property(copy, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(copy, nonatomic) NSDate *lastPullDate; // @synthesize lastPullDate=_lastPullDate;
@property(nonatomic) _Bool accountSupportsSecureContainer; // @synthesize accountSupportsSecureContainer=_accountSupportsSecureContainer;
@property(nonatomic) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
- (id)description;	// IMP=0x0000000000099367
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000099207
- (unsigned long long)hash;	// IMP=0x0000000000099161
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000099034
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098e01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000098ce7
- (id)initWithSyncEnabled:(_Bool)arg1 accountSupportsSecureContainer:(_Bool)arg2 lastPullDate:(id)arg3 lastPushDate:(id)arg4 lastPulledUpdateDate:(id)arg5 restoreCompletionDate:(id)arg6 errorRequiringUserAction:(id)arg7 dataUploadRequestStatus:(long long)arg8 dataUploadRequestStartDate:(id)arg9 dataUploadRequestCompletionDate:(id)arg10;	// IMP=0x0000000000098b51
- (id)init;	// IMP=0x0000000000098b18

@end
