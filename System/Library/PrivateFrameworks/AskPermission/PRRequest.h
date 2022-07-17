//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AskPermission/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PRRequest : NSObject <NSSecureCoding>
{
    _Bool _requestedOnThisDevice;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    NSString *_ask;	// 24 = 0x18
    NSDictionary *_requestInfo;	// 32 = 0x20
    unsigned long long _requestStatus;	// 40 = 0x28
    NSNumber *_requesterDSID;	// 48 = 0x30
    NSNumber *_responderDSID;	// 56 = 0x38
    NSString *_clientIdentifier;	// 64 = 0x40
    NSDate *_dateAddedToLocalCache;	// 72 = 0x48
    NSString *_statusDescription;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000072db
- (void).cxx_destruct;	// IMP=0x0000000000007428
@property(readonly) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(copy) NSDate *dateAddedToLocalCache; // @synthesize dateAddedToLocalCache=_dateAddedToLocalCache;
@property _Bool requestedOnThisDevice; // @synthesize requestedOnThisDevice=_requestedOnThisDevice;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy) NSNumber *responderDSID; // @synthesize responderDSID=_responderDSID;
@property(copy) NSNumber *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property unsigned long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(copy) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy) NSString *ask; // @synthesize ask=_ask;
@property(copy) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000072e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000072e3
- (id)cacheRepresentation;	// IMP=0x00000000000072d3
- (id)initWithCacheRepresentation:(id)arg1;	// IMP=0x00000000000072c5
- (id)initWithAsk:(id)arg1 requestInfo:(id)arg2;	// IMP=0x00000000000072b7

@end
