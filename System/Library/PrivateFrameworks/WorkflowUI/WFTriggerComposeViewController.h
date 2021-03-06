//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController
{
    id <WFTriggerComposeViewControllerDelegate> delegate;	// 8 = 0x8
    unsigned long long _mode;	// 16 = 0x10
}

+ (_Bool)canShowInputAction;	// IMP=0x00000000001a4d86
- (void).cxx_destruct;	// IMP=0x00000000001a4d75
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WFTriggerComposeViewControllerDelegate> delegate; // @synthesize delegate;
- (void)didTapNext:(id)arg1;	// IMP=0x00000000001a4cca
- (id)doneBarButtonItem;	// IMP=0x00000000001a4c2d
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a49e3
- (unsigned long long)navigationUpdateBehavior;	// IMP=0x00000000001a49d8
- (id)emptyStateString;	// IMP=0x00000000001a496c
- (void)viewDidLoad;	// IMP=0x00000000001a48f0
- (_Bool)isModalInPresentation;	// IMP=0x00000000001a48e8
- (void)dealloc;	// IMP=0x00000000001a47f8
- (id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3;	// IMP=0x00000000001a478f

@end

