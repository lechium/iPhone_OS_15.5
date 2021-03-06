//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, HKHealthWrapMessageConfiguration, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID;
@protocol CLIntersiloUniverse;

@interface CLFallServer : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    NSURLSession *_urlSession;	// 16 = 0x10
    NSUUID *_studyUUID;	// 24 = 0x18
    NSUUID *_subjectUUID;	// 32 = 0x20
    NSString *_subjectAuth;	// 40 = 0x28
    CLTimer *_registrationTimer;	// 48 = 0x30
    NSURL *_registerURL;	// 56 = 0x38
    NSURL *_ingestURL;	// 64 = 0x40
    HKHealthWrapMessageConfiguration *_hcConfig;	// 72 = 0x48
    int _registrationTimerFireInterval;	// 80 = 0x50
    NSString *_logDirectory;	// 88 = 0x58
    NSString *_host;	// 96 = 0x60
    NSString *_registrationEndpoint;	// 104 = 0x68
    NSString *_submissionEndpoint;	// 112 = 0x70
    NSString *_studyID;	// 120 = 0x78
    NSString *_authorization;	// 128 = 0x80
    NSString *_certificate;	// 136 = 0x88
    NSMutableDictionary *_responses;	// 144 = 0x90
    _Bool _deviceUnlockedSinceBoot;	// 152 = 0x98
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionManagerClient;	// 160 = 0xa0
    _Bool _dataCollectionEnabled;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x00200000009ddf05
- (void).cxx_destruct;	// IMP=0x00100000009ddede
@property(readonly, nonatomic) _Bool dataCollectionEnabled; // @synthesize dataCollectionEnabled=_dataCollectionEnabled;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000009ddeb9
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00100000009ddcee
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000009dd7c4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000009dd544
- (void)onDataProtectionManagerNotification:(int)arg1 data:(NotificationData_6933e140)arg2;	// IMP=0x00100000009dd224
- (id)_createKeyValuePairsDict:(id)arg1 metaData:(id)arg2;	// IMP=0x00100000009dcdbe
- (id)_encryptData:(id)arg1 metaData:(id)arg2 start:(id)arg3 end:(id)arg4;	// IMP=0x00100000009dc691
- (void)cleanUp:(double)arg1;	// IMP=0x00100000009dc1a3
- (_Bool)sendData:(id)arg1 metaData:(id)arg2 start:(id)arg3 end:(id)arg4;	// IMP=0x00100000009dbdc0
- (void)_enableDataCollection;	// IMP=0x00100000009db9bb
- (void)_saveSubjectAuth:(id)arg1;	// IMP=0x00100000009db914
- (void)_saveSubjectUUID:(id)arg1;	// IMP=0x00100000009db8cb
- (id)_loadSubjectAuth;	// IMP=0x00100000009db82a
- (id)_loadSubjectUUID;	// IMP=0x00100000009db7c3
- (void)_registerDevice;	// IMP=0x00100000009daf8e
- (id)_initializeValueForKey:(id)arg1 withDefault:(id)arg2;	// IMP=0x00100000009dac92
- (_Bool)_shouldLogValueForKey:(id)arg1;	// IMP=0x00100000009dabf4
- (void)dealloc;	// IMP=0x00100000009daa34
- (id)initInUniverse:(id)arg1;	// IMP=0x00100000009da3e4
- (void)clearUUID;	// IMP=0x00100000009da3d2
- (id)getUUID;	// IMP=0x00100000009da39d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

