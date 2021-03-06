//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalLogNode, NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalLogMaster : NSObject
{
    NSArray *_topLevelNodes;	// 8 = 0x8
    CalLogNode *_oslogNode;	// 16 = 0x10
    CalLogNode *_rootConfigurationNode;	// 24 = 0x18
    CalLogNode *_standardOutNode;	// 32 = 0x20
    CalLogNode *_userNotificationNode;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    int _notificationRegistrationToken;	// 64 = 0x40
    _Bool _hasValidNotificationRegistrationToken;	// 68 = 0x44
    _Bool _autoFlush;	// 69 = 0x45
}

+ (id)sharedLogMaster;	// IMP=0x00000000000022f7
- (void).cxx_destruct;	// IMP=0x0000000000019642
@property(nonatomic) _Bool autoFlush; // @synthesize autoFlush=_autoFlush;
@property(nonatomic) _Bool hasValidNotificationRegistrationToken; // @synthesize hasValidNotificationRegistrationToken=_hasValidNotificationRegistrationToken;
@property(nonatomic) int notificationRegistrationToken; // @synthesize notificationRegistrationToken=_notificationRegistrationToken;
@property(retain, nonatomic) CalLogNode *userNotificationNode; // @synthesize userNotificationNode=_userNotificationNode;
@property(retain, nonatomic) CalLogNode *rootConfigurationNode; // @synthesize rootConfigurationNode=_rootConfigurationNode;
@property(retain, nonatomic) CalLogNode *standardOutNode; // @synthesize standardOutNode=_standardOutNode;
@property(retain, nonatomic) CalLogNode *oslogNode; // @synthesize oslogNode=_oslogNode;
@property(retain, nonatomic) NSArray *topLevelNodes; // @synthesize topLevelNodes=_topLevelNodes;
- (void)processEnvelope:(id)arg1;	// IMP=0x0000000000003db3
- (_Bool)flush;	// IMP=0x0000000000002548
- (id)findPermittedList;	// IMP=0x0000000000003bcf
- (int)findMinimumLevel;	// IMP=0x0000000000003a72
- (void)registerForConfigUpdateNotifications;	// IMP=0x0000000000003cc7
- (void)reloadTopLevelNodes;	// IMP=0x0000000000003910
- (_Bool)shouldProcessNamespace:(id)arg1;	// IMP=0x0000000000019492
- (void)configureRootConfigurationNode;	// IMP=0x0000000000002c1a
- (void)configureStandardOutNode;	// IMP=0x00000000000028bc
- (void)configureOSLogNode;	// IMP=0x000000000001931b
- (void)loadPreferredConfiguration;	// IMP=0x0000000000002461
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019310
- (void)dealloc;	// IMP=0x00000000000192bd
- (id)init;	// IMP=0x00000000000023b0

@end

