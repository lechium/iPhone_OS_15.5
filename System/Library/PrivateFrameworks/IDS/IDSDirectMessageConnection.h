//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSDeviceConnection, IDSServiceProperties, IMPowerAssertion, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSDirectMessageConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_nw_connection;

@interface IDSDirectMessageConnection : NSObject
{
    _Bool _connectionSetupInProgress;	// 8 = 0x8
    _Bool _upgradedTrafficClass;	// 9 = 0x9
    _Bool _connectionIsIncoming;	// 10 = 0xa
    _Bool _pendingAckTimerSuspended;	// 11 = 0xb
    _Bool _directMessagingAllowed;	// 12 = 0xc
    _Bool _directMessagingSupported;	// 13 = 0xd
    _Bool _trafficClassInitialized;	// 14 = 0xe
    _Bool _trafficClassTLVProcessed;	// 15 = 0xf
    _Bool _peerIsConnected;	// 16 = 0x10
    _Bool _peerIsNearby;	// 17 = 0x11
    _Bool _peerSupportsDeviceConnection;	// 18 = 0x12
    _Bool _conciseACKSupported;	// 19 = 0x13
    int _connectionState;	// 20 = 0x14
    int _notifyToken;	// 24 = 0x18
    unsigned int _trafficClassToUse;	// 28 = 0x1c
    int _directMessagingTimeOutMSEC;	// 32 = 0x20
    int _directMessagingRetryMSEC;	// 36 = 0x24
    int _directMessagingReportStatsMSEC;	// 40 = 0x28
    unsigned int _dataProtectionClass;	// 44 = 0x2c
    NSString *_serviceName;	// 48 = 0x30
    unsigned long long _identifier;	// 56 = 0x38
    char *_shortServiceNameCString;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 72 = 0x48
    NSObject<OS_nw_connection> *_connection;	// 80 = 0x50
    NSMutableArray *_connectionMessageSendQueue;	// 88 = 0x58
    id <IDSDirectMessageConnectionDelegate> _delegate;	// 96 = 0x60
    NSString *_peerID;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_pendingAckTimer;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_reporterTimer;	// 120 = 0x78
    NSMutableDictionary *_queueOneToMessageIDDictionary;	// 128 = 0x80
    NSMutableDictionary *_messageIDToMessageDictionary;	// 136 = 0x88
    long long _idsPriorityToUse;	// 144 = 0x90
    long long _trafficClassApplied;	// 152 = 0x98
    IDSDevice *_device;	// 160 = 0xa0
    IDSDeviceConnection *_deviceConnection;	// 168 = 0xa8
    NSString *_currentStreamName;	// 176 = 0xb0
    unsigned long long _directMessagingState;	// 184 = 0xb8
    IDSServiceProperties *_serviceProperties;	// 192 = 0xc0
    IMPowerAssertion *_assertion;	// 200 = 0xc8
    NSDictionary *_powerAssertionOptions;	// 208 = 0xd0
    unsigned long long _outgoingMessageBytes;	// 216 = 0xd8
    unsigned long long _outgoingMessageCount;	// 224 = 0xe0
    unsigned long long _incomingMessageBytes;	// 232 = 0xe8
    unsigned long long _incomingMessageCount;	// 240 = 0xf0
}

