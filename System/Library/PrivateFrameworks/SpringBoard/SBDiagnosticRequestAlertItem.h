//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSArray, NSString;

@interface SBDiagnosticRequestAlertItem : SBAlertItem
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    NSString *_radarTitle;	// 32 = 0x20
    NSString *_radarDescription;	// 40 = 0x28
    NSArray *_radarAttachments;	// 48 = 0x30
    long long _radarClassification;	// 56 = 0x38
    long long _radarReproducibility;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005c68c0
@property(nonatomic) long long radarReproducibility; // @synthesize radarReproducibility=_radarReproducibility;
@property(nonatomic) long long radarClassification; // @synthesize radarClassification=_radarClassification;
@property(copy, nonatomic) NSArray *radarAttachments; // @synthesize radarAttachments=_radarAttachments;
@property(copy, nonatomic) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(copy, nonatomic) NSString *radarTitle; // @synthesize radarTitle=_radarTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)_stringFromReproducibility:(long long)arg1;	// IMP=0x00000000005c6744
- (id)_stringFromClassification:(long long)arg1;	// IMP=0x00000000005c66ab
- (void)_fileRadar;	// IMP=0x00000000005c5fdf
- (id)_noButtonTitle;	// IMP=0x00000000005c5f73
- (id)_yesButtonTitle;	// IMP=0x00000000005c5f07
- (void)performUnlockAction;	// IMP=0x00000000005c5ef5
- (_Bool)reappearsAfterLock;	// IMP=0x00000000005c5eed
- (_Bool)reappearsAfterUnlock;	// IMP=0x00000000005c5ee5
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000000005c5edd
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000005c5b70

@end
