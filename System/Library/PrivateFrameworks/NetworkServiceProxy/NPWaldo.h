//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPKeyBag, NPLocation, NPTuscanyEdge, NPWaldoLocationManager, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSPNetworkAgent, NSString, NSURL, NSUUID, NWNetworkAgentRegistration;
@protocol NPWaldoDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NPWaldo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_currentNetworkCharacteristics;	// 8 = 0x8
    NSArray *_edges;	// 16 = 0x10
    NSArray *_allOnRamps;	// 24 = 0x18
    _Bool _shouldSave;	// 32 = 0x20
    _Bool _reprocessPending;	// 33 = 0x21
    _Bool _daypassRefreshInProgress;	// 34 = 0x22
    _Bool _reprocessCancelled;	// 35 = 0x23
    unsigned int _generation;	// 36 = 0x24
    NSString *_identifier;	// 40 = 0x28
    long long _source;	// 48 = 0x30
    NSNumber *_timestamp;	// 56 = 0x38
    NSNumber *_version;	// 64 = 0x40
    NSString *_dayPassHostname;	// 72 = 0x48
    NSNumber *_dayPassHostnamePrependLabel;	// 80 = 0x50
    NSNumber *_dayPassPort;	// 88 = 0x58
    NSNumber *_dayPassRequestTimeout;	// 96 = 0x60
    NSString *_dayPassLeafOID;	// 104 = 0x68
    NSNumber *_dayPassRevocationFailClosed;	// 112 = 0x70
    NSNumber *_dayPassExtendedValidation;	// 120 = 0x78
    NSNumber *_dayPassEnableSessionTicket;	// 128 = 0x80
    NSArray *_dayPassSoftExpiry;	// 136 = 0x88
    NSNumber *_enableLatencyDerivation;	// 144 = 0x90
    NSNumber *_latencyFactorA;	// 152 = 0x98
    NSNumber *_latencyFactorB;	// 160 = 0xa0
    NSNumber *_latencyFactorX;	// 168 = 0xa8
    NSNumber *_edgeFairnessFactor;	// 176 = 0xb0
    NSNumber *_locationCheckInterval;	// 184 = 0xb8
    NSNumber *_locationTTL;	// 192 = 0xc0
    NSNumber *_locationToleranceDistance;	// 200 = 0xc8
    NSNumber *_viewSize;	// 208 = 0xd0
    NSNumber *_probePause;	// 216 = 0xd8
    NSNumber *_probeTFO;	// 224 = 0xe0
    NSNumber *_probeNoTFOCookie;	// 232 = 0xe8
    NSNumber *_probeTimeout;	// 240 = 0xf0
    NSNumber *_retryPause;	// 248 = 0xf8
    NSNumber *_signatureLimit;	// 256 = 0x100
    NSNumber *_observedRTTSampleSize;	// 264 = 0x108
    NSNumber *_reprocessSamplingInterval;	// 272 = 0x110
    NSNumber *_reprocessSampleSize;	// 280 = 0x118
    NSNumber *_connectionIdleTimeoutMaximum;	// 288 = 0x120
    NSString *_tag;	// 296 = 0x128
    NSURL *_telemetryURL;	// 304 = 0x130
    NSString *_telemetryService;	// 312 = 0x138
    NSNumber *_useGeohashFromServer;	// 320 = 0x140
    NSNumber *_edgeSelectionEnabled;	// 328 = 0x148
    NSNumber *_edgeSelectionAlpha;	// 336 = 0x150
    NSNumber *_edgeSelectionWindowSize;	// 344 = 0x158
    NSNumber *_enableIPv6;	// 352 = 0x160
    NSNumber *_requireTFO;	// 360 = 0x168
    NSNumber *_TFOLeeway;	// 368 = 0x170
    NSNumber *_edgesGeneration;	// 376 = 0x178
    NSNumber *_usedEdgesGeneration;	// 384 = 0x180
    long long _currentEdgeIndex;	// 392 = 0x188
    NSString *_hostname;	// 400 = 0x190
    id <NPWaldoDelegate> _delegate;	// 408 = 0x198
    NPLocation *_cachedLocation;	// 416 = 0x1a0
    NSDate *_locationCheckTimestamp;	// 424 = 0x1a8
    NSDate *_locationExpiration;	// 432 = 0x1b0
    NPWaldo *_defaults;	// 440 = 0x1b8
    NSPNetworkAgent *_agent;	// 448 = 0x1c0
    NPKeyBag *_keybag;	// 456 = 0x1c8
    NPWaldoLocationManager *_locationManager;	// 464 = 0x1d0
    NSMutableDictionary *_networkInformation;	// 472 = 0x1d8
    NSArray *_currentEdges;	// 480 = 0x1e0
    NPTuscanyEdge *_nextEdge;	// 488 = 0x1e8
    NSObject<OS_dispatch_source> *_reprocessSamplingTimer;	// 496 = 0x1f0
    NWNetworkAgentRegistration *_agentRegistration;	// 504 = 0x1f8
    NSUUID *_configurationIdentifier;	// 512 = 0x200
    NSObject<OS_dispatch_queue> *_reprocessQueue;	// 520 = 0x208
    NSData *_updateHash;	// 528 = 0x210
}

