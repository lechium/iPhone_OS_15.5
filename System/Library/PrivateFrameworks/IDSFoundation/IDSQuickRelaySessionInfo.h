//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject
{
    long long _allocateType;	// 8 = 0x8
    double _allocateTime;	// 16 = 0x10
    NSString *_allocateRequestID;	// 24 = 0x18
    NSString *_idsSessionID;	// 32 = 0x20
    NSString *_relaySessionID;	// 40 = 0x28
    NSData *_relaySessionToken;	// 48 = 0x30
    NSData *_relaySessionKey;	// 56 = 0x38
    NSData *_softwareData;	// 64 = 0x40
    unsigned char _protocolVersion;	// 72 = 0x48
    long long _relayServerProviderType;	// 80 = 0x50
    NSString *_reportingDataBlob;	// 88 = 0x58
    long long _participantID;	// 96 = 0x60
    NSArray *_allParticipantIDs;	// 104 = 0x68
    _Bool _isInitiator;	// 112 = 0x70
    long long _linkProtocol;	// 120 = 0x78
    struct sockaddr_storage _serverAddress;	// 128 = 0x80
    struct sockaddr_storage _serverAddressIPv6;	// 256 = 0x100
    struct sockaddr_storage _highPriorityServerAddress;	// 384 = 0x180
    struct sockaddr_storage _highPriorityServerAddressIPv6;	// 512 = 0x200
    NSString *_groupID;	// 640 = 0x280
    NSString *_stableGroupID;	// 648 = 0x288
    NSUUID *_defaultDeviceLocalCBUUID;	// 656 = 0x290
    NSUUID *_defaultDeviceRemoteCBUUID;	// 664 = 0x298
    NSArray *_publishedStreams;	// 672 = 0x2a0
    NSArray *_subscribedStreams;	// 680 = 0x2a8
    unsigned int _generationCounter;	// 688 = 0x2b0
    unsigned char _maxConcurrentStreams;	// 692 = 0x2b4
    unsigned char _linkSuggestion;	// 693 = 0x2b5
    unsigned char _linkScore;	// 694 = 0x2b6
    unsigned char _ipPreference;	// 695 = 0x2b7
}

- (void).cxx_destruct;	// IMP=0x00000000000c8c0b
@property(readonly) unsigned char ipPreference; // @synthesize ipPreference=_ipPreference;
@property(readonly) unsigned char maxConcurrentStreams; // @synthesize maxConcurrentStreams=_maxConcurrentStreams;
@property(readonly) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
@property(readonly) NSArray *subscribedStreams; // @synthesize subscribedStreams=_subscribedStreams;
@property(readonly) NSArray *publishedStreams; // @synthesize publishedStreams=_publishedStreams;
@property(readonly) NSString *stableGroupID; // @synthesize stableGroupID=_stableGroupID;
@property(readonly) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly) NSUUID *defaultDeviceRemoteCBUUID; // @synthesize defaultDeviceRemoteCBUUID=_defaultDeviceRemoteCBUUID;
@property(readonly) NSUUID *defaultDeviceLocalCBUUID; // @synthesize defaultDeviceLocalCBUUID=_defaultDeviceLocalCBUUID;
@property(readonly) unsigned char linkScore; // @synthesize linkScore=_linkScore;
@property(readonly) unsigned char linkSuggestion; // @synthesize linkSuggestion=_linkSuggestion;
@property(readonly) long long linkProtocol; // @synthesize linkProtocol=_linkProtocol;
@property(readonly) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly) NSArray *allParticipantIDs; // @synthesize allParticipantIDs=_allParticipantIDs;
@property(readonly) long long participantID; // @synthesize participantID=_participantID;
@property(readonly) NSString *reportingDataBlob; // @synthesize reportingDataBlob=_reportingDataBlob;
@property(readonly) long long relayServerProviderType; // @synthesize relayServerProviderType=_relayServerProviderType;
@property(readonly) unsigned char protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly) NSData *softwareData; // @synthesize softwareData=_softwareData;
@property(readonly) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(readonly) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(readonly) NSString *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(readonly) NSString *idsSessionID; // @synthesize idsSessionID=_idsSessionID;
@property(readonly) NSString *allocateRequestID; // @synthesize allocateRequestID=_allocateRequestID;
@property(readonly) double allocateTime; // @synthesize allocateTime=_allocateTime;
@property(readonly) long long allocateType; // @synthesize allocateType=_allocateType;
- (long long)parseSessionInfo:(id)arg1;	// IMP=0x00000000000c6f09
- (const struct sockaddr_storage *)highPriorityServerAddressIPv6;	// IMP=0x00000000000c6efc
- (const struct sockaddr_storage *)highPriorityServerAddress;	// IMP=0x00000000000c6eef
@property(readonly) const struct sockaddr_storage *serverAddressIPv6;
@property(readonly) const struct sockaddr_storage *serverAddress;

@end

