//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, SSVDialogResponse;

@interface DaemonDialogOperation : ISOperation
{
    ISDialog *_dialog;	// 96 = 0x60
    SSVDialogResponse *_dialogResponse;	// 104 = 0x68
    _Bool _displaysOnLockscreen;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
}

- (void)run;	// IMP=0x0020000000121720
@property(copy) CDUnknownBlockType outputBlock;
// Error: Property attributes should begin with the type ('T') attribute, property name: displaysOnLockscreen
// Property attributes: (null)

@property(readonly, copy) SSVDialogResponse *dialogResponse;
@property(readonly) ISDialog *dialog;
- (void)dealloc;	// IMP=0x00100000001214e7
- (id)initWithDialog:(id)arg1;	// IMP=0x0010000000121490

@end
