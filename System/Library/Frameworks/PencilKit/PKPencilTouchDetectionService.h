//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/NSXPCListenerDelegate-Protocol.h>
#import <PencilKit/PKPencilTouchDetectionGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/_PKTouchDetectionProtocol-Protocol.h>

@class FBSDisplayLayoutMonitor, NSDictionary, NSMutableDictionary, NSString, NSUserDefaults, NSXPCListener, PKPencilTouchDetectionGestureRecognizer;

@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate>
{
    _Bool _isListening;	// 8 = 0x8
    _Bool _wereFrontBoardOverlaysEnabled;	// 9 = 0x9
    NSXPCListener *_listener;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;	// 24 = 0x18
    PKPencilTouchDetectionGestureRecognizer *_detectionGesture;	// 32 = 0x20
    NSUserDefaults *_pencilDefaults;	// 40 = 0x28
    NSMutableDictionary *_timestamps;	// 48 = 0x30
    NSDictionary *_userInfoForNotification;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000000018dd0c
+ (void)beginObservingTouchesForDetection;	// IMP=0x000000000018dccf
- (void).cxx_destruct;	// IMP=0x000000000018ec05
@property(retain, nonatomic) NSDictionary *userInfoForNotification; // @synthesize userInfoForNotification=_userInfoForNotification;
@property(retain, nonatomic) NSMutableDictionary *timestamps; // @synthesize timestamps=_timestamps;
@property(retain, nonatomic) NSUserDefaults *pencilDefaults; // @synthesize pencilDefaults=_pencilDefaults;
@property(retain, nonatomic) PKPencilTouchDetectionGestureRecognizer *detectionGesture; // @synthesize detectionGesture=_detectionGesture;
@property(nonatomic) _Bool wereFrontBoardOverlaysEnabled; // @synthesize wereFrontBoardOverlaysEnabled=_wereFrontBoardOverlaysEnabled;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // @synthesize displayLayoutMonitor=_displayLayoutMonitor;
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (id)stringForTouchDetectionPencilType:(long long)arg1;	// IMP=0x000000000018eb1a
- (void)updateTimestampForType:(long long)arg1;	// IMP=0x000000000018e902
- (void)_nop:(id)arg1;	// IMP=0x000000000018e8fc
- (void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000018e81d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000018e769
- (void)postUpdateNotificationIfNecessary;	// IMP=0x000000000018e6bb
- (_Bool)timestampIndicatesRecentUsage:(id)arg1;	// IMP=0x000000000018e5dd
- (void)persistTimestamps;	// IMP=0x000000000018e51a
- (void)loadTimestampsIfNecessary;	// IMP=0x000000000018e409
- (void)loadDefaultsIfNecessary;	// IMP=0x000000000018e37b
- (void)resumeConnectionIfIdle;	// IMP=0x000000000018e2ff
- (void)reset:(id)arg1;	// IMP=0x000000000018e296
- (void)dealloc;	// IMP=0x000000000018e215
- (id)init;	// IMP=0x000000000018dd6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

