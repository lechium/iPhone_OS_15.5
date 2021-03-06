//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction
{
    VSRecognitionAction *_confirmedAction;	// 72 = 0x48
    VSRecognitionAction *_deniedAction;	// 80 = 0x50
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;	// 88 = 0x58
}

- (id)deniedAction;	// IMP=0x000000000002a9fa
- (void)setDeniedAction:(id)arg1;	// IMP=0x000000000002a9bc
- (id)confirmedAction;	// IMP=0x000000000002a9ab
- (void)setConfirmedAction:(id)arg1;	// IMP=0x000000000002a96d
- (void)_setConfirmed:(_Bool)arg1;	// IMP=0x000000000002a953
- (int)completionType;	// IMP=0x000000000002a8fc
- (void)dealloc;	// IMP=0x000000000002a8a4
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x000000000002a85d
- (id)init;	// IMP=0x000000000002a7eb

@end

