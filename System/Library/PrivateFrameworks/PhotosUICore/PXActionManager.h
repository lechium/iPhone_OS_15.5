//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject
{
    id <PXActionPerformerDelegate> _performerDelegate;	// 8 = 0x8
    NSSet *_allowedActionTypes;	// 16 = 0x10
}

+ (CDUnknownBlockType)_unlockDeviceHandler;	// IMP=0x0000000000357547
+ (void)setEnsureUnlockedDeviceHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000357442
- (void).cxx_destruct;	// IMP=0x0000000000357950
@property(copy, nonatomic) NSSet *allowedActionTypes; // @synthesize allowedActionTypes=_allowedActionTypes;
@property(nonatomic) __weak id <PXActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;
- (_Bool)isActionTypeAllowed:(id)arg1;	// IMP=0x0000000000357871
- (id)systemImageNameForActionType:(id)arg1;	// IMP=0x00000000003577c1
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;	// IMP=0x0000000000357711
- (id)actionPerformerForActionType:(id)arg1;	// IMP=0x0000000000357661
- (_Bool)supportsActionType:(id)arg1;	// IMP=0x0000000000357659
- (_Bool)canPerformActionType:(id)arg1;	// IMP=0x00000000003575a9
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000359d2a
- (id)actionKeyCommands;	// IMP=0x0000000000359d1d
- (_Bool)supportsContextMenu;	// IMP=0x0000000000359d15
- (id)contextMenu;	// IMP=0x0000000000359d0d
- (id)activityForActionType:(id)arg1;	// IMP=0x0000000000359c5d
- (id)alertActionViewControllerForActionType:(id)arg1;	// IMP=0x0000000000359c55
- (id)alertActionForActionType:(id)arg1;	// IMP=0x0000000000359ba5
- (id)standardActionForActionType:(id)arg1;	// IMP=0x0000000000359af5
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;	// IMP=0x0000000000359a38
- (id)barButtonItemForActionType:(id)arg1;	// IMP=0x0000000000359988

@end

