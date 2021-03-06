//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSTimeZone;

@interface ICPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_buildVersion;	// 8 = 0x8
    NSString *_deviceGUID;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    NSNumber *_privateListeningEnabled;	// 32 = 0x20
    _Bool _SBEnabled;	// 40 = 0x28
    unsigned long long _storeAccountID;	// 48 = 0x30
    NSString *_storeFrontID;	// 56 = 0x38
    long long _systemReleaseType;	// 64 = 0x40
    NSTimeZone *_timeZone;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014f97b
- (void).cxx_destruct;	// IMP=0x000000000014f74f
@property(readonly, copy, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property(readonly, nonatomic) long long systemReleaseType; // @synthesize systemReleaseType=_systemReleaseType;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x000000000014f5da
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f5a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f59c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014f3af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014f2a9
- (id)description;	// IMP=0x000000000014f08a

@end

