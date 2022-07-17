//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDarkModePolicyException-Protocol.h>

@class NSString;

@interface SXFullscreenCaptionDarkModePolicyException : NSObject <SXDarkModePolicyException>
{
}

- (long long)shouldApplyAutoDarkModeForComponentClassification:(id)arg1;	// IMP=0x00000000001500e5
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x000000000015008f
- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x0000000000150039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
