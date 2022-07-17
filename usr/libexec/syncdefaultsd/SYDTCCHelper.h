//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface SYDTCCHelper : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSSet *_cachedDisabledStoreIdentifiers;	// 24 = 0x18
}

+ (id)sharedHelper;	// IMP=0x00400000000433d0
- (void).cxx_destruct;	// IMP=0x00200000000443aa
@property(retain, nonatomic) NSSet *cachedDisabledStoreIdentifiers; // @synthesize cachedDisabledStoreIdentifiers=_cachedDisabledStoreIdentifiers;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopListeningToTCCAccessChangedNotifications;	// IMP=0x00100000000442ee
- (void)startListeningToTCCAccessChangedNotifications;	// IMP=0x001000000004413c
- (void)enableUbiquityIfNecessaryForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000043d41
- (id)findDisabledStoreIdentifiers;	// IMP=0x0010000000043795
- (_Bool)isUbiquityDisabledForStoreIdentifier:(id)arg1;	// IMP=0x00100000000434fc
- (void)dealloc;	// IMP=0x00100000000434be
- (id)init;	// IMP=0x0010000000043425

@end
