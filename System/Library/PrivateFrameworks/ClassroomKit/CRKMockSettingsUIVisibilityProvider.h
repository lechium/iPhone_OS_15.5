//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKSettingsUIVisibilityProvider-Protocol.h>

@class NSString;

@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider>
{
    _Bool _settingsUIVisible;	// 8 = 0x8
}

@property _Bool settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
@property(readonly, copy, nonatomic) NSString *paneStatus;
- (void)connectToDaemon;	// IMP=0x0000000000018053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

