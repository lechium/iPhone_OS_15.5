//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/_LSStartupJournalledNotification-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSStartupJournalledDatabaseRebuiltNotification : NSObject <_LSStartupJournalledNotification>
{
}

+ (id)sharedNotification;	// IMP=0x0000000000140b12
- (void)dispatchToObserver:(id)arg1 forInstallProgressService:(id)arg2;	// IMP=0x0000000000140b67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
