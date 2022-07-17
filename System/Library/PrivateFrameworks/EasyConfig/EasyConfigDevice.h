//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EasyConfig/NSCopying-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EasyConfigDevice : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_userQueue;	// 16 = 0x10
    NSDictionary *_scanRecord;	// 24 = 0x18
    _Bool _started;	// 32 = 0x20
    int _firstErr;	// 36 = 0x24
    struct BonjourBrowser *_airplayBrowser;	// 40 = 0x28
    NSDictionary *_airplayBonjourInfo;	// 48 = 0x30
    struct BonjourBrowser *_raopBrowser;	// 56 = 0x38
    NSDictionary *_raopBonjourInfo;	// 64 = 0x40
    struct BonjourBrowser *_mfiConfigBrowser;	// 72 = 0x48
    NSDictionary *_mfiConfigBonjourInfo;	// 80 = 0x50
    struct BonjourBrowser *_hapBrowser;	// 88 = 0x58
    NSDictionary *_hapBonjourInfo;	// 96 = 0x60
    unsigned int _configSeed;	// 104 = 0x68
    struct HTTPClientPrivate *_httpClient;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 120 = 0x78
    int _state;	// 128 = 0x80
    double _securityStartTime;	// 136 = 0x88
    double _securityFinishTime;	// 144 = 0x90
    struct MFiSAP *_mfiSAP;	// 152 = 0x98
    struct PairingSessionPrivate *_pairingSession;	// 160 = 0xa0
    CDUnknownBlockType _promptForSetupCodeBlock;	// 168 = 0xa8
    unsigned long long _deviceIdentifier;	// 176 = 0xb0
    unsigned long long _features;	// 184 = 0xb8
    NSString *_model;	// 192 = 0xc0
    NSString *_name;	// 200 = 0xc8
    NSDictionary *_configuration;	// 208 = 0xd0
    NSDictionary *_configResponse;	// 216 = 0xd8
    unsigned int _pairSetupFlags;	// 224 = 0xe0
    unsigned int _pairVerifyFlags;	// 228 = 0xe4
    _Bool _pausesAfterApply;	// 232 = 0xe8
    _Bool _skipPairSetup;	// 233 = 0xe9
    _Bool _supportsHAP;	// 234 = 0xea
    _Bool _supportsHAP2;	// 235 = 0xeb
    _Bool _supportsMFi;	// 236 = 0xec
    _Bool _supportsPairSetup;	// 237 = 0xed
    _Bool _supportsTLV;	// 238 = 0xee
    _Bool _preConfigMetricsSet;	// 239 = 0xef
    CDStruct_56123b44 _preConfigMetrics;	// 240 = 0xf0
    _Bool _postConfigMetricsSet;	// 288 = 0x120
    CDStruct_6a23f5a0 _postConfigMetrics;	// 296 = 0x128
    double _configStartTime;	// 328 = 0x148
    double _findPreConfigStartTime;	// 336 = 0x150
    double _findPreConfigFoundTime;	// 344 = 0x158
    double _findPostConfigStartTime;	// 352 = 0x160
    double _findPostConfigFoundTime;	// 360 = 0x168
    double _applyConfigStartTime;	// 368 = 0x170
    double _applyConfigFinishTime;	// 376 = 0x178
    double _postConfigCheckStartTime;	// 384 = 0x180
    double _postConfigCheckFinishTime;	// 392 = 0x188
    NSDictionary *_deviceInfo;	// 400 = 0x190
    double _promptForSetupCodeTime;	// 408 = 0x198
    unsigned int _enterSetupCodeMs;	// 416 = 0x1a0
    _Bool _hasPairingDelegate;	// 420 = 0x1a4
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;	// 424 = 0x1a8
    CDUnknownBlockType _progressHandler;	// 496 = 0x1f0
}

+ (id)deviceWithScanRecord:(id)arg1;	// IMP=0x000000000000b73f
+ (id)deviceWithInfo:(id)arg1;	// IMP=0x000000000000b6fd
+ (_Bool)supportedScanRecord:(id)arg1;	// IMP=0x000000000000b5f9
- (void).cxx_destruct;	// IMP=0x000000000000ad51
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) _Bool skipPairSetup; // @synthesize skipPairSetup=_skipPairSetup;
@property(nonatomic) _Bool pausesAfterApply; // @synthesize pausesAfterApply=_pausesAfterApply;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long features; // @synthesize features=_features;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
@property(nonatomic) unsigned long long deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (int)_timeoutTimerStart:(int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ab47
- (int)_startBonjourWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a84f
- (int)_setupClient:(id)arg1;	// IMP=0x000000000000a732
- (void)_postProgress:(int)arg1 withResponse:(id)arg2;	// IMP=0x000000000000a69b
- (void)_postProgress:(int)arg1 info:(id)arg2;	// IMP=0x000000000000a604
- (void)_postNote:(id)arg1 info:(id)arg2;	// IMP=0x000000000000a54c
- (void)_logEnded;	// IMP=0x0000000000009ae4
- (void)_handleError:(int)arg1;	// IMP=0x000000000000994e
- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate *)arg1;	// IMP=0x00000000000097f9
- (void)_postConfigCheckStart:(id)arg1;	// IMP=0x00000000000095cb
- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00000000000092b9
- (int)_findDevicePostConfigStart;	// IMP=0x000000000000916b
- (void)_applyConfigCompletion:(struct HTTPMessagePrivate *)arg1;	// IMP=0x0000000000008efc
- (int)_applyConfigStart;	// IMP=0x0000000000008b64
- (int)_pairVerifyNext:(struct HTTPMessagePrivate *)arg1;	// IMP=0x00000000000087e8
- (int)_pairVerifyStart;	// IMP=0x00000000000085bd
- (int)_pairSetupNext:(struct HTTPMessagePrivate *)arg1;	// IMP=0x000000000000831d
- (int)_pairSetupStart;	// IMP=0x0000000000008111
- (int)_mfiSAPNext:(struct HTTPMessagePrivate *)arg1;	// IMP=0x0000000000007ebb
- (int)_mfiSAPStart;	// IMP=0x0000000000007d29
- (int)_configureStart:(id)arg1;	// IMP=0x00000000000078fc
- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00000000000077a7
- (int)_findDevicePreConfigStart;	// IMP=0x0000000000007659
- (void)_trySetupCode:(id)arg1;	// IMP=0x00000000000075a2
- (void)trySetupCode:(id)arg1;	// IMP=0x0000000000007517
- (void)setPromptForSetupCodeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000074a8
- (void)setPostConfigMetrics:(const CDStruct_6a23f5a0 *)arg1;	// IMP=0x0000000000007486
- (void)setPreConfigMetrics:(const CDStruct_56123b44 *)arg1;	// IMP=0x0000000000007459
- (void)setPairingDelegate:(const void *)arg1;	// IMP=0x000000000000740c
- (void)resumePostConfig;	// IMP=0x00000000000073c1
- (void)_stop:(int)arg1;	// IMP=0x0000000000006f6d
- (void)stop;	// IMP=0x0000000000006f22
- (void)_start;	// IMP=0x0000000000006a77
- (void)start;	// IMP=0x0000000000006a2c
- (_Bool)removed:(id)arg1;	// IMP=0x000000000000693a
- (_Bool)updated:(id)arg1;	// IMP=0x0000000000006790
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006662
- (void)dealloc;	// IMP=0x0000000000006543
- (id)init;	// IMP=0x00000000000064a5

@end
