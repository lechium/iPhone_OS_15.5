//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/NSCopying-Protocol.h>
#import <RemoteConfiguration/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSString, RCUserSegmentationConfiguration;

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_requestKey;	// 8 = 0x8
    NSData *_gzippedConfigurationData;	// 16 = 0x10
    RCUserSegmentationConfiguration *_userSegmentationConfiguration;	// 24 = 0x18
    NSArray *_treatmentIDs;	// 32 = 0x20
    NSArray *_segmentSetIDs;	// 40 = 0x28
    NSString *_configurationID;	// 48 = 0x30
    NSString *_contentHash;	// 56 = 0x38
    NSString *_lastModifiedString;	// 64 = 0x40
    NSString *_etag;	// 72 = 0x48
    NSString *_lastModifiedFallbackString;	// 80 = 0x50
    NSDate *_lastFetchedDate;	// 88 = 0x58
    NSNumber *_fallbackMaxAge;	// 96 = 0x60
    NSNumber *_endpointMaxAge;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b206
- (void).cxx_destruct;	// IMP=0x000000000001b544
@property(retain, nonatomic) NSNumber *endpointMaxAge; // @synthesize endpointMaxAge=_endpointMaxAge;
@property(retain, nonatomic) NSNumber *fallbackMaxAge; // @synthesize fallbackMaxAge=_fallbackMaxAge;
@property(retain, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(retain, nonatomic) NSString *lastModifiedFallbackString; // @synthesize lastModifiedFallbackString=_lastModifiedFallbackString;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(retain, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(retain, nonatomic) NSString *configurationID; // @synthesize configurationID=_configurationID;
@property(retain, nonatomic) NSArray *segmentSetIDs; // @synthesize segmentSetIDs=_segmentSetIDs;
@property(retain, nonatomic) NSArray *treatmentIDs; // @synthesize treatmentIDs=_treatmentIDs;
@property(retain, nonatomic) RCUserSegmentationConfiguration *userSegmentationConfiguration; // @synthesize userSegmentationConfiguration=_userSegmentationConfiguration;
@property(retain, nonatomic) NSData *gzippedConfigurationData; // @synthesize gzippedConfigurationData=_gzippedConfigurationData;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (id)description;	// IMP=0x000000000001b20e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001af1a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001abbf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a929
- (unsigned long long)hash;	// IMP=0x000000000001a67c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019f93
@property(readonly, nonatomic) NSData *configurationData;
- (_Bool)isExpiredWithMaxTTL:(double)arg1 allowedToReachEndpoint:(_Bool)arg2;	// IMP=0x0000000000019e47

@end

