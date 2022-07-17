//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ATXSpotlightEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>
{
    NSString *_queryAtEngagement;	// 8 = 0x8
    NSString *_engagedAppString;	// 16 = 0x10
    NSNumber *_didSearchDuringSession;	// 24 = 0x18
    NSString *_searchEngagedBundleId;	// 32 = 0x20
    NSNumber *_searchEngagedActionType;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a32e2
- (void).cxx_destruct;	// IMP=0x00000000000a3898
@property(retain, nonatomic) NSNumber *searchEngagedActionType; // @synthesize searchEngagedActionType=_searchEngagedActionType;
@property(retain, nonatomic) NSString *searchEngagedBundleId; // @synthesize searchEngagedBundleId=_searchEngagedBundleId;
@property(retain, nonatomic) NSNumber *didSearchDuringSession; // @synthesize didSearchDuringSession=_didSearchDuringSession;
@property(retain, nonatomic) NSString *engagedAppString; // @synthesize engagedAppString=_engagedAppString;
@property(retain, nonatomic) NSString *queryAtEngagement; // @synthesize queryAtEngagement=_queryAtEngagement;
- (unsigned long long)hash;	// IMP=0x00000000000a3782
- (_Bool)isEqualToATXSpotlightEventMetadata:(id)arg1;	// IMP=0x00000000000a3610
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a35a8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a351b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a34a2
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x00000000000a32ea
- (id)encodeAsProto;	// IMP=0x00000000000a3292
- (id)proto;	// IMP=0x00000000000a31e1
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000a2fca
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000a2f2e
- (id)initWithQueryAtEngagement:(id)arg1 engagedAppString:(id)arg2 didSearchDuringSession:(id)arg3 searchEngagedBundleId:(id)arg4 searchEngagedActionType:(id)arg5;	// IMP=0x00000000000a2e2c
- (id)init;	// IMP=0x00000000000a2dff

@end