+ (id)createEndpointFromHostList:(id)arg1 defaultPortString:(id)arg2 allowIPv6:(_Bool)arg3;	// IMP=0x00000000000742ac
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071d3f
- (void).cxx_destruct;	// IMP=0x000000000008d9cb
@property(retain) NSData *updateHash; // @synthesize updateHash=_updateHash;
@property(readonly) NSObject<OS_dispatch_queue> *reprocessQueue; // @synthesize reprocessQueue=_reprocessQueue;
@property(retain) NSUUID *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property(retain) NWNetworkAgentRegistration *agentRegistration; // @synthesize agentRegistration=_agentRegistration;
@property(retain) NSObject<OS_dispatch_source> *reprocessSamplingTimer; // @synthesize reprocessSamplingTimer=_reprocessSamplingTimer;
@property unsigned int generation; // @synthesize generation=_generation;
@property _Bool reprocessCancelled; // @synthesize reprocessCancelled=_reprocessCancelled;
@property(readonly) NPTuscanyEdge *nextEdge; // @synthesize nextEdge=_nextEdge;
@property(readonly) NSArray *currentEdges; // @synthesize currentEdges=_currentEdges;
@property _Bool daypassRefreshInProgress; // @synthesize daypassRefreshInProgress=_daypassRefreshInProgress;
@property(retain) NSMutableDictionary *networkInformation; // @synthesize networkInformation=_networkInformation;
@property _Bool reprocessPending; // @synthesize reprocessPending=_reprocessPending;
@property(retain, nonatomic) NPWaldoLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NPKeyBag *keybag; // @synthesize keybag=_keybag;
@property(retain, nonatomic) NSPNetworkAgent *agent; // @synthesize agent=_agent;
@property(retain, nonatomic) NPWaldo *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSDate *locationExpiration; // @synthesize locationExpiration=_locationExpiration;
@property(retain, nonatomic) NSDate *locationCheckTimestamp; // @synthesize locationCheckTimestamp=_locationCheckTimestamp;
@property(retain, nonatomic) NPLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
@property _Bool shouldSave; // @synthesize shouldSave=_shouldSave;
@property __weak id <NPWaldoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property long long currentEdgeIndex; // @synthesize currentEdgeIndex=_currentEdgeIndex;
@property(copy) NSNumber *usedEdgesGeneration; // @synthesize usedEdgesGeneration=_usedEdgesGeneration;
@property(copy) NSNumber *edgesGeneration; // @synthesize edgesGeneration=_edgesGeneration;
@property(copy) NSNumber *TFOLeeway; // @synthesize TFOLeeway=_TFOLeeway;
@property(copy) NSNumber *requireTFO; // @synthesize requireTFO=_requireTFO;
@property(copy) NSNumber *enableIPv6; // @synthesize enableIPv6=_enableIPv6;
@property(copy) NSNumber *edgeSelectionWindowSize; // @synthesize edgeSelectionWindowSize=_edgeSelectionWindowSize;
@property(copy) NSNumber *edgeSelectionAlpha; // @synthesize edgeSelectionAlpha=_edgeSelectionAlpha;
@property(copy) NSNumber *edgeSelectionEnabled; // @synthesize edgeSelectionEnabled=_edgeSelectionEnabled;
@property(copy) NSNumber *useGeohashFromServer; // @synthesize useGeohashFromServer=_useGeohashFromServer;
@property(copy) NSString *telemetryService; // @synthesize telemetryService=_telemetryService;
@property(copy) NSURL *telemetryURL; // @synthesize telemetryURL=_telemetryURL;
@property(copy) NSString *tag; // @synthesize tag=_tag;
@property(copy) NSNumber *connectionIdleTimeoutMaximum; // @synthesize connectionIdleTimeoutMaximum=_connectionIdleTimeoutMaximum;
@property(copy) NSNumber *reprocessSampleSize; // @synthesize reprocessSampleSize=_reprocessSampleSize;
@property(copy) NSNumber *reprocessSamplingInterval; // @synthesize reprocessSamplingInterval=_reprocessSamplingInterval;
@property(copy) NSNumber *observedRTTSampleSize; // @synthesize observedRTTSampleSize=_observedRTTSampleSize;
@property(copy) NSNumber *signatureLimit; // @synthesize signatureLimit=_signatureLimit;
@property(copy) NSNumber *retryPause; // @synthesize retryPause=_retryPause;
@property(copy) NSNumber *probeTimeout; // @synthesize probeTimeout=_probeTimeout;
@property(copy) NSNumber *probeNoTFOCookie; // @synthesize probeNoTFOCookie=_probeNoTFOCookie;
@property(copy) NSNumber *probeTFO; // @synthesize probeTFO=_probeTFO;
@property(copy) NSNumber *probePause; // @synthesize probePause=_probePause;
@property(copy) NSNumber *viewSize; // @synthesize viewSize=_viewSize;
@property(copy) NSNumber *locationToleranceDistance; // @synthesize locationToleranceDistance=_locationToleranceDistance;
@property(copy) NSNumber *locationTTL; // @synthesize locationTTL=_locationTTL;
@property(copy) NSNumber *locationCheckInterval; // @synthesize locationCheckInterval=_locationCheckInterval;
@property(copy) NSNumber *edgeFairnessFactor; // @synthesize edgeFairnessFactor=_edgeFairnessFactor;
@property(copy) NSNumber *latencyFactorX; // @synthesize latencyFactorX=_latencyFactorX;
@property(copy) NSNumber *latencyFactorB; // @synthesize latencyFactorB=_latencyFactorB;
@property(copy) NSNumber *latencyFactorA; // @synthesize latencyFactorA=_latencyFactorA;
@property(copy) NSNumber *enableLatencyDerivation; // @synthesize enableLatencyDerivation=_enableLatencyDerivation;
@property(copy) NSArray *dayPassSoftExpiry; // @synthesize dayPassSoftExpiry=_dayPassSoftExpiry;
@property(copy) NSNumber *dayPassEnableSessionTicket; // @synthesize dayPassEnableSessionTicket=_dayPassEnableSessionTicket;
@property(copy) NSNumber *dayPassExtendedValidation; // @synthesize dayPassExtendedValidation=_dayPassExtendedValidation;
@property(copy) NSNumber *dayPassRevocationFailClosed; // @synthesize dayPassRevocationFailClosed=_dayPassRevocationFailClosed;
@property(copy) NSString *dayPassLeafOID; // @synthesize dayPassLeafOID=_dayPassLeafOID;
@property(copy) NSNumber *dayPassRequestTimeout; // @synthesize dayPassRequestTimeout=_dayPassRequestTimeout;
@property(copy) NSNumber *dayPassPort; // @synthesize dayPassPort=_dayPassPort;
@property(copy) NSNumber *dayPassHostnamePrependLabel; // @synthesize dayPassHostnamePrependLabel=_dayPassHostnamePrependLabel;
@property(copy) NSString *dayPassHostname; // @synthesize dayPassHostname=_dayPassHostname;
@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) long long source; // @synthesize source=_source;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)incrementSessionCounters;	// IMP=0x000000000008cfda
- (void)cleanupStaleKeys;	// IMP=0x000000000008c7bf
@property(readonly) CDUnknownBlockType latencyComparator;
- (id)onRampForIndex:(id)arg1;	// IMP=0x000000000008c43b
@property(readonly) _Bool isIPv6Enabled;
- (id)copyStateIncludeDistance:(_Bool)arg1;	// IMP=0x000000000008bbff
- (id)edgeContainingOnRamp:(id)arg1;	// IMP=0x000000000008b684
@property(readonly) NSDate *currentNetworkLastUsed;
@property(readonly) NSDate *expirationDate;
- (id)copyLatencyInfoDictionary:(_Bool)arg1 copyAll:(_Bool)arg2;	// IMP=0x000000000008ab52
- (void)logLatencyInfoToStdout:(_Bool)arg1 logAll:(_Bool)arg2 logEdgeSelection:(_Bool)arg3;	// IMP=0x000000000008a574
- (void)refreshDayPassesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000891b4
- (void)getDayPassRTT;	// IMP=0x0000000000089066
@property(readonly) _Bool hasEdges;
@property(readonly) unsigned long long edgeCount;
- (id)edgeAtIndex:(long long)arg1;	// IMP=0x0000000000088d7c
- (void)mergeEdgeList:(id)arg1 forNetworkSignature:(id)arg2;	// IMP=0x0000000000088794
- (void)rebuildLatencyMapAllSignatures:(_Bool)arg1;	// IMP=0x0000000000088263
- (void)resortEdgeListForCurrentNetworkSignature;	// IMP=0x0000000000088192
- (id)currentNetworkInfo;	// IMP=0x000000000008803c
@property(readonly) NSArray *currentEdgeList;
@property(readonly) unsigned long long probeSize;
- (_Bool)shouldFetchWaldo;	// IMP=0x0000000000087d98
- (void)loadObservedRTTSamples:(id)arg1;	// IMP=0x0000000000087b51
- (_Bool)validateEdgeList:(id)arg1;	// IMP=0x00000000000879bb
- (id)copyEdgeListRTTAverage:(id)arg1 observed:(_Bool)arg2 shortDescription:(_Bool)arg3;	// IMP=0x00000000000874de
- (id)copyEdgeList:(id)arg1;	// IMP=0x0000000000087129
- (void)logEdgeList:(id)arg1 debug:(_Bool)arg2 toStdout:(_Bool)arg3;	// IMP=0x00000000000867d4
- (void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 doneCount:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000085ccf
- (_Bool)reprocessWithNewRTT:(unsigned long long)arg1 reProbe:(_Bool *)arg2;	// IMP=0x0000000000084387
- (long long)getFallbackReasonForLatencies:(id)arg1;	// IMP=0x000000000008421d
- (void)reprocessLatencies:(id)arg1 sampleCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083c84
- (id)createEdgeLatenciesToProbeWithEdgeIndex:(unsigned long long)arg1 startSampleCount:(unsigned long long *)arg2;	// IMP=0x000000000008309b
- (_Bool)isEndpointProbed:(id)arg1 parameters:(struct networkParameters *)arg2 latencies:(id)arg3 checkSampleSize:(_Bool)arg4 incompleteLatency:(id *)arg5;	// IMP=0x0000000000082b5a
- (void)reprocessEdgeAtIndex:(unsigned long long)arg1 networkSignature:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000082326
- (void)reprocessAdHocWithEdgeIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082111
- (void)reprocessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000081903
- (id)copyEdgeSelectionTelemetry;	// IMP=0x00000000000817bf
- (void)updateEdgeSelection:(unsigned long long)arg1;	// IMP=0x00000000000815c0
- (void)initializeEdgeSelection;	// IMP=0x000000000008135e
- (void)cancelProbes;	// IMP=0x00000000000811f1
- (long long)getCurrentNetworkInterfaceType;	// IMP=0x000000000008118f
- (void)setCurrentNetworkCharacteristics:(id)arg1;	// IMP=0x0000000000081037
- (void)timestampNetworkSignature:(id)arg1;	// IMP=0x0000000000080d1b
- (_Bool)shouldPerformDayPassRefresh;	// IMP=0x0000000000080b2e
@property(readonly) NPTuscanyEdge *currentEdge;
@property(readonly) long long dayPassFetchCount;
- (long long)indexOfBestEdge;	// IMP=0x000000000008086f
- (void)updateMetaDataNeedProbe:(_Bool)arg1 refresh:(_Bool)arg2 push:(_Bool)arg3 minRTT:(unsigned long long)arg4;	// IMP=0x000000000008016d
- (void)handleUsageReport:(id)arg1;	// IMP=0x000000000007f50a
- (_Bool)isLatenciesCompleteForNetwork:(id)arg1;	// IMP=0x000000000007ecc3
- (void)ageOutLatencyMap;	// IMP=0x000000000007e75e
- (void)removeDayPassesFromKernel;	// IMP=0x000000000007e5d7
- (void)pushKeybagToKernelCanReuse:(_Bool)arg1;	// IMP=0x000000000007e015
- (void)pushKeybagToKernel;	// IMP=0x000000000007dffe
- (void)pushKeybagToKernelUpdateGeneration:(_Bool)arg1;	// IMP=0x000000000007dfe0
- (void)establishTrustWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007db21
- (void)removeFromKeychain;	// IMP=0x000000000007da91
- (void)saveToKeychain;	// IMP=0x000000000007d6a4
- (id)initFromKeychainWithIdentifier:(id)arg1;	// IMP=0x000000000007d1e4
- (id)description;	// IMP=0x000000000007cbcd
- (void)teardownNetworkAgent;	// IMP=0x000000000007c83b
- (void)updateNetworkAgentWithKeybag:(id)arg1 networkInfo:(id)arg2;	// IMP=0x000000000007adb4
@property(retain) NSArray *allOnRamps;
@property(copy) NSArray *edges;
- (void)merge:(id)arg1 missingSettingsOnly:(_Bool)arg2;	// IMP=0x0000000000078b25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000782d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000076572
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000756a0
- (void)linkAllSignatures:(_Bool)arg1;	// IMP=0x000000000007550a
- (void)link;	// IMP=0x00000000000754f3
- (void)linkLatenciesAllSignatures:(_Bool)arg1;	// IMP=0x0000000000074ee6
@property _Bool reResolve;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000746de
- (id)initWithIdentifier:(id)arg1 timestamp:(id)arg2 fromDictionary:(id)arg3 source:(long long)arg4;	// IMP=0x0000000000071da5
- (id)init;	// IMP=0x0000000000071d47

@end