+ (_Bool)isDirectMessagingRequested:(id)arg1;	// IMP=0x000000000000a8b9
- (void).cxx_destruct;	// IMP=0x0000000000010ef8
@property(nonatomic) unsigned long long incomingMessageCount; // @synthesize incomingMessageCount=_incomingMessageCount;
@property(nonatomic) unsigned long long incomingMessageBytes; // @synthesize incomingMessageBytes=_incomingMessageBytes;
@property(nonatomic) unsigned long long outgoingMessageCount; // @synthesize outgoingMessageCount=_outgoingMessageCount;
@property(nonatomic) unsigned long long outgoingMessageBytes; // @synthesize outgoingMessageBytes=_outgoingMessageBytes;
@property(retain, nonatomic) NSDictionary *powerAssertionOptions; // @synthesize powerAssertionOptions=_powerAssertionOptions;
@property(retain, nonatomic) IMPowerAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) IDSServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(nonatomic) int directMessagingReportStatsMSEC; // @synthesize directMessagingReportStatsMSEC=_directMessagingReportStatsMSEC;
@property(nonatomic) int directMessagingRetryMSEC; // @synthesize directMessagingRetryMSEC=_directMessagingRetryMSEC;
@property(nonatomic) int directMessagingTimeOutMSEC; // @synthesize directMessagingTimeOutMSEC=_directMessagingTimeOutMSEC;
@property(nonatomic) unsigned long long directMessagingState; // @synthesize directMessagingState=_directMessagingState;
@property(nonatomic) _Bool conciseACKSupported; // @synthesize conciseACKSupported=_conciseACKSupported;
@property(nonatomic) _Bool peerSupportsDeviceConnection; // @synthesize peerSupportsDeviceConnection=_peerSupportsDeviceConnection;
@property(retain, nonatomic) NSString *currentStreamName; // @synthesize currentStreamName=_currentStreamName;
@property(retain, nonatomic) IDSDeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(retain, nonatomic) IDSDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool peerIsNearby; // @synthesize peerIsNearby=_peerIsNearby;
@property(nonatomic) _Bool peerIsConnected; // @synthesize peerIsConnected=_peerIsConnected;
@property(nonatomic) _Bool trafficClassTLVProcessed; // @synthesize trafficClassTLVProcessed=_trafficClassTLVProcessed;
@property(nonatomic) long long trafficClassApplied; // @synthesize trafficClassApplied=_trafficClassApplied;
@property(nonatomic) _Bool trafficClassInitialized; // @synthesize trafficClassInitialized=_trafficClassInitialized;
@property(nonatomic) long long idsPriorityToUse; // @synthesize idsPriorityToUse=_idsPriorityToUse;
@property(nonatomic) unsigned int trafficClassToUse; // @synthesize trafficClassToUse=_trafficClassToUse;
@property(nonatomic) _Bool directMessagingSupported; // @synthesize directMessagingSupported=_directMessagingSupported;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSMutableDictionary *messageIDToMessageDictionary; // @synthesize messageIDToMessageDictionary=_messageIDToMessageDictionary;
@property(retain, nonatomic) NSMutableDictionary *queueOneToMessageIDDictionary; // @synthesize queueOneToMessageIDDictionary=_queueOneToMessageIDDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reporterTimer; // @synthesize reporterTimer=_reporterTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pendingAckTimer; // @synthesize pendingAckTimer=_pendingAckTimer;
@property(nonatomic) _Bool directMessagingAllowed; // @synthesize directMessagingAllowed=_directMessagingAllowed;
@property(nonatomic) _Bool pendingAckTimerSuspended; // @synthesize pendingAckTimerSuspended=_pendingAckTimerSuspended;
@property(nonatomic) _Bool connectionIsIncoming; // @synthesize connectionIsIncoming=_connectionIsIncoming;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(nonatomic) _Bool upgradedTrafficClass; // @synthesize upgradedTrafficClass=_upgradedTrafficClass;
@property(nonatomic) __weak id <IDSDirectMessageConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *connectionMessageSendQueue; // @synthesize connectionMessageSendQueue=_connectionMessageSendQueue;
@property(nonatomic) _Bool connectionSetupInProgress; // @synthesize connectionSetupInProgress=_connectionSetupInProgress;
@property(nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) char *shortServiceNameCString; // @synthesize shortServiceNameCString=_shortServiceNameCString;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)logConnectionStatisticsInPowerDictionary;	// IMP=0x000000000001089d
- (void)startPowerLogReportTimer;	// IMP=0x0000000000010770
- (void)clearPowerAssertion;	// IMP=0x0000000000010715
- (void)getPowerAssertion;	// IMP=0x000000000001058e
- (void)dequeueMessages;	// IMP=0x0000000000010114
- (void)sendMessageWithParameters:(id)arg1 options:(id)arg2;	// IMP=0x000000000000f350
- (void)failedToSendMessage:(id)arg1 responseCode:(long long)arg2;	// IMP=0x000000000000f0fd
- (void)suspendPendingAckTimer;	// IMP=0x000000000000f0d5
- (void)resumePendingAckTimer;	// IMP=0x000000000000f0ad
- (void)cancelPendingAckTimer;	// IMP=0x000000000000f06c
- (id)createDispatchDataForMessageSend:(id)arg1 isAck:(_Bool)arg2 ackMessageId:(unsigned int)arg3;	// IMP=0x000000000000e5f7
- (unsigned char)getMessageTypeForFirstMessage;	// IMP=0x000000000000e44e
- (void)sendAppAckWithGUID:(id)arg1;	// IMP=0x000000000000db48
- (void)sendAckForMessageID:(unsigned int)arg1 guidToAck:(id)arg2;	// IMP=0x000000000000d86d
- (void)processIncomingMessage:(id)arg1 messageType:(unsigned char)arg2 messageIdentifier:(unsigned int)arg3;	// IMP=0x000000000000c823
- (void)receiveMessages;	// IMP=0x000000000000c317
- (void)setupConnectionIfApplicable;	// IMP=0x000000000000c2c4
- (void)receivedDirectMessagingSocketWithContext:(id)arg1;	// IMP=0x000000000000befd
- (void)setupIDSDeviceConnection;	// IMP=0x000000000000ba70
- (void)updateTrafficClass:(unsigned short)arg1;	// IMP=0x000000000000ba58
- (void)updateConnection:(id)arg1;	// IMP=0x000000000000b787
- (void)resetConnection;	// IMP=0x000000000000b683
- (void)updateMetadata:(id)arg1;	// IMP=0x000000000000b1a0
- (void)updateConnectedDevices:(id)arg1;	// IMP=0x000000000000ad4f
- (_Bool)isMessageEligible:(id)arg1 options:(id)arg2 destinationDevice:(id)arg3;	// IMP=0x000000000000a99b
- (_Bool)canUseDirectMessaging;	// IMP=0x000000000000a8a2
- (void)setDestinationDevice:(id)arg1;	// IMP=0x000000000000a734
- (void)invalidate;	// IMP=0x000000000000a638
- (void)cancel;	// IMP=0x000000000000a575
- (id)description;	// IMP=0x000000000000a4e2
- (void)dealloc;	// IMP=0x000000000000a3e0
- (void)parseDirectMessagingState;	// IMP=0x000000000000a258
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000009f58

@end
