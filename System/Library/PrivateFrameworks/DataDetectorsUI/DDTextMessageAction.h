//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDetectorsUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDTextMessageAction <MFMessageComposeViewControllerDelegate>
{
}

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000000000403cb
- (id)viewController;	// IMP=0x00000000000402b0
- (_Bool)canBePerformedByOpeningURL;	// IMP=0x00000000000402a8
- (void)performFromView:(id)arg1;	// IMP=0x0000000000040233
- (id)notificationURL;	// IMP=0x000000000004008c
- (id)notificationIconBundleIdentifier;	// IMP=0x000000000004007f
- (id)notificationTitle;	// IMP=0x000000000003ff0f
- (int)interactionType;	// IMP=0x000000000003feda
- (_Bool)prefersOpenToCreate;	// IMP=0x000000000003feb3
- (id)iconName;	// IMP=0x000000000003fea6
- (id)subtitle;	// IMP=0x000000000003fe56
- (id)localizedName;	// IMP=0x000000000003fdb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

