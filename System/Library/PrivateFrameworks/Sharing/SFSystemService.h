//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    SFService *_sfService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011c019
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011bd93
- (void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011ba09
- (void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011b46d
- (void)_handleRebootSystemForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011b249
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011afe6
- (void)_handleSessionEnded:(id)arg1;	// IMP=0x000000000011afe0
- (void)_handleSessionStarted:(id)arg1;	// IMP=0x000000000011ad02
- (void)_sfServiceStart;	// IMP=0x000000000011aa94
- (void)invalidate;	// IMP=0x000000000011a9b5
- (void)activate;	// IMP=0x000000000011a8fa
- (id)description;	// IMP=0x000000000011a8c1
- (id)init;	// IMP=0x000000000011a86a

@end

