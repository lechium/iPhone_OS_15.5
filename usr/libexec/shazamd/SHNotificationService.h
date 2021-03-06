//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, SHAttribution, SHMatchedMediaItem, SHNotificationContentProvider;
@protocol SHServiceDelegate;

__attribute__((visibility("hidden")))
@interface SHNotificationService : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
    SHMatchedMediaItem *_currentMediaItem;	// 24 = 0x18
    NSUUID *_currentSignatureID;	// 32 = 0x20
    SHAttribution *_attribution;	// 40 = 0x28
    SHNotificationContentProvider *_contentProvider;	// 48 = 0x30
}

+ (id)userNotificationCenter;	// IMP=0x002000000000850d
+ (void)setUserNotificationCenter:(id)arg1;	// IMP=0x00100000000084f9
+ (void)initializeService;	// IMP=0x0010000000008413
- (void).cxx_destruct;	// IMP=0x0020000000009006
@property(retain, nonatomic) SHNotificationContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) NSUUID *currentSignatureID; // @synthesize currentSignatureID=_currentSignatureID;
@property(retain, nonatomic) SHMatchedMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (double)timeRequiredToPerformWork;	// IMP=0x0010000000008f59
- (oneway void)stop;	// IMP=0x0010000000008f53
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (id)requiredEntitlements;	// IMP=0x0010000000008f3e
- (void)sendMatchNotification:(id)arg1;	// IMP=0x0010000000008be3
- (void)sendAnalyticsEventForMatch:(id)arg1;	// IMP=0x0010000000008ab2
- (void)sendNotificationForNoMatch;	// IMP=0x00100000000088b2
- (_Bool)canSendNotificationForNoMatchSignatureID:(id)arg1;	// IMP=0x0010000000008845
- (void)sendNotificationForMatch:(id)arg1;	// IMP=0x001000000000870d
- (_Bool)canSendNotificationForMatch:(id)arg1;	// IMP=0x001000000000860b
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x00100000000085b6
- (id)initWithAttribution:(id)arg1;	// IMP=0x001000000000851e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

