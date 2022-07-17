//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSecureCoding-Protocol.h>

@class NSString, NTPBSession;

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding>
{
    int _eventType;	// 8 = 0x8
    NSString *_eventIdentifier;	// 16 = 0x10
    NSString *_externalAnalyticsIdentifier;	// 24 = 0x18
    NTPBSession *_session;	// 32 = 0x20
    NSString *_contentViewedIdentifier;	// 40 = 0x28
    NSString *_publisherIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004f86
- (void).cxx_destruct;	// IMP=0x0000000000004fc9
@property(readonly, nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(readonly, copy, nonatomic) NSString *contentViewedIdentifier; // @synthesize contentViewedIdentifier=_contentViewedIdentifier;
@property(readonly, copy, nonatomic) NTPBSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *externalAnalyticsIdentifier; // @synthesize externalAnalyticsIdentifier=_externalAnalyticsIdentifier;
@property(readonly, copy, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004e17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004cd3
- (id)initWithSession:(id)arg1 eventIdentifier:(id)arg2 externalAnalyticsIdentifier:(id)arg3 contentViewedIdentifier:(id)arg4 publisherIdentifier:(id)arg5 eventType:(int)arg6;	// IMP=0x0000000000004b9a

@end
