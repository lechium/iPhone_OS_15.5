//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXActionActivityManager : NSObject <SXActionActivityManager>
{
    NSMutableDictionary *_activityProviders;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000da04f
@property(readonly, nonatomic) NSMutableDictionary *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)activityProviderForAction:(id)arg1;	// IMP=0x00000000000d9fb0
- (id)previewActivityForAction:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00000000000d9ebb
- (id)previewActivityForAction:(id)arg1;	// IMP=0x00000000000d9e87
- (id)activityGroupForAction:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00000000000d9da6
- (id)activityGroupForAction:(id)arg1;	// IMP=0x00000000000d9d72
- (void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2;	// IMP=0x00000000000d9cd7
- (id)init;	// IMP=0x00000000000d9c71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

