//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <MessageUI/_UICursorInteractionDelegate-Protocol.h>

@class NSString;

@interface MFComposeSendAccessoryButton : UIButton <_UICursorInteractionDelegate>
{
}

+ (id)buttonWithType:(long long)arg1;	// IMP=0x0000000000049404
- (id)_cursorForTargetedPreview:(id)arg1;	// IMP=0x0000000000049abd
- (id)_preview;	// IMP=0x0000000000049953
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;	// IMP=0x0000000000049865
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000004984f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000049715

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
