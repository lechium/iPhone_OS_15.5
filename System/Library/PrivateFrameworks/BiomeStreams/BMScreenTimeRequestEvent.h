//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMScreenTimeRequestEvent <BMStoreData, BMProtoBufWrapper>
{
    int _kind;	// 8 = 0x8
    int _status;	// 12 = 0xc
    int _approvalTime;	// 16 = 0x10
    NSString *_requestID;	// 24 = 0x18
    double _eventTime;	// 32 = 0x20
    NSString *_requesterDSID;	// 40 = 0x28
    NSString *_responderDSID;	// 48 = 0x30
    NSString *_websitePath;	// 56 = 0x38
    NSString *_bundleID;	// 64 = 0x40
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000bff10
- (void).cxx_destruct;	// IMP=0x00000000000c0c9d
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *websitePath; // @synthesize websitePath=_websitePath;
@property(copy, nonatomic) NSString *responderDSID; // @synthesize responderDSID=_responderDSID;
@property(copy, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(nonatomic) int approvalTime; // @synthesize approvalTime=_approvalTime;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c0713
@property(readonly) unsigned long long hash;
- (id)json;	// IMP=0x00000000000c0606
- (id)jsonDict;	// IMP=0x00000000000c0419
- (id)proto;	// IMP=0x00000000000c02d7
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000c00b5
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000c0019
- (id)encodeAsProto;	// IMP=0x00000000000bffc9
- (id)serialize;	// IMP=0x00000000000bffb7
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithRequestID:(id)arg1 kind:(int)arg2 status:(int)arg3 eventTime:(double)arg4 approvalTime:(int)arg5 requesterDSID:(id)arg6 responderDSID:(id)arg7 websitePath:(id)arg8 bundleID:(id)arg9;	// IMP=0x00000000000bfc4a
- (_Bool)validNonOptionalProperty:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000000bfb0e
- (id)init;	// IMP=0x00000000000bfb08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
