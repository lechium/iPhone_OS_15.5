//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/AUAudioUnitXPCProtocol-Protocol.h>

@class AUAudioUnit, AUParameterTree, NSMutableArray, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_voucher;

@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol>
{
    AUAudioUnit *_audioUnit;	// 8 = 0x8
    struct AudioComponentDescription _componentDescription;	// 16 = 0x10
    NSXPCConnection *_remoteHostXPCConnection;	// 40 = 0x28
    struct optional<AUOOPRenderingServerUser> _renderServerUser;	// 48 = 0x30
    NSObject<OS_voucher> *_initializationVoucher;	// 144 = 0x90
    AUParameterTree *_cachedParameterTree;	// 152 = 0x98
    struct reply_watchdog_factory _replyWatchdogFactory;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_presetFolderWatcher;	// 232 = 0xe8
    NSMutableArray *_userPresets;	// 240 = 0xf0
    NSUUID *_audioUnitUUID;	// 248 = 0xf8
    struct shared_ptr<auoop::WorkgroupMirror> _workgroupMirror;	// 256 = 0x100
    struct KVOAggregator _kvoAggregator;	// 272 = 0x110
    int _deferPropertyChangeNotifications;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_propertyObserverQueue;	// 304 = 0x130
    NSMutableArray *_pendingChangedProperties;	// 312 = 0x138
}

+ (void)_staticInit;	// IMP=0x00000000000541b1
- (id).cxx_construct;	// IMP=0x000000000004fd21
- (void).cxx_destruct;	// IMP=0x000000000004fc25
@property(readonly, nonatomic) NSMutableArray *pendingChangedProperties; // @synthesize pendingChangedProperties=_pendingChangedProperties;
@property(nonatomic) int deferPropertyChangeNotifications; // @synthesize deferPropertyChangeNotifications=_deferPropertyChangeNotifications;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue; // @synthesize propertyObserverQueue=_propertyObserverQueue;
@property(readonly, nonatomic) NSUUID *audioUnitUUID; // @synthesize audioUnitUUID=_audioUnitUUID;
@property(readonly, nonatomic) struct AudioComponentDescription componentDescription; // @synthesize componentDescription=_componentDescription;
- (id)audioUnit;	// IMP=0x000000000004fbc2
- (void)getSpeechVoices:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fad5
- (void)cancelSpeechRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fa1d
- (void)synthesizeSpeechRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f93f
- (void)startUserPresetFolderMonitoring;	// IMP=0x000000000004f808
- (void)presetStateFor:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f63e
- (void)deleteUserPreset:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f54c
- (void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f45a
- (void)loadUserPresets:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f29f
- (void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f1af
- (void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f0bf
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ef2a
- (void)selectViewConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ee7e
- (void)supportedViewConfigurations:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ece1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004ec25
- (id)_fetchAndClearPendingChangedProperties;	// IMP=0x000000000004ebcb
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ea87
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e96b
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e83f
- (void)getParameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e5a2
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;	// IMP=0x000000000004e518
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e392
- (void)getParameterTree:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e21a
- (id)currentParameterTree;	// IMP=0x000000000004e179
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004dfdb
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004dd96
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004dbfb
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004dae5
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d9cf
- (void)setValue:(id)arg1 forProperty:(id)arg2 propagateError:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004d7b6
- (void)valueForProperty:(id)arg1 propagateError:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d5d6
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d4b2
- (void)valueForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d3db
- (void)reset:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d38b
- (void)uninitialize:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d2c3
- (void)destroyRenderPipe:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d22d
- (void)createRenderPipe:(int)arg1 formats:(id)arg2 maxFrames:(unsigned int)arg3 midiOutSizeHint:(unsigned int)arg4 resources:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000004ccab
- (void)updateWorkgroupMirror:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c2f6
- (void)updateHostCallbacks:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c292
- (void)initialize:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004be46
- (void)getBusses:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bd4e
- (void)open:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bb6f
- (void)openImpl:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b3ba
- (void)setBlocks;	// IMP=0x000000000004b280
- (void)dealloc;	// IMP=0x000000000004b107
- (void)close:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b016
- (id)_getSpeechSynthesisProviderAudioUnit;	// IMP=0x000000000004afe5
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2 timeOutHandler:(function_2e574590)arg3;	// IMP=0x000000000004aefa
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000000004ad43
- (id)_internalInitWithInputItems:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000000004a9f9
- (_Bool)_identifyBus:(id)arg1 scope:(unsigned int *)arg2 element:(unsigned int *)arg3;	// IMP=0x000000000004a720
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000004a5d9

@end
