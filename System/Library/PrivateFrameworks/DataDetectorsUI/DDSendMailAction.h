//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDetectorsUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDSendMailAction <MFMailComposeViewControllerDelegate>
{
}

- (_Bool)canBePerformedByOpeningURL;	// IMP=0x000000000003e430
- (void)performFromView:(id)arg1;	// IMP=0x000000000003e410
- (int)interactionType;	// IMP=0x000000000003e408
- (id)notificationURL;	// IMP=0x000000000003e3f0
- (id)notificationIconBundleIdentifier;	// IMP=0x000000000003e3e3
- (id)notificationTitle;	// IMP=0x000000000003e24c
- (id)compactTitle;	// IMP=0x000000000003e117
- (id)iconName;	// IMP=0x000000000003e10a
- (id)localizedName;	// IMP=0x000000000003e0f2
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;	// IMP=0x000000000003e0c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

