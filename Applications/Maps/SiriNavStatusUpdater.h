//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, NSString;

__attribute__((visibility("hidden")))
@interface SiriNavStatusUpdater : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007b579a
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void)_updateSiriNavStatusForNewNavigationServiceState:(unsigned long long)arg1;	// IMP=0x00100000007b56a7
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000007b5692
- (id)initWithNavigationService:(id)arg1;	// IMP=0x00100000007b555d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

