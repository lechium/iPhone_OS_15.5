//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUANFDebugSettingsProvider-Protocol.h>

@class NSString;

@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider>
{
    _Bool _viewportDebuggingEnabled;	// 8 = 0x8
    _Bool _testingConditionEnabled;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(readonly, nonatomic) _Bool viewportDebuggingEnabled; // @synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000014d7f
- (void)addObserver:(id)arg1;	// IMP=0x0000000000014d79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

