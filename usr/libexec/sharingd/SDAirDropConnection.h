//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    MISSING_TYPE *_stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x00200000001b8dfa
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x00100000001b3383
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x00100000001b30b3
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x00100000001b2cbd
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x00100000001b2b60
- (void).cxx_destruct;	// IMP=0x00200000001b955b
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x00100000001b91fe
- (_Bool)accept;	// IMP=0x00100000001b90e2
- (void)start;	// IMP=0x00100000001b8f30
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x00100000001b8f2a
- (void)schedule;	// IMP=0x00100000001b8efd
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00100000001b8c6a
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x00100000001b8c0b
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x00100000001b8b39
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00100000001b8b33
- (id)whereFromInfo;	// IMP=0x00100000001b8a94
- (void)handleClosedConnection;	// IMP=0x00100000001b88b6
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001b87fc
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x00100000001b846e
- (void)finishOperation;	// IMP=0x00100000001b808b
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x00100000001b7f4f
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001b7f0a
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b7421
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b7293
- (void)makeDestinationDirectory;	// IMP=0x00100000001b70a2
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001b7054
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x00100000001b6fdf
- (void)silentlyCancelRequest;	// IMP=0x00100000001b6f06
- (_Bool)senderInfoAvailable;	// IMP=0x00100000001b6e83
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x00100000001b6d57
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001b6981
- (id)compressionType;	// IMP=0x00100000001b68b9
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001b6715
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001b658d
- (void)processRequest;	// IMP=0x00100000001b64cb
- (void)cancelAndDecline;	// IMP=0x00100000001b6417
- (void)handleAskRequest;	// IMP=0x00100000001b5f77
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x00100000001b5c73
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x00100000001b5b6a
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00100000001b59c7
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001b58f4
- (void)parseAskRequest;	// IMP=0x00100000001b56d9
- (void)handleDiscoverRequest;	// IMP=0x00100000001b5545
- (void)parseDiscoverRequest;	// IMP=0x00100000001b540b
- (void)convertURLStringsToURLs;	// IMP=0x00100000001b5250
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x00100000001b51ef
- (_Bool)senderIsMe;	// IMP=0x00100000001b4fc4
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x00100000001b4e06
- (_Bool)senderIsBlocked;	// IMP=0x00100000001b4b7b
- (void)logSenderIsBlocked;	// IMP=0x00100000001b4b1e
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x00100000001b46a4
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x00100000001b44a9
- (void)releaseIdleSleepAssertion;	// IMP=0x00100000001b43a0
- (void)sendAskResponse:(long long)arg1;	// IMP=0x00100000001b4010
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x00100000001b3acd
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b39f1
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b395a
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b38c3
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b382c
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b3795
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x00100000001b362e
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b3496
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b2b44
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x00100000001b2a57
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x00100000001b20ae
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b209c
- (double)getTransferSize;	// IMP=0x00100000001b2037
- (double)getTransferRate;	// IMP=0x00100000001b1fa5
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x00100000001b1f1b
- (void)handleTerminalCallBack;	// IMP=0x00100000001b1eb4
- (void)removeObservers;	// IMP=0x00100000001b1e61
- (void)addObservers;	// IMP=0x00100000001b1dfa
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00100000001b1d11
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000001b1c41
- (void)didCloseConnection;	// IMP=0x00100000001b1bd8
- (void)dealloc;	// IMP=0x00100000001b1aa9
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000001b18f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
