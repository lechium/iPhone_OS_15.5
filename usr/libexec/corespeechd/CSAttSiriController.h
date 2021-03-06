//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriAFTMNode, CSAttSiriAsrNode, CSAttSiriAudioSrcNode, CSAttSiriEndpointerNode, CSAttSiriFlexKwdNode, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriSSRNode, CSAttSiriUresNode, CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStream, CSConnectionListener, CSOSTransaction, CSSiriClientBehaviorMonitor, CSSiriEnabledMonitor, CSSpeechManager, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriController : NSObject
{
    _Bool _pendingActivationProcessing;	// 8 = 0x8
    _Bool _deferredActivation;	// 9 = 0x9
    CSConnectionListener *_attSiriSvcListener;	// 16 = 0x10
    NSMapTable *_nodesCache;	// 24 = 0x18
    CSAttSiriEndpointerNode *_endpointerNode;	// 32 = 0x20
    CSAttSiriOSDNode *_osdNode;	// 40 = 0x28
    CSAttSiriAsrNode *_asrNode;	// 48 = 0x30
    CSAttSiriUresNode *_uresNode;	// 56 = 0x38
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 64 = 0x40
    CSAttSiriSSRNode *_ssrNode;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    CSAudioRecordContext *_audioRecordContext;	// 88 = 0x58
    CSAudioStartStreamOption *_siriClientAudioStartStreamOption;	// 96 = 0x60
    CSOSTransaction *_attSiriTransaction;	// 104 = 0x68
    NSString *_requestMHUUID;	// 112 = 0x70
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 120 = 0x78
    CSAudioStream *_siriClientStream;	// 128 = 0x80
    CSAsset *_mitigationAsset;	// 136 = 0x88
    CSSpeechManager *_speechManager;	// 144 = 0x90
    CSSiriEnabledMonitor *_siriEnabledMonitor;	// 152 = 0x98
    CSAttSiriFlexKwdNode *_flexKwdNode;	// 160 = 0xa0
    CSAttSiriAFTMNode *_aFTMNode;	// 168 = 0xa8
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 176 = 0xb0
    unsigned long long _activationStartSampleId;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000000b00b0
@property(nonatomic) _Bool deferredActivation; // @synthesize deferredActivation=_deferredActivation;
@property(nonatomic) unsigned long long activationStartSampleId; // @synthesize activationStartSampleId=_activationStartSampleId;
@property(nonatomic) _Bool pendingActivationProcessing; // @synthesize pendingActivationProcessing=_pendingActivationProcessing;
@property(retain, nonatomic) CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(retain, nonatomic) CSAttSiriAFTMNode *aFTMNode; // @synthesize aFTMNode=_aFTMNode;
@property(retain, nonatomic) CSAttSiriFlexKwdNode *flexKwdNode; // @synthesize flexKwdNode=_flexKwdNode;
@property(retain, nonatomic) CSSiriEnabledMonitor *siriEnabledMonitor; // @synthesize siriEnabledMonitor=_siriEnabledMonitor;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSAsset *mitigationAsset; // @synthesize mitigationAsset=_mitigationAsset;
@property(retain, nonatomic) CSAudioStream *siriClientStream; // @synthesize siriClientStream=_siriClientStream;
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(retain, nonatomic) CSOSTransaction *attSiriTransaction; // @synthesize attSiriTransaction=_attSiriTransaction;
@property(retain, nonatomic) CSAudioStartStreamOption *siriClientAudioStartStreamOption; // @synthesize siriClientAudioStartStreamOption=_siriClientAudioStartStreamOption;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(retain, nonatomic) CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(retain, nonatomic) CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(retain, nonatomic) CSAttSiriAsrNode *asrNode; // @synthesize asrNode=_asrNode;
@property(retain, nonatomic) CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSMapTable *nodesCache; // @synthesize nodesCache=_nodesCache;
@property(retain, nonatomic) CSConnectionListener *attSiriSvcListener; // @synthesize attSiriSvcListener=_attSiriSvcListener;
- (void)siriRequestProcessingCompleted;	// IMP=0x00100000000afe0e
- (void)stopAttendingWithContext:(id)arg1;	// IMP=0x00100000000afe08
- (void)startAttendingWithContext:(id)arg1;	// IMP=0x00100000000afe02
- (void)handleAudioStopUnexpectly;	// IMP=0x00100000000afd20
- (void)handleAttendingAudioStopUnexpectly;	// IMP=0x00100000000afc8c
- (void)_releaseAttSiriTransactionIfNeeded;	// IMP=0x00100000000afbd7
- (void)_holdAttSiriTransactionIfNeeded;	// IMP=0x00100000000afb89
- (void)_handleStopProcessing;	// IMP=0x00100000000afa8b
- (void)_handleStartProcessingWithRecordContext:(id)arg1;	// IMP=0x00100000000af665
- (void)_setupAudioSrcNodeWithSiriClientStream:(id)arg1;	// IMP=0x00100000000af40c
- (void)_fetchMitigationAssets;	// IMP=0x00100000000af406
- (void)_forceBuildGraph:(_Bool)arg1;	// IMP=0x00100000000af029
- (void)attSiriNode:(id)arg1 triggerReportedFromFlxKwdSpotter:(id)arg2;	// IMP=0x00100000000aef52
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000aef4c
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00100000000aef46
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00100000000aee4e
- (void)siriClientBehaviorMonitor:(id)arg1 preparedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000aecb5
- (void)siriClientBehaviorMonitor:(id)arg1 fetchedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000aeb1c
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000aea3a
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000ae9cd
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000ae6ec
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000ae536
- (void)stop;	// IMP=0x00100000000ae530
- (void)pause;	// IMP=0x00100000000ae52a
- (void)start;	// IMP=0x00100000000ae47a
- (id)getNodeOfType:(unsigned long long)arg1;	// IMP=0x00100000000ae31a
- (id)initWithEndpointerNode:(id)arg1 osdNode:(id)arg2 ssrNode:(id)arg3 asrNode:(id)arg4 uresNode:(id)arg5 flexKwdNode:(id)arg6 needsSSRNode:(_Bool)arg7 aFtmNode:(id)arg8 speechManager:(id)arg9 siriEnabledMonitor:(id)arg10 siriClientBehaviorMonitor:(id)arg11 supportsAcousticProgressiveChecker:(_Bool)arg12 supportsUnderstandingOnDevice:(_Bool)arg13 requireASROnDevice:(_Bool)arg14;	// IMP=0x00100000000add46
- (id)init;	// IMP=0x00100000000adc96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

